//
// Created by Admin on 05.06.2022.
//

#ifndef COURSEANN_ANIMAL_H
#define COURSEANN_ANIMAL_H
#include<string>
#include<vector>
#include<exception>

using namespace std;

struct FeedingMethod{
    string food;
    double weight_food;
};

class Animal
{
private:

    FeedingMethod food_parameters;
    string kind;
    int weight;
    int age;
    int satiety;
protected:
    Animal(const string &c_kind, const int &c_weight, const int &c_age, const int &c_satiety,
           const FeedingMethod &c_food_parameters);

public:
    Animal();
    bool operator < (const Animal& a){
        return satiety < a.satiety;
    }
    //Animal(const string& c_kind, const int& c_weight, const int& c_age, const int& c_satiety, const FeedingMethod& c_food_parameters);
    virtual string Info() const;

    string GetKind() const
    {
        return kind;
    }
    int GetWeight() const
    {
        return weight;
    }
    int GetAge() const
    {
        return age;
    }
    int GetSatiety() const
    {
        return satiety;
    }
    FeedingMethod GetFoodParameters() const
    {
        return food_parameters;
    }

    virtual bool Eating() const
    {
        if( food_parameters.food == "grains")
        return true;
    }
    void SetSatiety(const int& c_satiety)
    {
        if (c_satiety >= 0 && c_satiety <= 100) {
            satiety = c_satiety;
        };
    }
};


#endif //COURSEANN_ANIMAL_H
