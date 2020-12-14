#include "Dialog.h"

void Dialog::initText()
{
	this->font.loadFromFile("Font/Itim-Regular.ttf");
	
	this->op1.setFont(font);
	this->op1.setCharacterSize(30);
	this->op1.setString(L"จริงๆก็ไม่ได้คิดว่าจะมาถึงขนาดนี้ในสองคืน");
	this->op1.setFillColor(Color::Black);
	this->op1.setPosition(this->player->getPlayer().getPosition().x - 500, this->player->getPlayer().getPosition().y + 570);

	this->op2.setFont(font);
	this->op2.setCharacterSize(30);
	this->op2.setString(L"amazingดีจริงๆ");
	this->op2.setFillColor(Color::Black);
	this->op2.setPosition(this->player->getPlayer().getPosition().x - 500, this->player->getPlayer().getPosition().y + 570);

	this->op3.setFont(font);
	this->op3.setCharacterSize(30);
	this->op3.setString(L"ปรบมือให้ตัวเองสองทีนะ");
	this->op3.setFillColor(Color::Black);
	this->op3.setPosition(this->player->getPlayer().getPosition().x - 500, this->player->getPlayer().getPosition().y + 570);

	this->op4.setFont(font);
	this->op4.setCharacterSize(30);
	this->op4.setString(L"เทสต์เสร็จแล้วก็ไปทำต่อซะ");
	this->op4.setFillColor(Color::Black);
	this->op4.setPosition(this->player->getPlayer().getPosition().x - 500, this->player->getPlayer().getPosition().y + 570);
	
	this->hina1.setFont(font);
	this->hina1.setCharacterSize(30);
	this->hina1.setString(L"นายควรมาอยู่ชิราโทริซาวะ---");
	this->hina1.setFillColor(Color::Black);
	this->hina1.setPosition(583,1352);

	this->hina2.setFont(font);
	this->hina2.setCharacterSize(30);
	this->hina2.setString(L"อ่าว ผิดบทหรอ โทษที");
	this->hina2.setFillColor(Color::Black);
	this->hina2.setPosition(583, 1352);

	this->hina3.setFont(font);
	this->hina3.setCharacterSize(30);
	this->hina3.setString(L"จริงๆไม่ต้องชสน นายก็คงมาอยู่กับพวกเราอยู่แล้ว");
	this->hina3.setFillColor(Color::Black);
	this->hina3.setPosition(583, 1352);

	this->hina4.setFont(font);
	this->hina4.setCharacterSize(30);
	this->hina4.setString(L"ยินดีต้อนรับนะ");
	this->hina4.setFillColor(Color::Black);
	this->hina4.setPosition(583, 1352);

	this->hina5.setFont(font);
	this->hina5.setCharacterSize(30);
	this->hina5.setString(L"เจ้าหน้ายักษ์ตรงมุมขวานั่นน่ะ ว่างๆก็เข้าไปคุยกับเขาหน่อยก็ได้ ดูเหมือนจะเหงาพอตัวเลย");
	this->hina5.setFillColor(Color::Black);
	this->hina5.setPosition(583, 1352);

	this->kage1.setFont(font);
	this->kage1.setCharacterSize(30);
	this->kage1.setString(L"ถ้ามาคุยด้วยเพราะเจ้าฮินาตะล่ะก็ ไม่ต้องก็ได้");
	this->kage1.setFillColor(Color::Black);
	this->kage1.setPosition(583, 1352);

	this->kage2.setFont(font);
	this->kage2.setCharacterSize(30);
	this->kage2.setString(L"เพราะยังไงซะ เราทำงานด้วยกันก็ต้องมีคุยกันบ้างอยู่แล้ว");
	this->kage2.setFillColor(Color::Black);
	this->kage2.setPosition(583, 1352);

	this->kage3.setFont(font);
	this->kage3.setCharacterSize(30);
	this->kage3.setString(L"โดยเฉพาะตอนที่นายทำงานพลาด");
	this->kage3.setFillColor(Color::Black);
	this->kage3.setPosition(583, 1352);

	this->kage4.setFont(font);
	this->kage4.setCharacterSize(30);
	this->kage4.setString(L"รับรองว่าเราได้คุยกันยาวแน่");
	this->kage4.setFillColor(Color::Black);
	this->kage4.setPosition(583, 1352);
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
	
	this->updateText(situation);
	this->updateTextBox();

}

void Dialog::updateText(int situation)
{
	this->timing = this->time.getElapsedTime().asSeconds();
	this->count = 0;
	if (Keyboard::isKeyPressed(Keyboard::Space) && timing > 3 && situation == 0)
	{
		this->count++;
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
		this->time.restart();
	}
	else if (Keyboard::isKeyPressed(Keyboard::Space) && this->timing > 3 && situation == 1)
	{
		this->count++;
		if (this->count == 0)
		{
			this->text = &this->hina1;
		}
		else if (this->count == 1)
		{
			this->text = &this->hina2;
		}
		else if (this->count == 2)
		{
			this->text = &this->hina3;
		}
		else if (this->count == 3)
		{
			this->text = &this->hina4;
		}
		else if (this->count == 4)
		{
			this->text = &this->hina5;
		}
		this->time.restart();
	}
	else if (Keyboard::isKeyPressed(Keyboard::Space) && this->timing > 3 && situation == 2)
	{
		this->count++;
		if (this->count == 0)
		{
			this->text = &this->kage1;
		}
		else if (this->count == 1)
		{
			this->text = &this->kage2;
		}
		else if (this->count == 2)
		{
			this->text = &this->kage3;
		}
		else if (this->count == 3)
		{
			this->text = &this->kage4;
		}
		this->time.restart();
	}

		
	
	std::cout << this->timing << std::endl;
	
	
	


}

void Dialog::updateTextBox()
{
	this->box.setPosition(this->player->getPlayer().getPosition().x - 550 , this->player->getPlayer().getPosition().y + 560);
}

void Dialog::render(RenderTarget& target)
{
	target.draw(this->box);
	target.draw(*this->text);
}





