function [exectime, data] = sensor_code(seg, data)

persistent y

switch seg
 case 1
  y = ttAnalogIn(1);
  ttAnalogOut(1, y);
  exectime = 0.0005;
 case 2
  exectime = -1; % finished
end
