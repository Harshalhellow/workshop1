#include <iostream>
using namespace std;

int main() {
    Appliance app1(100);
    cout << "Appliance 1 power rating: " << app1.get_powerRating() << endl;
    cout << "Appliance 1 is on: " << app1.get_isOn() << endl;
    app1.turnOn();
    cout << "Appliance 1 is on: " << app1.get_isOn() << endl;

    Appliance app2;
    cout << "Appliance 2 power rating: " << app2.get_powerRating() << endl;
    cout << "Appliance 2 is on: " << app2.get_isOn() << endl;
    app2.turnOn();
    cout << "Appliance 2 is on: " << app2.get_isOn() << endl;

    return 0;
}