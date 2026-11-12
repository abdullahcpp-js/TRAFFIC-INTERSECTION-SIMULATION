
#include <iostream>
#include "Vehicle.h"

using namespace std;

int main()
{
    Vehicle v1(1, "ABC-123", 1, 2, 5, VehicleType::NORMAL);

    Vehicle v2(2, "RES-786", 1, 3, 7, VehicleType::EMERGENCY);

    cout << "Normal Vehicle" << endl;
    v1.setEntryTime(12);
    v1.display();

    cout << endl;

    cout << "Emergency Vehicle" << endl;
    v2.setEntryTime(10);
    v2.display();

    return 0;
}
