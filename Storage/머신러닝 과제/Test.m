%Test

T = zeros(5, 5, 5);
N = 5; %Test data 개수 입력

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Test data
T(:,:,1) = [0 0 1 1 0;
            0 0 1 1 0;
            0 1 0 1 0;
            0 0 0 1 0;
            0 1 1 1 0;
            ];
        
T(:,:,2) = [1 1 1 1 0;
            0 0 0 0 1;
            0 1 1 1 0;
            1 0 0 0 1;
            1 1 1 1 1;
            ];
        
T(:,:,3) = [1 1 1 1 0;
            0 0 0 0 1;
            0 1 1 1 0;
            1 0 0 0 1;
            1 1 1 1 0;
            ];
        
T(:,:,4) = [0 1 1 1 0;
            0 1 0 0 0;
            0 1 1 1 0;
            0 0 0 1 0;
            0 1 1 1 0
            ];
        
T(:,:,5) = [0 1 1 1 1;
            0 1 0 0 0;
            0 1 1 1 0;
            0 0 0 1 0;
            1 1 1 1 0;
            ];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear yhat;   %Train에서 쓰인 yhat 제거
yhat = zeros(5,N);
for k = 1:N
    u = reshape(T(:,:,k),25,1);
    z1 = W1' * u;
    x1 = Sigmoid(z1);
    z = W2' * x1;
    yhat(:,k) = Softmax(z);
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%함수
function y = Sigmoid(x)
y = 1 ./ (1+exp(-x));
end
 

function y = Softmax(x)
ex = exp(x);
y = ex/sum(ex);
end
  
