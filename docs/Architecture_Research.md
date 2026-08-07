Notes on the principles of separation of subsystems I used in order to create my classes

Resources and notes I've taken from them: 

First source: Quantum Leaps from Miro Samek

Separation of concern (SoC): to break down complex systems into smaller, more manageable parts - each concern (responsibility) is handled by a specific part 
Application: so we split the software into independent parts -each part solving one type of problem; so here, we separate into different classes to do 1 job - read sensor, print the info, save info to SD, send telemetry and coordinate everything

Single Responsibility Principle (SRP):  Every class should change due to only one reason - Logger changes due to logging feature changing; Sensor Manager only changes if sensors change; focus is to assign a responsibility for each class 
Application: Each class has its own function that is able to change

