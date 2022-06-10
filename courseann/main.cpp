#include <iostream>
#include "Animal.h"
#include "Bird.h"
#include "Beast.h"
#include "Snake.h"
#include "Zoo.h"

using namespace std;

int main()
{
    Zoo zoo;
    int weight,age,satiety,wing_length,lactation_period,selection, length;
    FeedingMethod food_parameters;
    string kind,color;
    bool wildness;
    vector <const Animal*>  vecZoo;

    const Beast *beast1 = new Beast("Wolf", 69, 15, 60,{"meat",4}, 5);
    const Beast *beast2 = new Beast("Giraffe", 107, 4,53,{"leaves",3},6);
    const Beast *beast3 = new Beast("Monkey",28,7,2,{"banana",7},3);
    const Beast *beast4 = new Beast("Monkey",28,7,90,{"banana",4},8);
    const Beast *beast5 = new Beast("Lion",89,36,49,{"meat",90},8 );
    const Beast *beast6 = new Beast("Zebra",44,4,99,{"grass",490},87);
    const Beast *beast7 = new Beast("Panda",125,8,37,{"bamboo",78},30);
vector<Beast> beasts = {*beast1,*beast2,*beast3,*beast4,*beast5,*beast6,*beast7};

Zoo *zoo1 = new Zoo();
//zoo1.
    const Bird *bird1 = new Bird("Duck",6,7,70,{"seed",9},30,0);
    const Bird *bird2 = new Bird("Parrot",2,4,3,{"pear",5},50,       0);
    const Bird *bird3 = new Bird("Hawk",8,30,80,{"meat",900},90,1);
vector<Bird> birds = {bird1,bird3};
    const Snake *snake1 = new Snake("Viper",1,40,35,{"meat",3},60,"green");
    const Snake *snake2 = new Snake("Python", 2,4,50,{"frogs",7},10,"yellow");
vector<Snake> snakes = {snake1,snake2};

    cout << "\n"
                "|            WELCOME TO THE ZOO!          |\n";
                "|             Its your ticket!            |\n";
    do {
        cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                "| Choose what you want to do:             |\n"
                "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                "| 1. Add new animal.                      |\n"
                "| 2. Animal move.                         |\n"
                "| 3. To feed animal.                      |\n"
                "| 4. Show animal.                         |\n"
                "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                "|               Good luck!                |\n"
                "|*****************************************|\n";
        cout << "\nEnter your selection:\n"; cin >> selection;
        switch (selection)
        {
            case 1:
                cout << "| Which animal you want to add:           |\n"
                        "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                        "| 1. Beast.                               |\n"
                        "| 2. Bird.                                |\n"
                        "| 3. Snake.                               |\n"
                        "\nEnter your selection:\n"; cin >> selection;
                switch (selection)
                {
                    case 1:
                    {
                        cout << "Enter kind of beast: ";
                        cin >> kind;
                        cout << "Enter weight: ";
                        cin >> weight;
                        cout << "Enter age: ";
                        cin >> age;
                        cout << "Enter satiety: ";
                        cin >> satiety;
                        cout << "Enter food, that eat your beast: ";
                        cin >> food_parameters.food;
                        cout << "Enter weight of food: ";
                        cin >> food_parameters.weight_food;
                        cout << "Enter lactation period: ";
                        cin >> lactation_period;
                        Beast *beast = new Beast(kind, weight, age, satiety, food_parameters,
                                                 lactation_period);
                        zoo.AddAnimal(beast,vecZoo)

                    }
                    case 2:
                    {

                        cout << "Enter kind of bird: ";
                        cin >> kind;
                        cout << "Enter weight: ";
                        cin >> weight;
                        cout << "Enter age: ";
                        cin >> age;
                        cout << "Enter satiety: ";
                        cin >> satiety;
                        cout << "Enter food, that eat your bird: ";
                        cin >> food_parameters.food;
                        cout << "Enter weight of food: ";
                        cin >> food_parameters.weight_food;
                        cout << "Enter wing length: ";
                        cin >> wing_length;
                        cout << "Enter wildness: ";
                        cin >> wildness;
                        Bird *bird = new Bird(kind, weight, age, satiety, food_parameters,
                                                 wing_length,wildness);

                    }
                    case 3:
                    {
                        cout << "Enter kind of snake: ";
                        cin >> kind;
                        cout << "Enter weight: ";
                        cin >> weight;
                        cout << "Enter age: ";
                        cin >> age;
                        cout << "Enter satiety: ";
                        cin >> satiety;
                        cout << "Enter food, that eat your snake: ";
                        cin >> food_parameters.food;
                        cout << "Enter weight of food: ";
                        cin >> food_parameters.weight_food;
                        cout << "Enter length: "; cin >> length;
                        cout << "Enter color: "; cin >> color;
                        Snake *snake = new Snake(kind, weight, age, satiety, food_parameters, length,color);
                    }
                }
            case 2:
                cout << "| Choose what you want to do:             |\n"
                        "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                        "| 1. Add new bird.                       |\n"
                        "| 2. Bird move.                          |\n"
                        "| 3. To feed bird.                       |\n"
                        "\nEnter your selection:\n"; cin >> selection;
                switch (selection)
                {
                    case 1:
                        cout << "Enter kind of bird: "; cin >> kind;
                        cout << "Enter weight: "; cin >> weight;
                        cout << "Enter age: "; cin >> age;
                        cout << "Enter satiety: "; cin >> satiety;
                        cout << "Enter wing length: "; cin >> wing_length;
                        cout << "Enter wildness: "; cin >> wildness;
                }
            case 3:
                cout << "| Choose what you want to do:             |\n"
                        "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                        "| 1. Add new snake.                       |\n"
                        "| 2. Snake move.                          |\n"
                        "| 3. To feed snake.                       |\n"
                        "\nEnter your selection:\n"; cin >> selection;
                switch (selection)
                {
                    case 1:
                        cout << "Enter kind of beast: "; cin >> kind;
                        cout << "Enter weight: "; cin >> weight;
                        cout << "Enter age: "; cin >> age;
                        cout << "Enter satiety: "; cin >> satiety;
                        cout << "Enter lactation period: "; cin >> lactation_period;
                }
        }
    } while(selection == 0)


        ;
}
