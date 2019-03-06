function [exectime, data] = ctrl_code(segment, data)

switch segment
 case 1
  y = ttAnalogIn(1);
  data.u = -data.K * y;
  exectime = 0.5;
 case 2
%  ttAnalogOut(1, data.u)
  exectime = 0.5;
 case 3
  ttAnalogOut(1, data.u)
  exectime = -1;
end