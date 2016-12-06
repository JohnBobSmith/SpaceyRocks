#include "Laser.h"
#include <iostream>

Laser::Laser()
{
    if (!laserTexture.loadFromFile("../data/textures/laser.png")) {
        std::cout << "Error: Missing laserSprite texture";
    }
    laserSprite.setTexture(laserTexture);
    //Position the laser at the bottom, because it shoots
    //from the sides of our moon hut
    laserSprite.setPosition(0, 550);
}
