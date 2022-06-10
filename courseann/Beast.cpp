//
// Created by Admin on 06.06.2022.
//

#include "Beast.h"
#include "Animal.h"

Beast::Beast():lactation_period(0){}
Beast::Beast(const string &c_kind, const int &c_weight, const int &c_age, const int &c_satiety, const FeedingMethod &c_food_parameters, const int &c_lactation_period): Animal(c_kind, c_weight, c_age, c_satiety, c_food_parameters),lactation_period(c_lactation_period)
{
    lactation_period = c_lactation_period;
}
string Beast::Info() const {
    string out;
    out = Animal::Info() + "Lactation period = " + to_string(GetLactationPeriod()) + "\n";
    return out;
}

bool Beast::Eating() const {
    return Animal::Eating();
}

//Beast::Beast(string name, int weight, int age, int satiety, string food, double weight_food, int lactation_period) {

//}
