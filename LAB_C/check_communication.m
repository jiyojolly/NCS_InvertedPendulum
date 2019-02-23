figure(1)
plot( squeeze(tAngleFromGyro.time), squeeze(tAngleFromGyro.signals.values), '-b' );
axis([0, max(tAngleFromGyro.time), 100, 190]);
legend('raw signal');
title('measurements from the gyroscope'); xlabel('time (sec)'); ylabel('degrees');
set(gcf, 'Units', 'centimeters');
set(gcf, 'Position', [1 1 11 9]);
set(gcf, 'PaperPositionMode', 'auto');
print('-depsc2', '-r300', 'raw_angle_from_gyro.eps');