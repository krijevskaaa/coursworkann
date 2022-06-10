//
// Created by Admin on 07.06.2022.
//

#ifndef COURSEANN_SNAKE_H
#define COURSEANN_SNAKE_H
#include<string>
#include<iostream>
#include "Animal.h"


class Snake: public Animal
{
private:
    int length;
    string color;
public:
    Snake();
    Snake(const string& c_kind, const int& c_weight, const int& c_age, const int& c_satiety, const FeedingMethod& c_food_parameters, const int& c_length, const string& color);
    int GetLength() const{
        return length;
    }
    string GetColor() const{
        return color;
    }
};


#endif //COURSEANN_SNAKE_H
