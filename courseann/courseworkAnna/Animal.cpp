#include "Animal.h"
#include <stdexcept>
#include <sstream>

using namespace std;

Animal::Animal():kind(),name("Default"),weight(0),age(0),satiety(0), food_parameters({}){}

Animal::Animal(const KindsAnimal &c_kind, const std::string &c_name, const int &c_weight, const int &c_age, const int &c_satiety,
               const FeedingMethod& c_food_parameters ):kind(c_kind),name(c_name),age(c_age),weight(c_weight),satiety(c_satiety),
                                                       food_parameters(c_food_parameters) {

}

string Animal::Info() const {
    ostringstream oss;

    oss << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
        << "Kind of animal = " << getStringFromEnum(GetKind()) << "\n"
        << "Name of your " << getStringFromEnum(GetKind()) << " is " << GetName() << ";\n"
        << "Weight = " << GetWeight() << "kilos;\n"
        << "Age = "  << GetAge() << " years;\n"
        << "Satiety = " << GetSatiety() << "%;\n"
        << "Food, that eat your animal " << getStringFromEnumFood(food_parameters.food) << ";\n";

    return oss.str();
}
/*std::string Animal::Info() const
{
    std::string out;
    out = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
           + "Kind of animal = " + getStringFromEnum(kind) + ";\n"
           + "Name of your " + getStringFromEnum(kind) + " is " + GetName() + ";\n"
          + "Weight = " + to_string(GetWeight()) + " kilos;\n"
          + "Age = " + to_string(GetAge()) + " years;\n"
          +  + to_string(GetSatiety()) + "%;\n"
          + "Food, that eat your animal " + getStringFromEnumFood(food_parameters.food)+ ";\n";

    return out;
}*/
bool Animal::Eating(FeedingMethod &feedingMethod) const
{
    return (feedingMethod.food == food_parameters.food);
}
std::string Animal::getStringFromEnum(KindsAnimal e)
{
    switch (e) {
        case 1: {return "wolf";}
        case 2: {return "giraffe";}
        case 3: {return "monkey";}
        case 4: {return "lion";}
        case 5: {return "horse";}
        case 6: {return "panda";}
        case 7: {return "duck";}
        case 8: {return "parrot";}
        case 9: {return "hawk";}
        case 10: {return "viper";}
        case 11: {return "python";}
    }
    return "";
}
std::string Animal::getStringFromEnumFood(PossibleFood en)
{
    switch (en) {
        case 1: {return "meat";}
        case 2: {return "leaves";}
        case 3: {return "bamboo";}
        case 4: {return "bananas";}
        case 5: {return "apples";}
        case 6: {return "seeds";}
        case 7: {return "pears";}
        case 8: {return "frogs";}
    }
    return "";
}
