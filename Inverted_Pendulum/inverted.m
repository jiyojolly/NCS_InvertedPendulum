%%
clear
clc
close all

%% Parameters
M = 0.5;
m = 0.2;
b = 0.1;
I = 0.006;
g = 9.8;
l = 0.3;

p = I*(M+m)+M*m*l^2; %denominator for the A and B matrices


%% State Matrix
A = [0 1 0 0;
0 -(I+m*l^2)*b/p (m^2*g*l^2)/p 0;
0 0 0 1;
0 -(m*l*b)/p m*g*l*(M+m)/p 0];
B = [ 0;
(I+m*l^2)/p;
0;
m*l/p];

%% Output
%C = [1 0 0 0; 0 0 1 0];
C = [1 0 0 0];
D = zeros(size(C,1),size(B,2));

%% Build System
sys = ss(A,B,C,D);
Sc = ctrb(sys);
So = obsv(sys);
x0 = [0; 0; 5*pi/180; 0];

%% Controller
Q = 10*eye(4);
R = 0.01*eye(1);
K_lqr = lqr(A,B,Q,R);

%% Discrete Time
Ts = 1/100;
sys_d = c2d(sys,Ts,'zoh');
Ad = sys_d.A;
Bd = sys_d.B;
Cd = sys_d.C;
Dd = sys_d.D;

K_dlqr = dlqr(Ad,Bd,Q,R);

%% Kalman Filter
Plant = ss(Ad,[Bd Bd],Cd,0,Ts,'inputname',{'u' 'w'},'outputname','y')
Qn = 500; 
Rn = 1;
[kalmf,K_kalman,P,M] = kalman(Plant,Qn,eye(size(Cd,1))*Rn);