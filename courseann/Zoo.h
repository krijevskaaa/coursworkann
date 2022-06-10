#ifndef COURSEANN_ZOO_H
#define COURSEANN_ZOO_H
#include<vector>
#include "Animal.h"
#include "Beast.h"
#include<execution>
#include<iostream>

class Zoo
{
private:
    vector<const Animal*> vecAnimals;
    int capacity;
public:
    Zoo();
    Zoo(bool);

    void AddAnimal(const Beast *beast, vector<const Animal*> vecAnimals);
    bool FeedAnimals(const Animal *animals, int count);
    int getCapacity() const {return capacity;}

    void sortAnimalsOnSatiety();

    void setCapacityIncrease(int gain) {capacity += gain;}
    void setCapacityReduce(int gain) {capacity -= gain;}

    template<typename _Compare>
    _Compare sortComparatorSatiety();

    bool sortComparatorSatiety(const Animal *animal1, const Animal *animal2);
};


#endif //COURSEANN_ZOO_H
