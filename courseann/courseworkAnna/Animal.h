#ifndef COURSEWORKANNA_ANIMAL_H
#define COURSEWORKANNA_ANIMAL_H
#include<iostream>
#include<string>
#include <stdexcept>

using namespace std;

enum KindsAnimal{wolf = 1,giraffe,monkey ,lion ,horse ,panda = 6,duck = 7,parrot = 8,hawk = 9,viper = 10,python = 11};

enum PossibleFood{meat = 1,leaves,bamboo,banana,apple,seeds,pear,frog,milk};

struct FeedingMethod
{
    PossibleFood food;
    int weight;
};


class Animal
{
protected:

    KindsAnimal kind;
    string name;
    int weight;
    int age;
    int satiety;
    FeedingMethod food_parameters;

    Animal(const KindsAnimal &c_kind, const string &c_name, const int &c_weight, const int &c_age,
           const int &c_satiety, const FeedingMethod& food_parameters);

public:
    Animal();

    virtual string Info() const;

    KindsAnimal GetKind() const {return kind;}

    string GetName() const {return name;}

    int GetWeight() const {return weight;}

    int GetWeightFood() const {return food_parameters.weight;}

    int GetAge() const {return age;}

    int GetSatiety() const {return satiety;}

    void IncSatiety(int satiety){
        this->satiety += satiety;
    }


    PossibleFood GetFood() const {
        return food_parameters.food;
    }

    bool operator<(const Animal &a) {return satiety < a.satiety;}

    static bool sortComparator(Animal* a, Animal* b) {
        return a->GetSatiety() < b->GetSatiety();
    }

    virtual bool Eating(FeedingMethod &feedingMethod) const;

    static string getStringFromEnum(KindsAnimal e);

    static string getStringFromEnumFood(PossibleFood en);

};

#endif //COURSEWORKANNA_ANIMAL_H
