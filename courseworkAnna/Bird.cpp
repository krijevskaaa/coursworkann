#include "Bird.h"
#include "Animal.h"
#include <sstream>
using namespace std;

Bird::Bird(const KindsAnimal &c_kind,const string &c_name, const int &c_weight, const int &c_age, const int &c_satiety,
           const FeedingMethod &c_food_parameters, const int &c_wing_length, const bool &c_wildness):Animal(c_kind,c_name, c_weight, c_age, c_satiety, c_food_parameters),wing_length(c_wing_length), wildness(c_wildness) {

}

int Bird::GetWingLength() const
{
    return wing_length;
}
bool Bird::GetWildness() const
{
    return wildness;
}

string Bird::Info() const {
    ostringstream oss;

    oss << Animal::Info()
        << "Wing length: " << GetWingLength() << " sm;\n"
        << "Wildness: " << GetWildness()
        << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    return oss.str();
}


