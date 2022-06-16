#include "Beast.h"
#include "sstream"

using namespace std;
using std::ostringstream;

Beast::Beast(const KindsAnimal &c_kind,const std::string &c_name, const int &c_weight, const int &c_age, const int &c_satiety,
             const FeedingMethod &c_food_parameters, const float &c_lactation_period): Animal(c_kind,c_name, c_weight, c_age, c_satiety, c_food_parameters),lactation_period(c_lactation_period){}
Beast::Beast():lactation_period(5) {}

string Beast::Info() const {
    ostringstream oss;

    oss << Animal::Info()
        << "Lactation period: " << GetLactationPeriod() << " years;"
        << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    return oss.str();
}

/*string Beast::Info() const
{
        string out;

        out = Animal::Info() +
              " Lactation period: " + to_string(GetLactationPeriod()) + " years;"
              + "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

        return out;

}*/
bool Beast::Eating(FeedingMethod &feedingMethod) const
{
    if (feedingMethod.food == food_parameters.food )
    {return true;} return false;

}
bool Beast::CheckLactationPeriod() const
{
    if (this->GetLactationPeriod() > this->GetAge())
    {
        return true;
    }
    return false;
}
/*&& (this->GetLactationPeriod() < this->GetAge() ||
    feedingMethod.food == milk)*/