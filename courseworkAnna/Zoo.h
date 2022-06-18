#ifndef COURSEWORKANNA_ZOO_H
#define COURSEWORKANNA_ZOO_H
#include <iostream>
#include <vector>
#include <string>
#include "Animal.h"
#include "Beast.h"

class Zoo {
private:
    std::vector<Animal *> vecZoo;
    int capacity;
public:
    Zoo();
    ~Zoo()
    {
        for (auto animal:vecZoo)
        {
            delete animal;
        }
    };
    void AddAnimal(Animal* animal);
    int GetCapacity() const;
    void setCapacityIncrease(int place);
    void setCapacityReduce(int place);
    void PrintZoo() const;
    void MoveAnimal(const KindsAnimal &kind, const string &name);
    void PrintKindName();
    Animal* Feeding(const FeedingMethod &feedingMethod);
    bool IsEmpty() const;

};


#endif //COURSEWORKANNA_ZOO_H
