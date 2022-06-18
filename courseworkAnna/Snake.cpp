#include "Snake.h"
#include <sstream>

using namespace std;

Snake::Snake() {}

Snake::Snake(const KindsAnimal &c_kind, const string &c_name, const int &c_weight, const int &c_age, const int &c_satiety,
             const FeedingMethod &c_food_parameters, const int &c_length, const string &c_color):Animal(c_kind,c_name,c_weight,c_age, c_satiety, c_food_parameters),length(c_length), color(c_color) {

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
