for i = 1:d
    for j = 1:a
        messreihe = UltrasonicSensorArray(d,a,:);
        values = repmat(distanceArray(1), measurementsPerPoint, 1);
        figure;
        hold on;
        scatter(values, messreihe);
    end
end