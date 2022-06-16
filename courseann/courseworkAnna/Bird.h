#ifndef COURSEWORKANNA_BIRD_H
#define COURSEWORKANNA_BIRD_H
#include "Animal.h"
//#include <stdexcept>

using namespace std;

class Bird:public Animal
{
protected:
    int wing_length;
    bool wildness;
public:
    Bird();
    Bird(const KindsAnimal& s_kind,const std::string &c_name,const int& c_weight, const int& c_age, const int& c_satiety,
         const FeedingMethod& c_food_parameters, const int& c_wing_length, const bool& c_wildness);
    int GetWingLength() const;
    bool GetWildness() const;
    string Info() const override;


};


#endif //COURSEWORKANNA_BIRD_H
