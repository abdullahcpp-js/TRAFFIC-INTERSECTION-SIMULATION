
#pragma once

enum class VehicleType
{
    NORMAL,
    EMERGENCY
};

enum class EventType
{
    VEHICLE_ARRIVAL,
    SIGNAL_CHANGE,
    VEHICLE_DEPARTURE
};

enum class SignalState
{
    RED,
    YELLOW,
    GREEN
};

enum class SignalMode
{
    FIXED,
    ADAPTIVE
};
