
#include "Animal.h"

#include<iostream>

using namespace std;

Animal::Animal():kind("Default"),weight(0),age(0),satiety(0),food_parameters({"Default",0}){};

//Animal::Animal(const string& c_kind, const int& c_weight, const int& c_age, const int& c_satiety, const FeedingMethod& c_food_parameters):    kind (c_kind), weight(c_weight), age(c_age), satiety (c_satiety), food_parameters (c_food_parameters) {}
Animal::Animal(const string &c_kind, const int &c_weight, const int &c_age, const int &c_satiety,
               const FeedingMethod &c_food_parameters):kind(c_kind),age(c_age),weight(c_weight),satiety(c_satiety),
                                                       food_parameters(c_food_parameters){}

string Animal::Info() const
{
    string out;
    out = "Kind of animal " + GetKind() + "\n"
            + "Weight = " + to_string(GetWeight()) + "\n"
            + "Age = " + to_string(GetAge()) + "\n"
            + "Satiety = " + to_string(GetSatiety()) + "\n"
            + "Food and weight of food = " + food_parameters.food + " " + to_string(food_parameters.weight_food) + "\n";
    return out;
}
