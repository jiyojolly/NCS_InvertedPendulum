function controller_init()

% Distributed control system: controller node
%
% Receives messages from the sensor node, computes control signal
% and sends it to the actuator node. Also contains a high-priority
% disturbing task.

% Initialize TrueTime kernel
ttInitKernel('prioDM') % deadline-monotonic scheduling

% Create task data (local memory)
data.u = 0;

% Periodic dummy task with higher priority
starttime = 0.0;
period = evalin('base','Ts');
ttCreatePeriodicTask('controller_task', starttime, period, 'controller_code', data);

