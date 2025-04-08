#include <SFML/System/Angle.hpp>
#include <cstdio>
#include <iostream>
#include "nlohmann/json.hpp"

using namespace std;

int main() {
    printf("hello world!");
    sf::Angle angle1 = sf::degrees(180);
    sf::Angle angle2 = sf::radians(3.1415f);
    cout << angle1.asDegrees() << endl;
    cout << angle2.asRadians() << endl;
    return 0;
}

