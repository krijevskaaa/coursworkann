#include "Zoo.h"
#include<iostream>
#include "Animal.h"

using namespace std;

Zoo::Zoo() : capacity(10) {}

int Zoo::GetCapacity() const{return capacity;}

void Zoo::setCapacityIncrease(int place) {capacity += place;}

void Zoo::setCapacityReduce(int place) {capacity -= place;}

void Zoo::AddAnimal(Animal* animal)
{
    if (capacity > vecZoo.size()){
    vecZoo.push_back(animal);
    capacity--;
    cout << "Your beast added to our Zoo!\n";
    }else{
        cout << "Your beast can't be added to our Zoo, because we don't have free places!\n";
    }
}


void Zoo::PrintZoo() const
{
    if(vecZoo.empty()){
        cout << " There are no animals in our Zoo yet :(" << endl;
    } else{
        for(auto animal : vecZoo){
            cout << animal->Info() << endl;
        }
    }
}
void Zoo::PrintKindName()
{
    if(vecZoo.empty()){
        cout << " There are no animals in our Zoo yet :(\n" << endl;
    } else{
        for(auto animal : vecZoo){
            cout << animal->getStringFromEnum(animal->GetKind())<< "(" << animal->GetKind() << ")" << " " << animal->GetName() << endl;
        }
    }
}

void Zoo::MoveAnimal(const KindsAnimal &kind, const string &name) {
    if(vecZoo.empty()){
        cout << " There are no animals in the Zoo." << endl;
    } else {
        for (auto an = vecZoo.begin(); an != vecZoo.end();){
            const Animal *animal = *an;
            if (animal->GetKind() == kind && animal->GetName() == name) {
                delete animal;
                vecZoo.erase(an);
                capacity++;
                break;
            } else{
                continue;
            }
        }
        cout << "\nYour animal moved to other Zoo!\n";
    }
}
Animal* Zoo::Feeding(const FeedingMethod &feedingMethod)
{
    sort(vecZoo.begin(), vecZoo.end(),Animal::sortComparator);
    for(auto animal:vecZoo){
        if (animal->Eating(feedingMethod)){
            animal->IncSatiety(feedingMethod.weight * 5) ;
            return animal;
        }
    }
    return nullptr;
}
bool Zoo::IsEmpty() const{
    if(vecZoo.size() == 0){return false;}
    return true;
}




