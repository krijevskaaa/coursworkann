#include "Snake.h"
#include <sstream>

using namespace std;

Snake::Snake() {}

Snake::Snake(const KindsAnimal &c_kind, const string &c_name, const int &c_weight, const int &c_age, const int &c_satiety,
             const FeedingMethod &c_food_parameters, const int &c_length, const string &c_color):Animal(c_kind,c_name,c_weight,c_age, c_satiety, c_food_parameters),length(c_length), color(c_color) {
   /* if(weight < 0 ){throw invalid_argument(" Weight less than 0kg, it's wrong!");}
    if(weight > 100 ){throw invalid_argument(" Weight more than 100kg, it's wrong!");}
    if(satiety < 0 ){throw invalid_argument(" Satiety less than 0%, it's wrong!");}
    if(satiety > 100 ){throw invalid_argument(" Satiety more than 100%, it's wrong!");}
    if(age < 0 ){throw invalid_argument(" Age less than 0, it's wrong!");}
    if(length < 0 ){throw invalid_argument(" Length less than 0, it's wrong!");}*/
}

int Snake::GetLength() const
{
    return length;
}
string Snake::GetColor() const
{
    return color;
}

string Snake::Info() const {
    ostringstream oss;

    oss << Animal::Info()
        << "Length: " << GetLength() << " sm;\n"
        << "Color: " << GetColor()
        << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    return oss.str();
}
