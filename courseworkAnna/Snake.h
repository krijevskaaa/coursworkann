#ifndef COURSEWORKANNA_SNAKE_H
#define COURSEWORKANNA_SNAKE_H
#include "Animal.h"

using namespace std;

class Snake:public Animal
{
private:
    int length;
    string color;
public:
    Snake();
    Snake(const KindsAnimal& c_kind, const string &c_name, const int& c_weight, const int& c_age, const int& c_satiety,
          const FeedingMethod& c_food_parameters, const int& c_length, const string& color);

    int GetLength() const;
    string GetColor() const;
    string Info() const override;
};


#endif //COURSEWORKANNA_SNAKE_H
