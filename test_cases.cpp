
#include <iostream>
using namespace std;
//
// Created by Round on 9/26/2023.
//
bool test_quiz();
bool test_question();
int main() {
    if (test_vehicle_type()) {
        cout << "Passed all vehicle type class tests" << endl;
    }

}
bool test_vehicle_type(){
    test = false;
    vehicle1 = vehicle_type(4,true,false);
    if (vehicle == "Duck Boat"){
        test = true;
    }
    vehicle2 = vehicle_type(4,false,false);
    if (vehicle == "Car"){
        test = true;
    }
    vehicle3 = vehicle_type(0,true,false);
    if (vehicle == "Boat"){
        test = true;
    }
    vehicle4 = vehicle_type(6,false,true);
    if (vehicle == "Comercial Plane"){
        test = true;
    }
    vehicle5 = vehicle_type(0,true,true);
    if (vehicle == "Sea Plane"){
        test = true;
    }
    vehicle6 = vehicle_type(3,true,true);
    if (vehicle == "Prop Plane"){
        test = true;
    }
    vehicle7 = vehicle_type(0,true,true);
    if (vehicle == "Sea Plane"){
        test = true;
    }
    vehicle8 = vehicle_type(4,true,false);
    if (vehicle == "Duck Boat"){
        test = true;
    }
    vehicle8 = vehicle_type(2,false,false);
    if (vehicle == "Motorcycle"){
        test = true;
    }
    return test;
}