#ifndef SHIELD_H
#define SHIELD_H

#include <SFML/Graphics.hpp>

class Shield
{
    public:
        //Automatic textures
        Shield();

        //Sprite
        sf::Sprite shieldSprite;

        //The shields energy on a per-block basis
        float shieldEnergy = 100.0f;

        //Shields position
        float positionX = 0;
        float positionY = 0;

        //Is an individual shield block/chunk running?
        bool isChunkActive = false;

        //Drain our shields on a per-block basis
        void applyDamage(float damage);

        //Grab the width and height of our sprite
        int getWidth() { return shieldTexture.getSize().x; }
        int getHeight() { return shieldTexture.getSize().y; }

        //Return the max amount of shield segments
        int getMaxShieldBlocks() { return maxShieldBlocks; }

    private:
        sf::Texture shieldTexture;

        //Number of shield segments
        const int maxShieldBlocks = 60;
};

#endif // SHIELD_H
