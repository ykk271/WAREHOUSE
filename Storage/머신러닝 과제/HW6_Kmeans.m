rng default; %raw data를 고정하기 위함
clear;
clc;

%k값 입력
k = 3; %k가 4이상이면 무한 루프에 걸릴 수도 있음


stop = 0; %반복문을 위한 변수

%RAW DATA
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
X = [randn(100,2)*0.75 + ones(100,2);
    randn(100,2)*0.5  - ones(100,2)];
m = length(X);
tmp = zeros(m,1); % cluster 입력하기 위함
X = [X,tmp];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



%centeroid 초기값 랜덤 설정
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
rng('shuffle'); % 실행할때마다 달라지게 하기 위함
centeroid_index = randi([1 m],k,1);
centeroid = zeros(k,2);
% 데이터중 임이의 데이터를 centeroid로 설정
for i = 1:k
    centeroid(i,1) = X(centeroid_index(i),1);
    centeroid(i,2) = X(centeroid_index(i),2);    
end
centeroid_first = centeroid;
fig1 = figure;
set(fig1, 'Units', 'centimeters')
set(fig1, 'Position', [8 5 25  10])
set(gcf, 'Color', 'w')
subplot(1,2,1);

scatter(X(:,1),X(:,2),30,'filled','MarkerFaceColor','#cccccc'); hold on
scatter(centeroid(:,1),centeroid(:,2),50,'filled','MarkerFaceColor','r'); hold on
title('Centeroid 초기값','Fontsize',16)
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

stop = 0;
J = 0;
while(stop==0)  % centeroid가 움직이지 않으면 종료
    centeroid_old = centeroid;
    
    
    %data 분류
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    tmp2 = zeros(k,1);
    for i = 1:m
        
        for j = 1:k
            tmp2(j) = ( X(i,1) -  centeroid(j,1) )^2 + ( X(i,2) -  centeroid(j,2) )^2;
            cluster = find(tmp2 == min(tmp2),1,'first');
        end
        X(i,3) = cluster;
    end
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    
    
    
    %centeroid 이동
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    tmp3 = zeros(k,2);
    
    for i = 1:m
        for j = 1:k
            if (X(i,3) == j)
                tmp3(j,1)  = tmp3(j,1) + X(i,1);
                tmp3(j,2)  = tmp3(j,2) + X(i,2);
            end
            tmp4 = find (X(:,3) == j);
            tmp4 = length(tmp4);
        end
    end    
    
    
    for j = 1:k % 무게중심 구하기
        centeroid(j,1)  = tmp3(j,1)/tmp4;
        centeroid(j,2)  = tmp3(j,2)/tmp4;
    end       
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%    
    
    
    %centeroid 이동이 없으면 종료
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    if( sum(centeroid - centeroid_old) == 0)
        stop = 1;
    end
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   
    
   disp('실행중')     
end

%figure와 J값 구하기
J = 0;
subplot(1,2,2);
for i = 1:m
    if X(i,3) == 1
        scatter(X(i,1),X(i,2),20,'filled','MarkerFaceColor','#0072BD'); hold on;
        J = J + ( X(i,1) -  centeroid(1,1) )^2 + ( X(i,2) -  centeroid(1,2) )^2;
    elseif X(i,3) == 2
        scatter(X(i,1),X(i,2),20,'filled','MarkerFaceColor','#D95319'); hold on;
        J = J + ( X(i,1) -  centeroid(2,1) )^2 + ( X(i,2) -  centeroid(2,2) )^2;
    elseif X(i,3) == 3
        scatter(X(i,1),X(i,2),20,'filled','MarkerFaceColor','#EDB120'); hold on;
        J = J + ( X(i,1) -  centeroid(3,1) )^2 + ( X(i,2) -  centeroid(3,2) )^2;
    elseif X(i,3) == 4
        scatter(X(i,1),X(i,2),20,'filled','MarkerFaceColor','#7E2F8E'); hold on;
        J = J + ( X(i,1) -  centeroid(4,1) )^2 + ( X(i,2) -  centeroid(4,2) )^2;
    elseif X(i,3) == 5
        scatter(X(i,1),X(i,2),20,'filled','MarkerFaceColor','#77AC30'); hold on;
        J = J + ( X(i,1) -  centeroid(5,1) )^2 + ( X(i,2) -  centeroid(5,2) )^2;
    elseif X(i,3) == 6
        scatter(X(i,1),X(i,2),20,'filled','MarkerFaceColor','#4DBEEE'); hold on;
        J = J + ( X(i,1) -  centeroid(6,1) )^2 + ( X(i,2) -  centeroid(6,2) )^2;
    elseif X(i,3) == 7
        scatter(X(i,1),X(i,2),20,'filled','MarkerFaceColor','#A2142F'); hold on;
        J = J + ( X(i,1) -  centeroid(7,1) )^2 + ( X(i,2) -  centeroid(7,2) )^2;
    end
end

s = scatter(centeroid(:,1),centeroid(:,2),100);
s.LineWidth = 3;
s.MarkerEdgeColor = 'r';
s.MarkerFaceColor = '#00FF00';
xlim([-3 4]);
ylim([-3 4]);

J_text = sprintf('J= %.4f',J);
text(-2.5,3.5,J_text,'Fontsize',14);
title('Result','Fontsize',16)

