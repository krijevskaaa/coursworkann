#include "Zoo.h"
#include "Beast.h"
#include "Animal.h"
#include "Bird.h"
#include<vector>
#include<iostream>

using namespace std;

Zoo::Zoo() : capacity(10) {}

Zoo::Zoo(bool a ){
    const Beast *beast1 = new Beast("Wolf", 69, 15, 60, {"meat", 4}, 5);
    const Beast *beast2 = new Beast("Giraffe", 107, 4, 53, {"leaves", 3}, 6);
    const Beast *beast3 = new Beast("Monkey", 28, 7, 2, {"banana", 7}, 3);
    const Beast *beast4 = new Beast("Monkey", 28, 7, 90, {"banana", 4}, 8);
    const Beast *beast5 = new Beast("Lion", 89, 36, 49, {"meat", 90}, 8);
    const Beast *beast6 = new Beast("Zebra", 44, 4, 99, {"grass", 490}, 87);
    const Beast *beast7 = new Beast("Panda", 125, 8, 37, {"bamboo", 78}, 30);


};
void Zoo::AddAnimal(const Beast* beast,vector<const Animal*> vecAnimals)
{
    vecAnimals.push_back(beast);
}
bool Zoo::sortComparatorSatiety(const Animal* animal1, const Animal* animal2)
{
    return (animal1 -> GetSatiety() < animal2 -> GetSatiety());
}

void Zoo::sortAnimalsOnSatiety()
{
    if (vecAnimals.empty()) {
        cout << " There are no animals in the Zoo.\n"
                " You can't sort animals." << endl;
    } else { sort(vecAnimals.begin(), vecAnimals.end()); }
}
bool Zoo::FeedAnimals(const Animal *animals, int count) {}
