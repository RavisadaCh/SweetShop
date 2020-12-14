#pragma once

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Window.hpp>
#include<SFML/Network.hpp>
#include<iostream>

#include"Player.h"

using namespace sf;

class Dialog
{
private:
	Player* player;

	void initText();
	

	Text* text;
	Font font;
	//String* op[20];
	Text op1;
	Text op2;
	Text op3;
	Text op4;
	
	
	void initTextBox();

	RectangleShape box;

	int count = 0;
	int i = 0;

public:
	Dialog(Player * player);
	virtual ~Dialog();

	void update();
	void updateText();
	void updateTextBox();

	void render(RenderTarget& target);

	Clock time;
	Time dialogTime;
	
};

