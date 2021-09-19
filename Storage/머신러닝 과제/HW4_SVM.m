%김예광

clc; clear; close all;



%%%% RAW DATA %%%%%%%%%%%%%%%%%%%%

data = [;
    55.5  69.5  1;
    41.0  81.5  1;
    53.5  86.0  1;
    46.0  84.0  1;
    41.0  73.5  1;
    51.5  69.0  1;
    51.0  62.5  1;
    42.0  75.0  1;
    53.5  83.0  1;
    57.5  71.0  1;
    42.5  72.5  1;
    41.0  80.0  1;
    46.0  82.0  1;
    46.0  60.5  1;
    49.5  76.0  1;
    41.0  76.0  1;
    48.5  72.5  1;
    51.5  82.5  1;
    44.5  70.5  1;
    44.0  66.0  1;
    33.0  76.5  1;
    33.5  78.5  1;
    31.5  72.0  1;
    33.0  81.5  1;
    42.0  59.5  1;
    30.0  64.0  1;
    61.0  45.0  1;
    49.0  79.0  1;
    26.5  64.5  1;
    34.0  71.5  1;
    42.0  83.5  1;
    29.5  74.5  1;
    39.5  70.0  1;
    51.5  66.0  1;
    41.5  71.5  1;
    42.5  79.5  1;
    35.0  59.5  1;
    38.5  73.5  1;
    32.0  81.5  1;
    46.0  60.5  1;
    36.5  53.0  0;
    36.5  53.5  0;
    24.0  60.5  0;
    19.0  57.5  0;
    34.5  60.0  0;
    37.5  64.5  0;
    35.5  51.0  0;
    37.0  50.0  0;
    21.5  42.0  0;
    35.5  58.5  0;
    26.5  68.5  0;
    26.5  55.5  0;
    18.5  67.0  0;
    40.0  67.0  0;
    32.5  71.5  0;
    39.0  71.5  0;
    43.0  55.5  0;
    22.0  54.0  0;
    36.0  62.5  0;
    31.0  55.5  0;
    38.5  76.0  0;
    40.0  75.0  0;
    37.5  63.0  0;
    24.5  58.0  0;
    30.0  67.0  0;
    33.0  56.0  0;
    56.5  61.0  0;
    41.0  57.0  0;
    49.5  63.0  0;
    34.5  72.5  0;
    32.5  69.0  0;
    36.0  73.0  0;
    27.0  53.5  0;
    41.0  63.5  0;
    29.5  52.5  0;
    20.0  65.5  0;
    38.0  65.0  0;
    18.5  74.5  0;
    16.0  72.5  0;
    33.5  68.0  0;
    ];

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%0을 -1로 변환
for i = 1:length(data)
    if data(i,3) == 0
        data(i,3) = -1;
    end
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%점수를 표준점수로 변환(평균은 0을 갖도록 중심화, 표준편차 1)
%매트랩 고유 함수
data(:,1:end-1)=zscore(data(:,1:end-1));

% train set과 test set을 8:2 비율로 랜덤하게 나눔
[train,test] = holdout(data,80);
Xtest=test(:,1:end-1);Ytest=test(:,end);
X=train(:,1:end-1);Y=train(:,end);

fig1 = figure;
%figure 사이즈, 배경색 설정
set(fig1, 'Units', 'centimeters')
set(fig1, 'Position', [3 5 40   10])
set(gcf, 'Color', 'w')


%RAW DATA PLOT
subplot(1,3,1)
hold on
scatter(data(1:40,1),data(1:40,2),100,'.b'); hold on
scatter(data(41:80,1),data(41:80,2),100,'.r'); hold on
axis([-3 3 -3 3])
xlabel('{x_1}')
ylabel('{x_2}')
legend('Positive Class','Negative Class')
title('RAW')




% 이 부분은 잘 이해가 되지 않습니다.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


