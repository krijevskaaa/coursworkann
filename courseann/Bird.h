//
// Created by Admin on 06.06.2022.
//

#ifndef COURSEANN_BIRD_H
#define COURSEANN_BIRD_H
#include "Animal.h"
#include<vector>


class Bird: public Animal
{
private:
    int wing_length;
    bool wildness;
    string food_bird;
public:
    Bird();
    Bird(const string& c_kind, const int& c_weight, const int& c_age, const int& c_satiety, const FeedingMethod& c_food_parameters, const int& c_wing_length, const bool& c_wildness);

    string Info() const override;

    int GetWingLength() const
    {
        return wing_length;
    }
    bool GetWildness() const
    {
        return wildness;
    }
    bool Eating() const override;
};


#endif //COURSEANN_BIRD_H
