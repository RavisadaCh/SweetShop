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
	//Dialog* text;
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
	
	short whereAmI; // update word in enum

	int exchangedPlace;
	int situation;
	int i = 0;
	int j = 0;

	bool X = false;
	bool C = false;
	bool firstTalkWithHina = false;
	bool secondTalkWithKage = false;

	bool outside = true;
	bool insideChemist = false;
	bool insideSweetshop = false;
	bool insideGreengrocer = false;
	bool insideFlorist = false;
	bool insideCafe = false;
	bool insideRestaurant = false;

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
	RectangleShape hinataArea;
	Texture kage;
	Sprite kageyama;
	RectangleShape kageyamaArea;
	Texture suga;
	Sprite sugawara;
	RectangleShape sugawaraArea;
	Texture ushi;
	Sprite ushijima;
	RectangleShape ushijimaArea;
	Texture ken;
	Sprite kenma;
	RectangleShape kenmaArea;
	RectangleShape oikawa;

	Text text;
	Text text2;
	Font font;
	//String* op[20];
	Text empty;
	Text op1;
	Text op2;
	Text op3;
	Text op4;
	Text hina1;
	Text hina2;
	Text hina3;
	Text hina4;
	Text hina5;
	Text hina6;
	Text kage1;
	Text kage2;
	Text kage3;
	Text kage4;
	Text kage4_1;
	Text kage4_2;
	Text kage5_1;
	Text kage5_2;
	Text kage6;
	Text kage7;
	Text kage8;
	Text kage9;
	Text kage10;
	Text kage11;


	void initInsideChemist();
	void initInsideSweetShop();
	void initInsideGreengrocer();
	void initInsideFlorist();
	void initInsideCafe();
	void initInsideRestaurant();

	void initDialog();

	Clock clock;
	float testTime;


public: //ใช้ได้หมด
	MainPage(); //<-constructure
	virtual ~MainPage();
	void run();

	void update();
	void updatePollEvent();
	void updateDoors();
	void updateCharacter();
	void updateDialog();

	int exchangeShortToInt(short whereAmI);


	void render();
	//void renderPlayer();
	void renderBG();
	void renderDialog();

	

}
;