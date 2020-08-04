arduinoObj = arduino("/dev/cu.usbmodemFA131",'Uno', 'Libraries', 'Ultrasonic');
%arduinoObj = arduino('COM5','Uno', 'Libraries', 'Ultrasonic');
ultrasonicObj = ultrasonic(arduinoObj,'D3','D2');

numberOfMeasurements = 100;

distanceArray = [25, 50, 75, 100, 150, 200, 300, 400, 500, 600, 700, 850, 1000, 1150, 1300, 1500];
angleArray = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170];
measurementsPerPoint = 100;
d = length(distanceArray);
a = length(angleArray);
restart = exist('UltrasonicSensorArray', 'var')
if restart == 0
    UltrasonicSensorArray = zeros(d,a,measurementsPerPoint);
end

for i = 5:a
    for j = 1:d
        str = sprintf("Ultraschallsensor ausrichten: %dmm, %d°", distanceArray(j), angleArray(i));
        input(str);
        for k = 1:measurementsPerPoint
            UltrasonicSensorArray(j, i, k) = readDistance(ultrasonicObj);
        end
        filename = sprintf("USwip%d%d.mat", angleArray(i),distanceArray(j));
        save(filename, 'UltrasonicSensorArray')
    end
end

clearvars -except UltrasonicSensorArray InfraredSensorArray
