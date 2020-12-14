#pragma once
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Window.hpp>
#include<SFML/Network.hpp>

#include"Player.h"
#include"Dialog.h"
#include<iostream>
using namespace sf;
enum place { OUTSIDE, SWEETSHOP, GREENGROCER, CHEMIST, FLORIST, CAFE, RESTAURANT };

class MainPage
{
private: //ใช้ได้แค่ในคลาส
	Player* player;
	Dialog* text;
	//Player* cam;

	RenderWindow* window;


	void initWindow();
	void initBG();
	Texture main;
	Sprite mainBG;
	Texture main2;
	Sprite mainBG2;
	void initPlayer();

	Music BGsound;
	void initMusic();

	RectangleShape chemistDoor;
	RectangleShape sweetShopDoor;
	RectangleShape greengrocerDoor;
	RectangleShape floristDoor;
	RectangleShape cafeDoor;
	RectangleShape restaurantDoor;
	void initDoors();

	Texture chemist;
	Sprite chemistBG;
	Texture sweetShop;
	Sprite sweetShopBG;
	Texture greengrocer;
	Sprite greengrocerBG;
	Texture florist;
	Sprite floristBG;
	Texture cafe;
	Sprite cafeBG;
	Texture restaurant;
	Sprite restaurantBG;

	RectangleShape kitaSan;
	Texture hina;
	Sprite hinata;
	Texture kage;
	Sprite kageyama;
	Texture suga;
	Sprite sugawara;
	Texture ushi;
	Sprite ushijima;
	Texture ken;
	Sprite kenma;
	RectangleShape oikawa;

	void initInsideChemist();
	void initInsideSweetShop();
	void initInsideGreengrocer();
	void initInsideFlorist();
	void initInsideCafe();
	void initInsideRestaurant();


public: //ใช้ได้หมด
	MainPage(); //<-constructure
	virtual ~MainPage();
	void run();

	void update();
	void updatePollEvent();
	void updateDoors();
	void updateNewBG(short whereAmI);


	void render();
	void renderPlayer();
	void renderBG();
	void renderDialog();
	void renderNewBG(short whereAmI);

	short whereAmI; // update word in enum

}
;