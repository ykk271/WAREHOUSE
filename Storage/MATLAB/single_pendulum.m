clear;clc;

D = 90; % 초기각도
R = deg2rad(D);



time = [1 10];
y_ini = [1; 1];
[t,y] = ode45(@Pendulum_1, time, y_ini);
plot(t,y(:,1));
ylim([-pi/2 pi/2])
yticks([-pi/3, -pi/6, 0, pi/6 pi/3])
yticklabels({'-\pi/3', '-\pi/6','o' '\pi/6' '\pi/3'})


function dydt = Pendulum_1(t,y)
g = 9.8;
l = 1;

dydt      = [y(2);
           -sin(y(1))*g/l ];
end