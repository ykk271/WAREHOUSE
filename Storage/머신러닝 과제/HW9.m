clc; clear; close all;

U = [0 0 ; 0 1 ; 1 0 ; 1 1 ];
Y = [0; 1; 1; 0];


err = 0;
N = 4;
count = 0;
%%%bias
a = 0;
bias_on = 0;
%%%

alpha   = 0.01;

fig1 = figure;
set(fig1, 'Units', 'centimeters')
set(fig1, 'Position', [8 5 25  10])
set(gcf, 'Color', 'w')

for i = 1:20
    
    W1 = normrnd(0,sqrt(2/4),[2,5]);
    W2 = normrnd(0,sqrt(2/5),[5,5]);
    W3 = normrnd(0,sqrt(2/5),[5,5]);
    W4 = normrnd(0,sqrt(2/5),[5,5]);
    W5 = normrnd(0,sqrt(2/5),[5,5]);
    W6 = normrnd(0,sqrt(2/5),[5,5]);
    W7 = normrnd(0,sqrt(2/5),[5,5]);
    W8 = normrnd(0,sqrt(2/5),[5,5]);
    W9 = normrnd(0,sqrt(2/5),[5,5]);
    W10 = normrnd(0,sqrt(2/5),[5,5]);
    W11 = normrnd(0,sqrt(2/6),[5,1]);
    
    
    
    b1  = ones(5,1)*a;
    b2  = ones(5,1)*a;
    b3  = ones(5,1)*a;
    b4  = ones(5,1)*a;
    b5  = ones(5,1)*a;
    b6  = ones(5,1)*a;
    b7  = ones(5,1)*a;
    b8  = ones(5,1)*a;
    b9  = ones(5,1)*a;
    b10 = ones(5,1)*a;
    b11 = ones(1,1)*a;
    
    
    
    
    
    
    for epoch = 1:50000
        for k = 1:N
            u = U(k,:)';
            y = Y(k);
            
            z1 = W1'*u + b1;
            x1 = ReLU(z1);
            z2 = W2'*x1 + b2;
            x2 = ReLU(z2);
            z3 = W3'*x2 + b3;
            x3 = ReLU(z2);
            z4 = W4'*x3 + b4;
            x4 = ReLU(z4);
            z5 = W5'*x4 + b5;
            x5 = ReLU(z5);
            z6 = W6'*x5 + b6;
            x6 = ReLU(z6);
            z7 = W7'*x6 + b7;
            x7 = ReLU(z7);
            z8 = W8'*x7 + b8;
            x8 = ReLU(z8);
            z9 = W9'*x8 + b9;
            x9 = ReLU(z9);
            z10 = W10'*x9 + b10;
            x10 = ReLU(z10);
            z11 = W11'*x10 + b11;
            
            yhat = Sigmoid(z11);
            
            e = yhat - y;
            
            delta = e;
            
            e10 = W11*delta;
            delta10 = (x10>0).*e10;
            e9 = W10*delta10;
            delta9 = (x9>0).*e9;
            e8 = W9*delta9;
            delta8 = (x8>0).*e8;
            e7 = W8*delta8;
            delta7 = (x7>0).*e7;
            e6 = W7*delta7;
            delta6 = (x6>0).*e6;
            e5 = W6*delta6;
            delta5 = (x5>0).*e5;
            e4 = W5*delta5;
            delta4 = (x4>0).*e4;
            e3 = W4*delta4;
            delta3 = (x3>0).*e3;
            e2 = W3*delta3;
            delta2 = (x2>0).*e2;
            e1 = W2*delta2;
            delta1 = (x1>0).*e1;
            
            dW11 = alpha*x10*delta';
            W11 = W11 - dW11;
            dW10 = alpha*x9*delta10';
            W10 = W10 - dW10;
            dW9 = alpha*x8*delta9';
            W9 = W9 - dW9;
            dW8 = alpha*x7*delta8';
            W8 = W8 - dW8;
            dW7 = alpha*x6*delta7';
            W7 = W7 - dW7;
            dW6 = alpha*x5*delta6';
            W6 = W6 - dW6;
            dW5 = alpha*x4*delta5';
            W5 = W5 - dW5;
            dW4 = alpha*x3*delta4';
            W4 = W4 - dW4;
            dW3 = alpha*x2*delta3';
            W3 = W3 - dW3;
            dW2 = alpha*x1*delta2';
            W2 = W2 - dW2;
            dW1 = alpha*u*delta1';
            W1 = W1 - dW1;
            
            if bias_on == 1
                b11 = b11 - alpha * delta;
                b10 = b10 - alpha * delta10;
                b9 = b9 - alpha * delta9;
                b8 = b8 - alpha * delta8;
                b7 = b7 - alpha * delta7;
                b6 = b6 - alpha * delta6;
                b5 = b5 - alpha * delta5;
                b4 = b4 - alpha * delta4;
                b3 = b3 - alpha * delta3;
                b2 = b2 - alpha * delta2;
                b1 = b1 - alpha * delta1;
            end
            
            err = err + e^2;
        end
        error(epoch,1) = err;
        err = 0;
    end
    for k = 1:N
        u = U(k,:)';
        y = Y(k);
        
        z1 = W1'*u;
        x1 = ReLU(z1);
        z2 = W2'*x1;
        x2 = ReLU(z2);
        z3 = W3'*x2;
        x3 = ReLU(z2);
        z4 = W4'*x3;
        x4 = ReLU(z4);
        z5 = W5'*x4;
        x5 = ReLU(z5);
        z6 = W6'*x5;
        x6 = ReLU(z6);
        z7 = W7'*x6;
        x7 = ReLU(z7);
        z8 = W8'*x7;
        x8 = ReLU(z8);
        z9 = W9'*x8;
        x9 = ReLU(z9);
        z10 = W10'*x9;
        x10 = ReLU(z10);
        z11 = W11'*x10;
        yhat = Sigmoid(z11);
        result(k,1) = yhat;
    end
    
    
    
    
    subplot(4,5,i);
    plot(error,'k','linewidth',2);
    ylim([0 3]);
    
    if sum((result - Y).^2) < 0.1
        count = count + 1;
        title('정답','Color','b');
    else
        title('오답','Color','r');
    end
    
    m = sprintf('%d번째 진행중', i);
    disp(m);
end

g = sprintf('정답개수 = %d',count);
f = msgbox(g);
disp(g)

function y = ReLU(x)
y = max(-2,x)-1;
end

function y = Sigmoid(x)
y = 1 ./ (1+exp(-x));
end

