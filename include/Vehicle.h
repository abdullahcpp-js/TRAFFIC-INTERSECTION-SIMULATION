#pragma once
#include "Common.h"
struct Vehicle {
    int vehicleID;
    char plateNumber[12];
    int sourceIntersection, destinationIntersection, currentIntersection;
    int arrivalTime, entryTime, waitingTime;
    VehicleType vehicleType;
    int priority;                       // 0 normal, POLICE=1, FIRE=2, AMBULANCE=3

    int  getWaitingTime() const { return waitingTime; }
    void addWaiting(int dt)     { waitingTime += dt; }
    bool isEmergency() const    { return priority > 0; }
    const char* getPlate() const { return plateNumber; }
};