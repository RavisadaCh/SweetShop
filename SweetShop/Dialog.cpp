#include "Dialog.h"

void Dialog::initText()
{
	this->count = 0;
	this->font.loadFromFile("Font/Itim-Regular.ttf");
	
	this->op1.setFont(font);
	this->op1.setCharacterSize(20);
	this->op1.setString(L"а¬иж");
	this->op1.setFillColor(Color::White);
	this->op1.setPosition(this->player->getPlayer().getPosition().x - 500, this->player->getPlayer().getPosition().y + 570);

	this->op2.setFont(font);
	this->op2.setCharacterSize(20);
	this->op2.setString(L"а¬иж x2");
	this->op2.setFillColor(Color::White);
	this->op2.setPosition(this->player->getPlayer().getPosition().x - 500, this->player->getPlayer().getPosition().y + 570);

	this->op3.setFont(font);
	this->op3.setCharacterSize(20);
	this->op3.setString(L"а¬иж x3");
	this->op3.setFillColor(Color::White);
	this->op3.setPosition(this->player->getPlayer().getPosition().x - 500, this->player->getPlayer().getPosition().y + 570);

	this->op4.setFont(font);
	this->op4.setCharacterSize(20);
	this->op4.setString(L"а¬иж x4");
	this->op4.setFillColor(Color::White);
	this->op4.setPosition(this->player->getPlayer().getPosition().x - 500, this->player->getPlayer().getPosition().y + 570);
	
	this->text = &this->op1;

}

void Dialog::initTextBox()
{
	this->box.setSize(Vector2f(200.f,100.f));
	this->box.setFillColor(Color::Green);
	
	

}

Dialog::Dialog(Player* player)
{
	this->player = player;
	this->initText();
	this->initTextBox();

}

Dialog::~Dialog()
{
}

void Dialog::update()
{
	/*this->dialogTime = this->time.getElapsedTime();
	std::cout << this->dialogTime.asSeconds() << std::endl;*/
	this->updateText();
	this->updateTextBox();

}

void Dialog::updateText()
{
	if (Keyboard::isKeyPressed(Keyboard::Space))
	{
		this->count++;
	}
	
	if (this->count == 0)
	{
		this->text = &this->op1;
	}
	else if (this->count == 1)
	{
		this->text = &this->op2;
	}
	else if (this->count == 2)
	{
		this->text = &this->op3;
	}
	else if (this->count == 3)
	{
		this->text = &this->op4;
	}


}

void Dialog::updateTextBox()
{
	this->box.setPosition(this->player->getPlayer().getPosition().x - 550 , this->player->getPlayer().getPosition().y + 560);
}

void Dialog::render(RenderTarget& target)
{
	target.draw(*this->text);
	target.draw(this->box);
}





