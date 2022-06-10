//
// Created by Admin on 06.06.2022.
//

#include "Bird.h"
#include "Animal.h"

Bird::Bird(const string &c_kind, const int &c_weight, const int &c_age, const int &c_satiety,
           const FeedingMethod &c_food_parameters, const int& c_wing_length, const bool& c_wildness) : Animal(c_kind, c_weight, c_age, c_satiety, c_food_parameters), wildness(c_wildness)
{
    wing_length = c_wing_length;
    wildness = c_wildness;
}
Bird::Bird():wing_length(0), wildness("Default") {}

string Bird::Info() const {
    return Animal::Info();
}

bool Bird::Eating() const {
    return Animal::Eating();
}

