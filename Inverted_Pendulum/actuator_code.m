function [exectime, data] = actuator_code(seg, data)

disp("calling actuator")
persistent u

switch seg
 case 1
  u = ttGetMsg;
  exectime = 0.0005;
  disp("getting Message")
 otherwise
  if ~isempty(u)
    ttAnalogOut(1, u)
    disp("same Output to Actuator")
  else
    disp('Error: actuator received empty message!')
  end
  exectime = -1; % finished
end
