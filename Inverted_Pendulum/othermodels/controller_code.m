function [exectime, data] = controller_code(seg, data)

switch seg
 case 1
  y = ttGetMsg;         % Obtain sensor value
  if isempty(y)
    disp('Error in controller: no message received!');
    y = 0.0;
  end
  disp(["Receving measurment" y])
  ref = ttAnalogIn(1);
  disp([ref y]);
  outp = ttCallBlockSystem(1, [ref y], 'controller_observer');
  data.u = outp;
  exectime = 0.0005;
 case 2
  ttAnalogOut(1, data.u)
  exectime = -1; % finished
end
