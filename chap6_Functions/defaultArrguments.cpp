#include <iostream>
using namespace std;

double calculateEffecitveConcentration(double baseConcentration, double dilutionFactor = 1.0, double impurityConcentration = 0.0);

int main()
{
    double final = calculateEffecitveConcentration(2, 4, 0);
    cout << final;
}

double calculateEffectiveConcentration(double baseConcentration, double dilutionFactor = 1.0, double impurityConcentration = 0.0)
{
    return (baseConcentration / dilutionFactor) + impurityConcentration;
}