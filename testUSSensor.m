%arduinoObj = arduino("/dev/cu.usbmodemFA131",'Uno', 'Libraries', 'Ultrasonic');
arduinoObj = arduino('COM3','Uno', 'Libraries', 'Ultrasonic');
ultrasonicObj = ultrasonic(arduinoObj,'D3','D2');

while 1
    readDistance(ultrasonicObj)
end