%arduinoObj = arduino("/dev/cu.usbmodemFA131",'Uno', 'Libraries', 'Ultrasonic');
arduinoObj = arduino('COM3','Uno', 'Libraries', 'Ultrasonic');
while 1
    readVoltage(arduinoObj, 'A0')
end