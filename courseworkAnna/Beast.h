#ifndef COURSEWORKANNA_BEAST_H
#define COURSEWORKANNA_BEAST_H
#include "Animal.h"
#include<iostream>

using namespace std;

class Beast:public Animal
{
private:
    float lactation_period;
public:
    Beast();
    Beast(const KindsAnimal &c_kind,const std::string &c_name, const int &c_weight, const int &c_age,
          const int &c_satiety,const FeedingMethod &c_food_parameters, const float &c_lactation_period);

    float GetLactationPeriod() const{return lactation_period / 12.0;}

    string Info() const override;

    bool Eating(const FeedingMethod &feedingMethod) const override;

    bool CheckLactationPeriod() const;
};



#endif //COURSEWORKANNA_BEAST_H
