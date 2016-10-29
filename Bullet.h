#ifndef BULLET_H
#define BULLET_H

#include <SFML/Graphics.hpp>

class Bullet
{
    public:
        //Set our textures up automatically
        Bullet();

        //The sprite to be drawn
        sf::Sprite bulletSprite;

        //Velocities and positions
        float velocityX = 0;
        float velocityY = 0;
        float positionX = 0;
        float positionY = 0;

        //do we render this bullet?
        bool isActive = false;

        //Every bullet does 10 damage
        //consistently
        const int bulletDamage = 12;

        //Self explanatory. Allow us to grab the texture/sprite width and height
        int getWidth() { return bulletTexture.getSize().x; }
        int getHeight() { return bulletTexture.getSize().y; }

        //Expose the velocity
        float getConstantVelocity() { return bulletVelocity; };

        //Expose the maximum amount of bullets allowed
        int getMaxBullets() { return maxBullets; };

    private:
        //Every bullet must have a texture
        sf::Texture bulletTexture;

        //Give our for-loops a boundary, and
        //prevent an excessive amount of bullets
        //from accumulating.
        const int maxBullets = 200;

        //Bullets constant speed
        const float bulletVelocity = 65.0f;
};

#endif // BULLET_H
