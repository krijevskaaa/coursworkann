//
// Created by Admin on 06.06.2022.
//

#ifndef COURSEANN_BEAST_H
#define COURSEANN_BEAST_H
#include "Animal.h"
#include<iostream>

using namespace std;

class Beast:public Animal
{
private:
    int lactation_period;
public:
    Beast();
    Beast(const string &c_kind, const int &c_weight, const int &c_age, const int &c_satiety,
             const FeedingMethod &c_food_parameters, const int &c_lactation_period);
    float GetLactationPeriod() const
    {
        return lactation_period / 12.0;
    }

    string Info() const override;
    bool Eating() const override;

    Beast(string name, int weight, int age, int satiety, string food, double weight_food, int lactation_period);
};


#endif //COURSEANN_BEAST_H
