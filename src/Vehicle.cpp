
#include <iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle()
{
    vehicleID = 0;
    plateNumber = "";

    sourceIntersection = 0;
    destinationIntersection = 0;

    arrivalTime = 0;
    vehicleType = VehicleType::NORMAL;

    entryTime = -1;
    waitingTime = 0;
}

Vehicle::Vehicle(int id, string plate, int source, int destination,
                 int arrival, VehicleType type)
{
    vehicleID = id;
    plateNumber = plate;

    sourceIntersection = source;
    destinationIntersection = destination;

    arrivalTime = arrival;
    vehicleType = type;

    entryTime = -1;
    waitingTime = 0;
}

int Vehicle::getVehicleID()
{
    return vehicleID;
}

string Vehicle::getPlateNumber()
{
    return plateNumber;
}

int Vehicle::getSourceIntersection()
{
    return sourceIntersection;
}

int Vehicle::getDestinationIntersection()
{
    return destinationIntersection;
}

int Vehicle::getArrivalTime()
{
    return arrivalTime;
}

VehicleType Vehicle::getVehicleType()
{
    return vehicleType;
}

int Vehicle::getEntryTime()
{
    return entryTime;
}

int Vehicle::getWaitingTime()
{
    return waitingTime;
}

void Vehicle::setEntryTime(int time)
{
    entryTime = time;
    waitingTime = entryTime - arrivalTime;
}

void Vehicle::display()
{
    cout << "Vehicle ID: " << vehicleID << endl;
    cout << "Number Plate: " << plateNumber << endl;
    cout << "Source: " << sourceIntersection << endl;
    cout << "Destination: " << destinationIntersection << endl;
    cout << "Arrival Time: " << arrivalTime << endl;

    if (vehicleType == VehicleType::EMERGENCY)
        cout << "Type: Emergency" << endl;
    else
        cout << "Type: Normal" << endl;

    cout << "Waiting Time: " << waitingTime << endl;
}
