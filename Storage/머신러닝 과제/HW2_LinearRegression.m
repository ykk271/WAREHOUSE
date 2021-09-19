clc;
clear;


%RAW DATA 입력
score = [90,70,75,76;
         85,93,87,92;
         91,89,90,90;
         98,90,100,98;
         66,63,70,71;
         60,82,80,79;
         92,85,95,85];
%%%%%%%%%%

%파라미터 설정
iterations = 1500;
alpha = 10^(-5);
%%%%%%%%%%%%


x1 = score(:,1);
x2 = score(:,2);
x3 = score(:,3);

result = score(:,4);
m = length(result);



%%%%%%%%%%%%%%%%%%%%%%%ANSWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
syms w1 w2 w3 b
eqn1 = sum(b + w1*x1 + w2*x2  + w3*x3 - result) == 0;
eqn2 = sum( (b + w1*x1 + w2*x2  + w3*x3- result).*x1 ) == 0;
eqn3 = sum( (b + w1*x1 + w2*x2  + w3*x3- result).*x2 ) == 0;
eqn4 = sum( (b + w1*x1 + w2*x2  + w3*x3- result).*x3 ) == 0;

[A,B] = equationsToMatrix([eqn1, eqn2, eqn3 eqn4], [w1, w2, w3, b]);
X = linsolve(A,B);


H = X(4) + (X(1)*x1) + (X(2)*x2) + (X(3)*x3);


J = 1/m * sum((H - result).^2);


Ans_J   = double(J);
Ans_w1  = double(X(1));
Ans_w2  = double(X(2));
Ans_w3  = double(X(3));
Ans_b   = double(X(4));

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%





%초기값 설정%%%%%
w = zeros(3,1);
b = 11.51;
%%%%%%%%%%%%%%%%%






H = b + w(1)*x1 + w(2)*x2  + w(3)*x3;
J = 1/m * sum((H - result).^2);

J_history = NaN(iterations,1);
b_history = NaN(iterations,1);
w1_history = NaN(iterations,1);
w2_history = NaN(iterations,1);
w3_history = NaN(iterations,1);

for i = 1: iterations 

    t0 = b - (alpha * (1/m) * sum(H - result));
    t1 = w(1) - (alpha * (1/m) * sum( (H- result).*x1 ) ); 
    t2 = w(2) - (alpha * (1/m) * sum( (H- result).*x2 ) );
    t3 = w(3) - (alpha * (1/m) * sum( (H- result).*x3 ) ); 


b    = t0;
w(1) = t1;
w(2) = t2;
w(3) = t3;
    
H = b + w(1)*x1 + w(2)*x2  + w(3)*x3;
J = 1/m * sum((H - result).^2);

J_history(i,1) = J;
b_history(i,1) = b;

w1_history(i,1) = t1;
w2_history(i,1) = t2;
w3_history(i,1) = t3;



end




%%% 계산값과 실제값 비교%%%%%%%%%%%%

Com(1,1) = J;
Com(2,1) = w(1);
Com(3,1) = w(2);
Com(4,1) = w(3);
Com(5,1) = b;

Com(1,2) = Ans_J;
Com(2,2) = Ans_w1;
Com(3,2) = Ans_w2;
Com(4,2) = Ans_w3;
Com(5,2) = Ans_b;


%%%%figure%%%%%%%%%%%%%%%%%%%%%%%%%%%
figure;
plot(J_history,'b'); hold on;
yline(Ans_J,'--b');
xlim([iterations*0.5 iterations]) %초반에는 J 값이 너무 커서 후반 50% 만 plot 
legend('J 계산 값', 'J 실제 값')

figure;
plot(b_history,'b'); hold on;
yline(Ans_b,'--b');
legend('b 계산 값', 'b 실제 값')

figure;
plot(w1_history,'r'); hold on;
yline(Ans_w1,'--r');
plot(w2_history,'g'); hold on;
yline(Ans_w2,'--g');
plot(w3_history,'b'); hold on;
yline(Ans_w3,'--b');
legend('w1 계산 값', 'w1 실제값', 'w2 계산 값', 'w2 실제값', 'w3 실제값', 'w3 계산 값')
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%




Com
%1열: 수치적으로 구한 결과 (J, w1, w2, w3, b 순)
%2열: 연립방정식의 해를 이용해 구한 결과 (J, w1, w2, w3, b 순)


%계산 값 - 실제 값 (J, w1, w2, w3, b 순)
for i = 1: length(Com)
Dif(i,1) = Com(i,1) - Com(i,2);     
end


