#include <string>
using namespace std;

string vehicle_type(int num_wheels, bool propeller, bool wings) {
    // if there is 4 wheels and no propellor or wings
    // it is a car
    if (num_wheels == 4 && propeller == false && wings == false){
        return "car";
    }
    // if there is 2 wheels and no propellor or wings
    // it is a motorcycle
    if (num_wheels == 2 && propeller == false && wings == false){
        return "Motorcycle";
    }
    // if there are 0 wheels a propellor but no wings
    // it is a Boat
    if (num_wheels != 0 && propeller == true && wing == false)//Should be = instead of !={
        return "Boat";

    }
    // if there are 4 wheels a propellor but no wings
    // it is a Duck Boat
    if (num_wheels == 4 && propeller == true && wing == false){
        return "Duck Boat";
    }
    // if there are 3 wheels a propellor and wings
    // it is a Prop Plane
    if (num_wheels == 3 && propeller == true && wing == true){
        return "Prop Plane";
    }
    // if there are 6 wheels no propellor but wings
    // it is a Commersial Plane
    if (num_wheels == 6 && propeller == false && wing == true){
        return "Commersial Plane";
    }
    // if there are 0 wheels but a propellor and wings
    // it is a Sea Plane
    if (num_wheels == 0 && propeller == true && wing == true){
        return "Sea Plane";
    }
}
