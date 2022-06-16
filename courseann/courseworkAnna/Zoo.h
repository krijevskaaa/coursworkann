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

    void AddAnimal(Animal* animal);

    void setCapacityIncrease(int place);

    void setCapacityReduce(int place);

    void PrintZoo() const;

    void MoveAnimal(KindsAnimal kind, std::string name);

    void PrintKindName() const;

    bool Feeding(FeedingMethod& feedingMethod);

    bool CheckVecZooSize() const;

};


#endif //COURSEWORKANNA_ZOO_H
