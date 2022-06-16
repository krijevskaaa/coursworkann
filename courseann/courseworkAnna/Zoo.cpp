#include "Zoo.h"
#include<iostream>
#include "Animal.h"

using namespace std;

Zoo::Zoo() : capacity(10) {}
void Zoo::setCapacityIncrease(int place) {capacity += place;}

void Zoo::setCapacityReduce(int place) {capacity -= place;}

void Zoo::AddAnimal(Animal* animal)
{
    vecZoo.push_back(animal);
    capacity--;
}

void Zoo::PrintZoo() const
{
    if(vecZoo.empty())
    {
        cout << " There are no animals in our Zoo yet :(" << endl;
    } else
    {
        for(auto animal : vecZoo)
        {
            cout << animal->Info() << endl;
        }
    }
}
void Zoo::PrintKindName() const
{
    if(vecZoo.empty())
    {
        cout << " There are no animals in our Zoo yet :(\n" << endl;
    } else
    {
        for(auto animal : vecZoo)
        {
            cout << animal->GetKind() << " " << animal->GetName() << endl;
        }
    }
}

void Zoo::MoveAnimal(KindsAnimal kind, std::string name) {
    if(vecZoo.empty()){
        cout << " There are no animals in the Zoo." << endl;
    } else {
        for (auto an = vecZoo.begin(); an != vecZoo.end();)
        {
            const Animal *animal = *an;
            if (animal->GetKind() == kind && animal->GetName() == name) {
                vecZoo.erase(an);
                capacity++;
                break;
            } else
            {
                animal++;
            }
        }
        cout << "\nYour animal moved to other Zoo!\n";
    }
}
bool Zoo::Feeding(FeedingMethod& feedingMethod)
{
    sort(vecZoo.begin(), vecZoo.end(),Animal::sortComparator);
    for(auto animal:vecZoo)
    {
        if (animal->Eating(feedingMethod))
        {
            animal->IncSatiety(feedingMethod.weight * 5) ;
            return true;
        }

    }
    return false;
}
bool Zoo::CheckVecZooSize() const
{
    if(vecZoo.size() == 0){return false;}
    return true;
}




