function [exectime, data] = controller_code(seg, data)

switch seg
 case 1
  y = ttGetMsg;         % Obtain sensor value
  disp("Obtaining sensor value")
  if isempty(y)
    disp('Error in controller: no message received!');
    y = 0.0;
  end
  ref = ttAnalogIn(1);
  outp = ttCallBlockSystem(1, [ref y], 'controller_observer');
  data.u = outp;
  exectime = 0.0005;
 case 2
  ttSendMsg(2, data.u, 80);    % Send 80 bits to node 2 (actuator)
  exectime = -1; % finished
end