% Applying Gradient Ascent with linear Kernel
fm_=[];
for c= 0.1:0.1:5
    
    % alpha
    alpha = grad_ascent(X,Y,c);
    
    % Possible support vectors
    Xs=X(alpha>0,:);
    Ys=Y(alpha>0);
    
    % weights
    W=(alpha(alpha>0).*Ys)'*Xs;
    
    % bias
    bias=mean(Ys-(Xs*W'));
    
    % f~ (Predicted labels)
    f=sign(Xtest*W'+bias);
    
    % confusion matrix
    fm= confusion_mat(Ytest,f);
    fm_=[fm_; c fm];
end
% Regularization parameter, C 'optimal'
% After Cross-Validation, Optimal 'c' value- Yeilding Best Performance (F-measure)
[max_fm, indx]=max(fm_(:,2));
c_optimal=fm_(indx,1);
c_optimal  % holdout이 random이라 계속 바뀜
% Final Model
% * _*Alpha*_
alpha = grad_ascent(X,Y,c_optimal);
Xs=X(alpha>0,:); Ys=Y(alpha>0);
Support_vectors=size(Xs,1);
%
% * _*Weights*_
W=(alpha(alpha>0).*Ys)'*Xs;
%
% * _*Bias*_
bias=mean(Ys-(Xs*W'));
%
% * _*f~ (Predicted labels)*_
f=sign(Xtest*W'+bias);
%
% * _*Performace Measure*_
[F_measure, Accuracy] = confusion_mat(Ytest,f);
% Slack Variables, ?
% *Remark*: Number of Support Vectors and non-zero ? should be nearly same


ft=X*W'+bias;
zeta=max(0,1-Y.*ft);
Non_Zero_Zeta=sum(zeta~=0);
Support_vectors;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%







%TRAIN PLOT
subplot(1,3,2)
hold on

scatter(X(Y==1,1),X(Y==1,2),100,'.b')
scatter(X(Y==-1,1),X(Y==-1,2),100,'.r')
scatter(Xs(Ys==1,1),Xs(Ys==1,2),100,'*b')
scatter(Xs(Ys==-1,1),Xs(Ys==-1,2),100,'*r')


syms x
fn=vpa((-bias-W(1)*x)/W(2),4);
fplot(fn,'k','Linewidth',2);
fn1=vpa((1-bias-W(1)*x)/W(2),4);
fplot(fn1,'--');
fn2=vpa((-1-bias-W(1)*x)/W(2),4);
fplot(fn2,'--');

xlabel('X_1')
ylabel('X_2')
axis([-3 3 -3 3])
title('TRAIN (80% of RAW)')
legend('Positive Class','Negative Class','support vector (+)','support vector (-)','Decision Boundry','Location','southeast')
hold off



%TEST PLOT
subplot(1,3,3)
hold on

scatter(Xtest(Ytest==1,1),Xtest(Ytest==1,2),100,'.b')
scatter(Xtest(Ytest==-1,1),Xtest(Ytest==-1,2),100,'.r')
fplot(fn,'k','Linewidth',2);
xlabel('X_1')
ylabel('X_2')
axis([-3 3 -3 3])
title('TEST (20% of RAW)')
legend('Positive Class','Negative Class','Decision Boundry')





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%FUNCTION%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [trset,teset ] = holdout( A,p )
n=size(A,1);
trdata=floor((n*p*0.01));
tedata=n-trdata;
index=randperm(n);
teset=zeros(tedata, size(A,2));
trset=zeros(trdata, size(A,2));
for i=1:tedata
    teset(i,:)=A(index(i),:);
end
for i=1:trdata
    trset(i,:)=A(index(i+tedata),:);
end
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [alpha] = grad_ascent( X,Y,C )

N=size(X,1);
alpha=zeros(N,1);
alp2=zeros(N,1);

% Tolerence (for convergence)
norm1=Inf;
tol=10e-5;

% Linear Kernel
Ker=X*X';

total_iterations=0;

while norm1>tol
    
    total_iterations=total_iterations+1;
    alp_old=alpha;
    w1=(alp_old.*Y).*X;
    
    for i=1:N
        % Adatron
        eta=1/Ker(i,i);
        
        for j=1:N
            alp2(j,1)=alpha(j,1)*Y(j,1)*Ker(i,j);
        end
        
        alpha(i,1)= alpha(i,1)+eta*(1-(Y(i,1)*sum(alp2)));
        
        if alpha(i,1)<0
            alpha(i,1)=0;
        elseif alpha(i,1)>C
            alpha(i,1)=C;
        end
        
    end
    
    w2=(alpha.*Y).*X;
    norm1=norm(w2-w1);
end

end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [fm acc cm ] = confusion_mat( y_actual,y_predicted )
tp=0;tn=0;fp=0;fn=0;
for i=1:length(y_actual)
    if y_actual(i)>0
        if y_actual(i)==y_predicted(i)
            tp=tp+1;
        else
            fn=fn+1;
        end
    end
    if y_actual(i)<0
        if y_actual(i)==y_predicted(i)
            tn=tn+1;
        else
            fp=fp+1;
        end
    end
end
cm=[tn fp; fn tp];
acc=(tp+tn)/(tp+fn+fp+tn);
sens=tp/(tp+fn);
prec=tp/(tp+fp);
fm=(2*prec*sens)/(prec+sens);
end




