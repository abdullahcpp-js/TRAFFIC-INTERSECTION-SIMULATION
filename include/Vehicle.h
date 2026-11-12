
#pragma once

#include <string>
#include "Common.h"

using namespace std;

class Vehicle
{
private:
    int vehicleID;
    string plateNumber;

    int sourceIntersection;
    int destinationIntersection;

    int arrivalTime;
    VehicleType vehicleType;

    int entryTime;
    int waitingTime;

public:
    Vehicle();

    Vehicle(int id, string plate, int source, int destination,
            int arrival, VehicleType type);

    int getVehicleID();
    string getPlateNumber();

    int getSourceIntersection();
    int getDestinationIntersection();

    int getArrivalTime();
    VehicleType getVehicleType();

    int getEntryTime();
    int getWaitingTime();

    void setEntryTime(int time);
    void display();
};
