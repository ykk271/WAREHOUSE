% 인공지능과 딥러닝 기초 HW7
% 2020020664 김예광



clc; clear; close all;
%raw data
%greed = true, red = false
x = [5, 5;
     3, 5;
     5, 3;
     3, 3];
y = [0; 1; 1; 0];
[m, n] = size(x);

%weight 초기화

w1(1,1) = randi([1 100],1);
w1(1,2) = randi([1 100],1);
w1(1,3) = randi([1 100],1);
w1(1,4) = randi([1 100],1);

w1(2,1) = randi([1 100],1);
w1(2,2) = randi([1 100],1);
w1(2,3) = randi([1 100],1);
w1(2,4) = randi([1 100],1);

w_ini = w1; %초기값 저장

w2 = zeros(4, 1);
b1 = ones(4, 1);
b2 = 1;
result = ones(m, 1);
alpha = 10^(-2);

bool = 0; %반복문 종료를 위한 변수



count = 1;

while(bool ~= 1)


for i = 1:m
node1(i,1) = ( x(i,1) * w1(1,1) ) + ( x(i,2) * w1(2, 1) ) + b1(1,1);
node1(i,1) = 1./(1+exp(-node1(i,1)));
y1(i,1) = node1(i,1);
if (y1(i,1) < 0.5)
    y1(i,1) = 0;
else
    y1(i,1) = 1;
end

node2(i,1) = ( x(i,1) * w1(1, 2) ) + ( x(i,2) * w1(2, 2) ) + b1(2,1);
node2(i,1) = 1./(1+exp(-node2(i,1)));
y2(i,1) = node2(i,1);
if (y2(i,1) < 0.5)
    y2(i,1) = 0;
else
    y2(i,1) = 1;
end


node3(i,1) = ( x(i,1) * w1(1, 3) ) + ( x(i,2) * w1(2, 3) ) + b1(3,1);
node3(i,1) = 1./(1+exp(-node2(i,1)));
y3(i,1) = node3(i,1);
if (y3(i,1) < 0.5)
    y3(i,1) = 0;
else
    y3(i,1) = 1;
end

node4(i,1) = ( x(i,1) * w1(1, 4) ) + ( x(i,2) * w1(2, 4) ) + b1(4,1);
node4(i,1) = 1./(1+exp(-node2(i,1)));
y4(i,1) = node3(i,1);
if (y4(i,1) < 0.5)
    y4(i,1) = 0;
else
    y4(i,1) = 1;
end


%node 수가 2개일 때
% y_hat(i,1) = ( y1(i,1) * w2(1,1) ) + ( y2(i,1) * w2(2,1) )   + b2;  

%node 수가 4개일 때
y_hat(i,1) = ( y1(i,1) * w2(1,1) ) + ( y2(i,1) * w2(2,1) )   + ( y3(i,1) * w2(3,1) ) + ( y4(i,1) * w2(4,1) )  + b2; 

y_hat(i,1) = 1./(1+exp(-y_hat(i,1)));
y_hat2(i,1) = y_hat(i,1);
if (y_hat2(i,1) < 0.5)
    y_hat2(i,1) = 0;
else
    y_hat2(i,1) = 1;
end
result(i,1) = y_hat2(i,1);


end

% 정답과 같아지면 반복문 종료
if(result(1,1) == y(1,1) && result(2,1) == y(2,1) && result(3,1) == y(3,1) && result(4,1) == y(4,1))
    
bool = 1;
else    % w, b 업데이트
b1(1,1) = b1(1,1) - alpha / m * sum( node1 - y );    
b1(2,1) = b1(2,1) - alpha / m * sum( node2 - y ); 
b1(3,1) = b1(3,1) - alpha / m * sum( node3 - y ); 
b1(4,1) = b1(4,1) - alpha / m * sum( node4 - y ); 

b2 = b2 - alpha / m * sum( y_hat - y ); 

w1(1,1) = w1(1,1) - alpha / m * sum( (node1 - y) .* x(:,1) ); 
w1(1,2) = w1(1,2) - alpha / m * sum( (node2 - y) .* x(:,1) ); 
w1(1,3) = w1(1,3) - alpha / m * sum( (node3 - y) .* x(:,1) ); 
w1(1,4) = w1(1,4) - alpha / m * sum( (node4 - y) .* x(:,1) ); 

w1(2,1) = w1(2,1) - alpha / m * sum ( (node1 - y).* x(:,2) ); 
w1(2,2) = w1(2,2) - alpha / m * sum ( (node2 - y).* x(:,2) ); 
w1(2,3) = w1(2,3) - alpha / m * sum ( (node3 - y).* x(:,2) ); 
w1(2,4) = w1(2,4) - alpha / m * sum ( (node4 - y).* x(:,2) ); 


w2(1,1) = w2(1,1) - alpha / m * sum ( (y_hat - y).* node1 ); 
w2(2,1) = w2(2,1) - alpha / m * sum ( (y_hat - y).* node2 );
w2(3,1) = w2(3,1) - alpha / m * sum ( (y_hat - y).* node3 );
w2(4,1) = w2(4,1) - alpha / m * sum ( (y_hat - y).* node4 );

end
% 반복 횟수 출력
disp(count);
count = count + 1 ; 

% 1만번 돌때마다 w1 초기값 변경
if (count == 10000)
w1(1,1) = randi([1 100],1);
w1(1,2) = randi([1 100],1);
w1(1,3) = randi([1 100],1);
w1(1,4) = randi([1 100],1);

w1(2,1) = randi([1 100],1);
w1(2,2) = randi([1 100],1);
w1(2,3) = randi([1 100],1);
w1(2,4) = randi([1 100],1);


w_ini = w1;
count = 1;

end

end

%초기값 출력
w_ini


