messreihe1 = UltrasonicSensorArray(1,1,:);
values = repmat(distanceArray(1), measurementsPerPoint, 1);

scatter(values, messreihe1);