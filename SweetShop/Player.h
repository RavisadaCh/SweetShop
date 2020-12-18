#pragma once
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Window.hpp>
#include<SFML/Network.hpp>



using namespace sf;
enum playerWordForMovement { STAY, MOVING_LEFT, MOVING_RIGHT};


class Player
{
private:
	
	//MainPage* where;

	Texture playerTexture;
	Sprite player;
	View cam;
	bool moved;
	Clock playerTimer; // for restart animation

	short wordForMovement; // update word in enum
	IntRect currentFram; // cut fram
	
	//short place;
	int pinPlace = 0;
	//short test = 0;
	void initPlayer();
	void initAnimation();
	void initCamera();

public:
	Player();
	virtual ~Player();

	void update();
	void updatePlace();
	void updateMovedPosition();
	void updateAnimation();
	void updateCamera();
	//void updatePosition(short where);

	void render(RenderTarget&target);

	Sprite getPlayer();
	void updatePosition(int where);

	
};

