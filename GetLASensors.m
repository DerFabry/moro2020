arduinoObj = serialport("/dev/tty.usbmodemFA131",9600);
%arduinoObj = serialport("COM5",9600);
configureTerminator(arduinoObj,"CR/LF");

flush(arduinoObj);
arduinoObj.UserData = struct("Data",[],"Count",1);
numberOfMeasurements = 100;

distanceArray = [25, 50, 75, 100, 150, 200, 300, 400, 500, 600, 700, 850, 1000, 1150, 1300, 1500];
angleArray = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170];
measurementsPerPoint = 100;
d = length(distanceArray);
a = length(angleArray);
restart = exist('LaserSensorArray', 'var')
if restart == 0
    LaserSensorArray = zeros(d,a,measurementsPerPoint);
end
for i = 10:a
    for j = 1:d
        str = sprintf("Lasersensor ausrichten: %dmm, %d°", distanceArray(j), angleArray(i));
        input(str);
        flush(arduinoObj);
        for k = 1:measurementsPerPoint
            data = readline(arduinoObj);
            LaserSensorArray(j, i, k) = str2double(data);
        end
        filename = sprintf("LAwip%d%d.mat", angleArray(i),distanceArray(j));
        save(filename, 'LaserSensorArray')
    end
end

clearvars -except LaserSensorArray
