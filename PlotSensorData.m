measurementsPerPoint = 100;

distanceArray = [25, 50, 75, 100, 150, 200, 300, 400, 500, 600, 700, 850, 1000, 1150, 1300, 1500];
angleArray = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170];

USMedianArray = zeros(length(distanceArray), length(angleArray));
IRMedianArray = zeros(length(distanceArray), length(angleArray));
LAMedianArray = zeros(length(distanceArray), length(angleArray));

Markers = {'--x', '--o', '--s', '--^', '--+', '--*', '--d', '--.', '--v', '--<', '-->', '--p', '--h', ':+', ':o', ':*', ':.', ':x', ':s', ':d', ':^', ':v', ':<', ':>', ':p', ':h'};

set(groot,'DefaultAxesColorOrder', [0 0 0; 1 0 0; 0 1 0; 0 0 1],'DefaultAxesLineStyleOrder',Markers)

for j = 1:length(angleArray)
    figure('Name', sprintf('ultrasonic sensor @ %d°', angleArray(j)), 'visible', 'off');
    hold on
    for i = 1:length(distanceArray)
        messreihe = UltrasonicSensorArray(i,j,:);
        values = repmat(distanceArray(i), measurementsPerPoint, 1);
        USMedianArray(i,j) = median(messreihe);
        scatter(values, messreihe, 'x', 'k', 'HandleVisibility','off'); 
    end
    title(sprintf('ultrasonic sensor @ %d°', angleArray(j)));
    xlabel("Distance in mm");
    ylabel("Sensor Value");
    plot(distanceArray, USMedianArray(:,j), "DisplayName", "median");
    plot(NaN, NaN, 'xk', "DisplayName", "measured Point");
    legend('Location', 'southeast')
    saveas(gcf,sprintf('Figures/Ultraschallsensor @ %d°.png', angleArray(j)));
    
    
    figure('Name', sprintf('infrared sensor @ %d°', angleArray(j)), 'visible', 'off');
    hold on
    for i = 1:length(distanceArray)
        messreihe = InfraredSensorArray(i,j,:);
        values = repmat(distanceArray(i), measurementsPerPoint, 1);
        IRMedianArray(i,j) = median(messreihe);
        scatter(values, messreihe, 'x', 'k', 'HandleVisibility','off');
    end
    title(sprintf('infrared sensor @ %d°', angleArray(j)));
    xlabel("Distance in mm");
    ylabel("Sensor Value");
    plot(distanceArray, IRMedianArray(:,j), "DisplayName", "median");
    plot(NaN, NaN, 'xk', "DisplayName", "measured Point");
    legend('Location', 'southeast')
    saveas(gcf,sprintf('Figures/Infrarotsensor @ %d°.png', angleArray(j)));
   
    figure('Name', sprintf('Lasersensor @ %d°', angleArray(j)), 'visible', 'off');
    hold on
    for i = 1:length(distanceArray)
        messreihe = LaserSensorArray(i,j,:);
        values = repmat(distanceArray(i), measurementsPerPoint, 1);
        LAMedianArray(i,j) = median(messreihe);
        scatter(values, messreihe, 'x', 'k', 'HandleVisibility','off');
    end
    title(sprintf('laser sensor @ %d°', angleArray(j)));
    xlabel("Distance in mm");
    ylabel("Sensor Value");
    plot(distanceArray, LAMedianArray(:,j), "DisplayName", "median");
    plot(NaN, NaN, 'xk', "DisplayName", "measured Point");
    legend('Location', 'southeast')
    saveas(gcf,sprintf('Figures/Lasersensor @ %d°.png', angleArray(j)));
end


figure('Name', 'infrared sensor median values', 'visible', 'off');
hold on
for i = 1:length(angleArray)
    plot(distanceArray, IRMedianArray(:,i), "DisplayName", sprintf('%d°', angleArray(i)));
end
title("infrared sensor median values")
legend('Location', 'southeast', 'NumColumns',2)
xlabel("Distance in mm");
ylabel("Sensor Value");
saveas(gcf, "Figures/infrared sensor median values.png");

figure('Name', 'laser sensor median values', 'visible', 'off');
hold on
for i = 1:length(angleArray)
    plot(distanceArray, LAMedianArray(:,i), "DisplayName", sprintf('%d°', angleArray(i)));
end
title("laser sensor median values")
legend('Location', 'southeast', 'NumColumns',2)
xlabel("Distance in mm");
ylabel("Sensor Value");
saveas(gcf, "Figures/laser sensor median values.png");

figure('Name', 'ultra sonic sensor median values', 'visible', 'off');
hold on
for i = 1:length(angleArray)
    plot(distanceArray, USMedianArray(:,i), "DisplayName", sprintf('%d°', angleArray(i)));
end
title("ultra sonic sensor median values")
legend('Location', 'southeast', 'NumColumns',2)
xlabel("Distance in mm");
ylabel("Sensor Value");
saveas(gcf, "Figures/ultra sonic median values.png");