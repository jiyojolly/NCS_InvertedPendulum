cd ../truetime-2.0/kernel
setenv('TTKERNEL',pwd)
cd matlab
cd help
addpath(pwd)
cd ..
addpath(pwd)
cd ..
addpath(pwd)
cd ../../Inverted_Pendulum

run('kalman_init.m');

clear functions;
