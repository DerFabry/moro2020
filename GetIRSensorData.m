arduinoObj = arduino("/dev/cu.usbmodemFA131",'Uno', 'Libraries', 'Ultrasonic');
%arduinoObj = arduino('COM5','Uno', 'Libraries', 'Ultrasonic');
ultrasonicObj = ultrasonic(arduinoObj,'D3','D2');

numberOfMeasurements = 100;

distanceArray = [25, 50, 75, 100, 150, 200, 300, 400, 500, 600, 700, 850, 1000, 1150, 1300, 1500];
angleArray = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170];
measurementsPerPoint = 100;
d = length(distanceArray);
a = length(angleArray);
restart = exist('InfraredSensorArray', 'var')
if restart == 0
    InfraredSensorArray = zeros(d,a,measurementsPerPoint);
end

for i = 1:a
    for j = 1:d
        str = sprintf("InfrarotSensor ausrichten: %dmm, %d°", distanceArray(j), angleArray(i));
        input(str);
        for k = 1:measurementsPerPoint
            InfraredSensorArray(j, i, k) = readVoltage(arduinoObj, 'A0');
        end
        filename = sprintf("IRwip%d%d.mat", angleArray(i),distanceArray(j));
        save(filename,'InfraredSensorArray')
    end
end

clearvars -except InfraredSensorArray
