//
// Created by Admin on 07.06.2022.
//

#include "Snake.h"
#include "Animal.h"

Snake::Snake(const string &c_kind, const int &c_weight, const int &c_age, const int &c_satiety,
           const FeedingMethod &c_food_parameters, const int& c_length, const string& c_color) : Animal(c_kind, c_weight, c_age, c_satiety, c_food_parameters) {
    length = c_length;
    color = c_color;
}
Snake::Snake():length(0), color("Default") {}