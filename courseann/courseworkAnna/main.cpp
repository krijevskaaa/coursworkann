#include "Animal.h"
#include "Bird.h"
#include "Beast.h"
#include "Snake.h"
#include "Zoo.h"

using namespace std;

bool CheckWeight(const int& w){
    if(w > 500){cout << "Weight more than 500kg, it's wrong\n"; return false;}
    else if(w < 0){cout << "Weight less than 0kg, it's wrong\n"; return false;}
    return true;
}
bool CheckSatiety(int& s){
    if(s < 0){cout << "Satiety less than 0%, it's wrong!\n"; return false;}
    else if (s > 100){s = 100; cout << "Satiety more than 100%, it's wrong, so satiety = 100%!\n"; return true;}
     return true;
}
bool CheckAge(const int& a){
    if(a < 0){cout << "Age less than 0 years, it's wrong\n"; return false;}
    return true;
}

int main() {
    Zoo zoo;
    int weight,age,satiety,wing_length,lactation_period,selection, length;
    FeedingMethod food_parameters;
    string color,name;
    bool wildness;
    int k;
    KindsAnimal kind;

    Beast *beast;
    Bird *bird;
    Snake *snake;
        cout << "\n";
        cout <<  "      ^                          ^      \n";
        cout <<  "    ^___^                      ^___^    \n";
        cout <<  "  ^_______^                  ^______^   \n";
        cout << " ^ _________WELCOME TO THE ZOO!________^ \n";
        cout << "|            Its your ticket!           |\n";
    do {
        cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                "| Choose what you want to do:           |\n"
                "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                "| 1. Add new animal.                    |\n"
                "| 2. Animal move.                       |\n"
                "| 3. To feed animal.                    |\n"
                "| 4. Show animals.                      |\n"
                "| 0. Exit.                              |\n"
                "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                "|               Good luck:)             |\n"
                "|****************************************\n";
        cout << "Enter your selection:";
        cin >> selection;
        switch (selection)
        {
            case 1:
            {
                cout << "| Which animal you want to add:           |\n"
                        "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                        "| 1. Beast.                               |\n"
                        "| 2. Bird.                                |\n"
                        "| 3. Snake.                               |\n"
                        "| 4. Cancel.                              |\n"
                        "\nEnter your selection:\n";
                cin >> selection;
                switch (selection)
                {
                    case 1:
                    {
                        KindsAnimal ki;
                        cout << "Enter kind of beast:\n1 - wolf\n2 - giraffe\n3 - monkey\n4 - lion\n5 - horse\n6 - panda\nYour choice:";
                        int k;
                        cin >> k;
                        ki = KindsAnimal(k);
                        cout << "Enter " << Animal::getStringFromEnum(ki) << "'s name:";
                        cin >> name;
                        cout << "Enter weight of beast(kg):";
                        cin >> weight;
                        if (!CheckWeight(weight)) { break; }
                        cout << "Enter beast's age(years):";
                        cin >> age;
                        if (!CheckAge(age)) { break; }
                        cout << "Enter satiety (0%-100%):";
                        cin >> satiety;
                        if (!CheckSatiety(satiety)) { break; }
                        cout << "Enter food, that eat your beast:\n"
                                "1 - meat\n2 - leaves\n3 - bamboo\n4 - bananas\n5 - apples\n6 - seeds\n7 - pears\n8 - frogs\nYour choice:";
                        int f;
                        cin >> f;
                        food_parameters.food = PossibleFood(f);
                        cout << "Enter lactation period(in months): ";
                        cin >> lactation_period;

                        beast = new Beast(ki, name, weight, age, satiety, food_parameters,
                                          lactation_period);
                        zoo.AddAnimal(beast);
                        cout << "Your beast added to our Zoo!\n";
                        break;
                    }
                    case 2:
                    {
                        KindsAnimal ki;
                        cout << "Enter kind of bird\n7 - duck\n8 - parrot\n9 - hawk\nYour choice:";
                        int k;
                        cin >> k;
                        ki = KindsAnimal(k);
                        cout << "Enter " << Animal::getStringFromEnum(ki) << "'s name:";
                        cin >> name;
                        cout << "Enter weight of bird(kg):";
                        cin >> weight;
                        if (!CheckWeight(weight)) { break; }
                        cout << "Enter bird's age(years):";
                        cin >> age;
                        if (!CheckAge(age)) { break; }
                        cout << "Enter satiety (0%-100%):";
                        cin >> satiety;
                        if (!CheckSatiety(satiety)) { break; }
                        cout << "Enter food, that eat your bird:\n"
                                "1 - meat\n2 - leaves\n3 - bamboo\n4 - bananas\n5 - apples\n6 - seeds\n7 - pears\n8 - frogs\nYour choice:";
                        int f;
                        cin >> f;
                        food_parameters.food = PossibleFood(f);
                        cout << "Enter wing length(in sm):";
                        cin >> wing_length;
                        cout << "If your bird is wild enter '1', else '0':";
                        cin >> wildness;

                        bird = new Bird(kind, name, weight, age, satiety, food_parameters,
                                        wing_length, wildness);
                        zoo.AddAnimal(bird);
                        cout << "Your bird added to our Zoo!\n";
                        break;
                    }
                    case 3:
                    {
                        KindsAnimal ki;
                        cout << "Enter kind of snake\n10 - viper\n11 - python\nYour choice:";
                        int k;
                        cin >> k;
                        ki = KindsAnimal(k);
                        cout << "Enter " << Animal::getStringFromEnum(ki) << "'s name:";
                        cin >> name;
                        cout << "Enter weight of snake(kg):";
                        cin >> weight;
                        if(!CheckSatiety(weight)){ break;}
                        cout << "Enter age of snake(years):";
                        cin >> age;
                        if (!CheckAge(age)) { break; }
                        cout << "Enter satiety (0%-100%):";
                        cin >> satiety;
                        if (!CheckSatiety(satiety)) { break; }
                        cout << "Enter food, that eat your snake:\n"
                                "1 - meat\n2 - leaves\n3 - bamboo\n4 - bananas\n5 - apples\n6 - seeds\n7 - pears\n8 - frogs\nYour choice:";
                        int f;
                        cin >> f;
                        food_parameters.food = PossibleFood(f);
                        cout << "Enter length(in sm):";
                        cin >> length;
                        cout << "Enter color:";
                        cin >> color;

                        snake = new Snake(kind, name, weight, age, satiety, food_parameters,
                                          length, color);
                        zoo.AddAnimal(snake);
                        cout << "Your snake added to our Zoo!\n";
                        break;
                    }
                    default:
                    {
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                if (!zoo.CheckVecZooSize())
                {
                    cout << "There are no animals in our Zoo yet \n";

                } else
                {
                    cout << "List of animals:\n";
                    zoo.PrintKindName();
                    cout << "Enter kind and name of beast:";
                    cin >> k >> name;
                    zoo.MoveAnimal(kind, name);

                }
                break;
            }
            case 3:
            {
                if (!zoo.CheckVecZooSize())
                {
                    cout << "There are no animals in our Zoo yet :(" << endl;
                } else
                {
                    int f;

                    cout << "Enter eat, that you want to give animal:\n"
                            "1 - meat(for wolf,lion,hawk)\n2 - leaves(for giraffe)\n3 - bamboo(for panda)\n4 - banana(for monkey)\n5 - apple(for horse)\n6 - seeds(for duck)\n7 - pear(for parrot)\n8 - frog(python)\nYpur choice:";
                    cin >> f;
                    food_parameters.food = PossibleFood(f);
                    if (bird || snake)
                    {
                        cout << "Enter weight of your food (kilograms):";
                        cin >> food_parameters.weight;
                        food_parameters = {food_parameters.food, food_parameters.weight};
                        if(zoo.Feeding(food_parameters))
                        {
                            cout << "The hungriest animal is fed\n";
                        } else
                        {
                            cout << "There are no animals in our Zoo that eat " << Animal::getStringFromEnumFood(food_parameters.food) << " :(\n";
                        }
                    } else
                    {
                        if (beast->CheckLactationPeriod())
                        {
                            cout << "Enter weight of your food (kilograms):";
                            cin >> food_parameters.weight;
                            food_parameters = {food_parameters.food, food_parameters.weight};
                            if(zoo.Feeding(food_parameters))
                            {
                                cout << "Your beast have lactation period now and can't eat usual food, only milk!\n";
                                cout << "Your beast is drank with milk\n";
                            }else {
                                cout << "There are no animals in our Zoo that eat " << Animal::getStringFromEnumFood(food_parameters.food) << " :(\n";
                            }

                        } else
                        {
                            cout << "Enter weight of your food (kilograms):";
                            cin >> food_parameters.weight;
                            food_parameters = {food_parameters.food,food_parameters.weight};
                            if (zoo.Feeding(food_parameters))
                            {
                                cout << "The hungriest animal that eats " << Animal::getStringFromEnumFood(food_parameters.food) << " is fed\n";
                            } else {
                                cout << "There are no animals in our Zoo that eat " << Animal::getStringFromEnumFood(food_parameters.food) << " :(\n";
                            }

                        }
                    }
                    break;
                }
                break;
            }
            case 4:
            {
                cout << "List of animals:\n";
                zoo.PrintZoo();

                break;
            }
            default:
                exit(1);
        }

    } while(selection != 0);
    return 0;
}

