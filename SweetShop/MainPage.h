#pragma once
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Window.hpp>
#include<SFML/Network.hpp>

#include"Player.h"
#include<iostream>
using namespace sf;
enum place { OUTSIDE, SWEETSHOP, GREENGROCER, CHEMIST, FLORIST, CAFE, RESTAURANT, HOWTO, CREDIT };

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
	int k = 0;
	int l = 0;

	bool X = false;
	bool C = false;
	bool opening = false;
	bool firstTalkWithHina = false;
	bool secondTalkWithKage = false;
	bool thirdTalkWithSuga = false;
	bool forthTalkWithHina = false;
	bool fifthTalkWithKenma = false;

	bool outside = true;
	bool insideChemist = false;
	bool insideSweetshop = false;
	bool insideGreengrocer = false;
	bool insideFlorist = false;
	bool insideCafe = false;
	bool insideRestaurant = false;
	bool atHowToPlayPage = false;
	bool atCreditPage = false;

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
	Texture howTo;
	Sprite howToPlay;
	Texture howtoBox;
	Sprite howToButton;
	Texture end;
	Sprite credit;
	Texture creditBox;
	Sprite creditButton;


	Texture kita;
	Sprite kitaSan;
	RectangleShape kitaSanArea;
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

	Text player1;
	Text player2;
	Text player2_1;
	Text player2_2;
	Text suga1;
	Text suga2;
	Text suga3;
	Text suga4;
	Text suga5_1;
	Text suga5_2;
	Text suga5_3;
	Text suga5_4;
	Text suga6;

	Text hina7;
	Text hina8;
	Text hina9;
	Text hina10;
	Text hina11;
	Text hina12;

	Text player3;
	Text player4;
	Text kenma1;
	Text kenma2;
	Text player4_1;
	Text player4_2;
	Text kenma3_1;
	Text kenma3_2;
	Text kenma3_3;
	Text kenma3_4;
	Text kenma3_5;
	Text kenma3_6;
	Text kenma4;
	Text kenma5;



	void initInsideChemist();
	void initInsideSweetShop();
	void initInsideGreengrocer();
	void initInsideFlorist();
	void initInsideCafe();
	void initInsideRestaurant();
	void initHowToPlay();
	void initCredit();

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