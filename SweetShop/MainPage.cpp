#include "MainPage.h"

void MainPage::initWindow()
{
	this-> window = new	RenderWindow(VideoMode(1366, 768), "Sweet shop on delivery", Style::Close | Style::Resize);
	this->window->setFramerateLimit(60);
}

void MainPage::initBG()
{
	this->main.loadFromFile("Texture/mainbg1.jpg");
	this->mainBG.setTexture(this->main);

	this->main2.loadFromFile("Texture/mainbg2.jpg");
	this->mainBG2.setTexture(this->main2);
	this->mainBG2.setPosition(4098,0);
}

void MainPage::initPlayer()
{
	this->player = new Player();
	this->player->updatePosition(0);
}

void MainPage::initMusic()
{
	this->BGsound.openFromFile("BGsound/Mitsubachi01.ogg");
	this->BGsound.setVolume(50.f);
	this->BGsound.setLoop(true);
	this->BGsound.play();
}

void MainPage::initDoors()
{
	this->chemistDoor.setSize(Vector2f(680, 560));
	this->chemistDoor.setPosition(Vector2f(540, 135));
	this->chemistDoor.setFillColor(Color::Transparent);

	this->sweetShopDoor.setSize(Vector2f(580, 360));
	this->sweetShopDoor.setPosition(Vector2f(1670, 215));
	this->sweetShopDoor.setFillColor(Color::Transparent);

	this->greengrocerDoor.setSize(Vector2f(780, 360));
	this->greengrocerDoor.setPosition(Vector2f(3190, 215));
	this->greengrocerDoor.setFillColor(Color::Transparent);

	this->floristDoor.setSize(Vector2f(580, 360));
	this->floristDoor.setPosition(Vector2f(4520, 215));
	this->floristDoor.setFillColor(Color::Transparent);

	this->cafeDoor.setSize(Vector2f(530, 360));
	this->cafeDoor.setPosition(Vector2f(6050, 215));
	this->cafeDoor.setFillColor(Color::Transparent);

	this->restaurantDoor.setSize(Vector2f(530, 360));
	this->restaurantDoor.setPosition(Vector2f(6830,215));
	this->restaurantDoor.setFillColor(Color::Transparent);
}

void MainPage::initInsideChemist()
{
	this->chemist.loadFromFile("Texture/Inside chemist breif.jpg");
	this->chemistBG.setTexture(this->chemist);
	this->chemistBG.setPosition(Vector2f(0.f, 768.f));

	this->kitaSan.setSize(Vector2f(180,360));
	this->kitaSan.setPosition(Vector2f(750, 1152));
	this->kitaSan.setFillColor(Color::Black);

	this->player->getPlayer().setPosition(Vector2f(684.f, 1152.f));
	//this->cam->getView().setCenter(Vector2f(683, 1152)); 


}

void MainPage::initInsideSweetShop()
{
	this->sweetShop.loadFromFile("Texture/Inside sweetshop breif.jpg"); 
	this->sweetShopBG.setTexture(sweetShop);
	this->sweetShopBG.setPosition(Vector2f(0.f, 1536.f));

	this->player->getPlayer().setPosition(Vector2f(684.f, 1920.f));
	//this->cam->getView().setCenter(Vector2f(683, 1920));
	
	this->hina.loadFromFile("Texture/hinata.png");
	this->hinata.setTexture(this->hina);
	this->hinata.setPosition(Vector2f(284.f, 1850.f));
	this->hinataArea.setSize(Vector2f(429, 375));
	this->hinataArea.setPosition(Vector2f(184.f, 1850.f));
	this->hinataArea.setFillColor(Color::Transparent);

	this->kage.loadFromFile("Texture/kageyama.png");
	this->kageyama.setTexture(this->kage);
	this->kageyama.setPosition(Vector2f(1014.f, 1820.f));
	this->kageyamaArea.setSize(Vector2f(375, 427));
	this->kageyamaArea.setPosition(Vector2f(914, 1720));
	this->kageyamaArea.setFillColor(Color::Transparent);


}

void MainPage::initInsideGreengrocer()
{
	this->greengrocer.loadFromFile("Texture/Inside greengrocer breif.jpg");
	this->greengrocerBG.setTexture(this->greengrocer);
	this->greengrocerBG.setPosition(Vector2f(0.f, 2304.f));
	
	this->player->getPlayer().setPosition(Vector2f(684.f, 2688.f));
	//this->cam->getView().setCenter(Vector2f(683, 2688));

	this->ushi.loadFromFile("Texture/ushijima.png");
	this->ushijima.setTexture(this->ushi);
	this->ushijima.setPosition(Vector2f(1084.f, 2688.f));

}

void MainPage::initInsideFlorist()
{
	this->florist.loadFromFile("Texture/Inside breif.jpg");
	this->floristBG.setTexture(this->greengrocer);
	this->floristBG.setPosition(Vector2f(0.f, 3072.f));

	this->player->getPlayer().setPosition(Vector2f(684.f, 3456.f));
	//this->cam->getView().setCenter(Vector2f(683, 3456));

	this->suga.loadFromFile("Texture/sugawara.png");
	this->sugawara.setTexture(this->suga);
	this->sugawara.setPosition(Vector2f(254.f, 3256.f));
	this->sugawaraArea.setSize(Vector2f(368, 455));
	this->sugawaraArea.setPosition(154, 3256);
	this->sugawaraArea.setFillColor(Color::Blue);
}

void MainPage::initInsideCafe()
{
	this->cafe.loadFromFile("Texture/Inside breif.jpg");
	this->cafeBG.setTexture(this->cafe);
	this->cafeBG.setPosition(Vector2f(0.f, 3840.f));

	this->player->getPlayer().setPosition(Vector2f(684.f, 4224.f));
	//this->cam->getView().setCenter(Vector2f(683, 4224));

	this->ken.loadFromFile("Texture/kenma.png");
	this->kenma.setTexture(this->ken);
	this->kenma.setPosition(Vector2f(190.f, 4224.f));
}

void MainPage::initInsideRestaurant()
{
	this->restaurant.loadFromFile("Texture/Inside breif.jpg");
	this->restaurantBG.setTexture(this->restaurant);
	this->restaurantBG.setPosition(Vector2f(0.f, 4608.f));

	this->player->getPlayer().setPosition(Vector2f(684.f, 4992.f));
	//this->cam->getView().setCenter(Vector2f(683, 4992));

	this->oikawa.setSize(Vector2f(180, 360));
	this->oikawa.setFillColor(Color::Blue);
	this->oikawa.setPosition(Vector2f(1011.f, 4992.f));
}

void MainPage::initDialog()
{
	this->font.loadFromFile("Font/Itim-Regular.ttf");

	this->empty.setString("  ");
	this->op1.setFont(font);
	this->op1.setCharacterSize(30);
	this->op1.setString(L"จริงๆก็ไม่ได้คิดว่าจะมาถึงขนาดนี้ในสองคืน");
	this->op1.setFillColor(Color::Black);
	this->op1.setPosition(this->player->getPlayer().getPosition().x , this->player->getPlayer().getPosition().y);

	this->op2.setFont(font);
	this->op2.setCharacterSize(30);
	this->op2.setString(L"amazingดีจริงๆ");
	this->op2.setFillColor(Color::Black);
	this->op2.setPosition(this->player->getPlayer().getPosition().x, this->player->getPlayer().getPosition().y);

	this->op3.setFont(font);
	this->op3.setCharacterSize(30);
	this->op3.setString(L"ปรบมือให้ตัวเองสองทีนะ");
	this->op3.setFillColor(Color::Black);
	this->op3.setPosition(this->player->getPlayer().getPosition().x, this->player->getPlayer().getPosition().y );

	this->op4.setFont(font);
	this->op4.setCharacterSize(30);
	this->op4.setString(L"เทสต์เสร็จแล้วก็ไปทำต่อซะ");
	this->op4.setFillColor(Color::Black);
	this->op4.setPosition(this->player->getPlayer().getPosition().x , this->player->getPlayer().getPosition().y);

	this->hina1.setFont(font);
	this->hina1.setCharacterSize(30);
	this->hina1.setString(L"นายควรมาอยู่ชิราโทริซาวะ---");
	this->hina1.setFillColor(Color::Black);
	this->hina1.setPosition(583, 2200);

	this->hina2.setFont(font);
	this->hina2.setCharacterSize(30);
	this->hina2.setString(L"อ่าว ผิดบทหรอ โทษที");
	this->hina2.setFillColor(Color::Black);
	this->hina2.setPosition(583, 2200);

	this->hina3.setFont(font);
	this->hina3.setCharacterSize(30);
	this->hina3.setString(L"จริงๆไม่ต้องชวน นายก็คงมาอยู่กับพวกเราอยู่แล้ว!");
	this->hina3.setFillColor(Color::Black);
	this->hina3.setPosition(583, 2200);

	this->hina4.setFont(font);
	this->hina4.setCharacterSize(30);
	this->hina4.setString(L"ยินดีต้อนรับนะ");
	this->hina4.setFillColor(Color::Black);
	this->hina4.setPosition(583, 2200);

	this->hina5.setFont(font);
	this->hina5.setCharacterSize(30);
	this->hina5.setString(L"เจ้าหน้ายักษ์ตรงมุมขวานั่นน่ะ ว่างๆก็เข้าไปคุยกับเขาหน่อยก็ได้");
	this->hina5.setFillColor(Color::Black);
	this->hina5.setPosition(583, 2200);

	this->hina6.setFont(font);
	this->hina6.setCharacterSize(30);
	this->hina6.setString(L"ดูท่าน่าจะเหงาพอตัวเลย");
	this->hina6.setFillColor(Color::Black);
	this->hina6.setPosition(583, 2200);

	this->kage1.setFont(font);
	this->kage1.setCharacterSize(30);
	this->kage1.setString(L"ถ้ามาคุยด้วยเพราะเจ้าฮินาตะล่ะก็ ไม่ต้องก็ได้");
	this->kage1.setFillColor(Color::Black);
	this->kage1.setPosition(583, 2200);

	this->kage2.setFont(font);
	this->kage2.setCharacterSize(30);
	this->kage2.setString(L"เพราะยังไงซะ เราทำงานด้วยกันก็ต้องมีคุยกันบ้างอยู่แล้ว");
	this->kage2.setFillColor(Color::Black);
	this->kage2.setPosition(583, 2200);

	this->kage3.setFont(font);
	this->kage3.setCharacterSize(30);
	this->kage3.setString(L"โดยเฉพาะตอนที่นายทำงานพลาด");
	this->kage3.setFillColor(Color::Black);
	this->kage3.setPosition(583, 2200);

	this->kage4.setFont(font);
	this->kage4.setCharacterSize(30);
	this->kage4.setString(L"รับรองว่าเราได้คุยกันยาวแน่");
	this->kage4.setFillColor(Color::Black);
	this->kage4.setPosition(583,2200);

	this->kage4_1.setFont(font);
	this->kage4_1.setCharacterSize(30);
	this->kage4_1.setString(L"[X] ผมไม่พลาดอยู่แล้ว");
	this->kage4_1.setFillColor(Color::Black);
	this->kage4_1.setPosition(183, 2200);

	this->kage4_2.setFont(font);
	this->kage4_2.setCharacterSize(30);
	this->kage4_2.setString(L"[C] หวังว่าจะเป็นเช่นนั้น");
	this->kage4_2.setFillColor(Color::Black);
	this->kage4_2.setPosition(583, 2200);

	this->kage5_1.setFont(font);
	this->kage5_1.setCharacterSize(30);
	this->kage5_1.setString(L"ให้แน่เถอะ");
	this->kage5_1.setFillColor(Color::Black);
	this->kage5_1.setPosition(583, 2200);

	this->kage5_2.setFont(font);
	this->kage5_2.setCharacterSize(30);
	this->kage5_2.setString(L"เอาน่า คนเรามีerrorกันบ้าง แค่อย่าบ่อยก็พอ");
	this->kage5_2.setFillColor(Color::Black);
	this->kage5_2.setPosition(583, 2200);

	this->kage6.setFont(font);
	this->kage6.setCharacterSize(30);
	this->kage6.setString(L"แต่ถึงวันนี้จะแค่วันทดลองงาน");
	this->kage6.setFillColor(Color::Black);
	this->kage6.setPosition(583, 2200);

	this->kage7.setFont(font);
	this->kage7.setCharacterSize(30);
	this->kage7.setString(L"ก็ไม่ได้หมายความว่าพวกฉันจะให้แต่งานง่ายๆหรอก");
	this->kage7.setFillColor(Color::Black);
	this->kage7.setPosition(583, 2200);

	this->kage8.setFont(font);
	this->kage8.setCharacterSize(30);
	this->kage8.setString(L"เริ่มด้วยร้านดอกไม้พี่สึกาวะระ");
	this->kage8.setFillColor(Color::Black);
	this->kage8.setPosition(583, 2200);
	
	this->kage9.setFont(font);
	this->kage9.setCharacterSize(30);
	this->kage9.setString(L"ถัดจากร้านเราไปอีกสองร้านทางขวา");
	this->kage9.setFillColor(Color::Black);
	this->kage9.setPosition(583, 2200);

	this->kage10.setFont(font);
	this->kage10.setCharacterSize(30);
	this->kage10.setString(L"ส่งช๊อคโกแลตให้ถึงมือพี่เขาล่ะ");
	this->kage10.setFillColor(Color::Black);
	this->kage10.setPosition(583, 2200);
}

MainPage::MainPage()
{
	//this->cam = cam;
	//ใส่ฟังก์ชันทุกอย่างที่อยู่ในprivate สร้าง
	this->initBG();
	this->initPlayer();
	this->initWindow();
	this->initMusic();
	this->initDoors();
	//this->text = new Dialog(player);
	this->initInsideChemist();
	this->initInsideSweetShop();
	this->initInsideGreengrocer();
	this->initInsideFlorist();
	this->initInsideCafe();
	this->initInsideRestaurant();
	this->initDialog();
}

MainPage::~MainPage()
{
	//ทำลาย
	delete this->window;
}

void MainPage::run()
{
	while (this->window->isOpen())
	{
		this->updatePollEvent();
		this->update();
		this->render();
	}
}

void MainPage::update()
{
	this->player->update();
	this->updateDoors();
	this->updateCharacter();
	this->updateDialog();
	//this->text->update();
}

void MainPage::updatePollEvent()
{
	//อีเวนท์ที่แสดง
	Event evnt;
	while (this->window->pollEvent(evnt))
	{
		if (evnt.Event::type == Event::Closed)
			this->window->close();
	}

}

void MainPage::updateDoors()
{
	if ( Keyboard::isKeyPressed(Keyboard::W)
		//ขอบเขตที่คลิ๊กได้
		&& this->sweetShopDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->insideSweetshop = true;
		this->outside = false;
		if (this->insideSweetshop)
		{	
			this->whereAmI = SWEETSHOP;
			std::cout << "came in sweetShop" << std::endl;
			
			this->exchangeShortToInt(SWEETSHOP);
		
			this->player->updatePosition(this->exchangedPlace);

		}
		
		//this->player->updatePosition(whereAmI);
	}
	else if (Keyboard::isKeyPressed(Keyboard::W) && this->chemistDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->outside = false;
		this->insideChemist = true;
		if (this->insideChemist)
		{
			std::cout << "came in chemist" << std::endl;
			//this->whereAmI = CHEMIST;

			this->exchangeShortToInt(CHEMIST);

			this->player->updatePosition(this->exchangedPlace);
		}
		
		//this->player->updatePosition(whereAmI);
	}
	else if (Keyboard::isKeyPressed(Keyboard::W) && this->greengrocerDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->outside = false;
		this->insideGreengrocer = true;
		if (this->insideGreengrocer)
		{
			std::cout << "came in greengrocer" << std::endl;
			this->whereAmI = GREENGROCER;

			this->exchangeShortToInt(GREENGROCER);

			this->player->updatePosition(this->exchangedPlace);
		}
		//this->player->updatePosition(whereAmI);
	}
	else if (Keyboard::isKeyPressed(Keyboard::W) && this->floristDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->outside = false;
		this->insideFlorist = true;
		if (this->insideFlorist)
		{
			std::cout << "came in florist" << std::endl;
			this->whereAmI = FLORIST;

			this->exchangeShortToInt(FLORIST);

			this->player->updatePosition(this->exchangedPlace);
		}
		//this->player->updatePosition(whereAmI);
	}
	else if (Keyboard::isKeyPressed(Keyboard::W) && this->cafeDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->insideCafe = true;
		if (this->insideCafe)
		{
			this->outside = false;
			std::cout << "came in cafe" << std::endl;
			this->whereAmI = CAFE;

			this->exchangeShortToInt(CAFE);

			this->player->updatePosition(this->exchangedPlace);
		}
		//this->player->updatePosition(whereAmI);
	}
	else if (Keyboard::isKeyPressed(Keyboard::W) && this->restaurantDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->insideRestaurant = true;
		if (this->insideRestaurant)
		{
			this->outside = false;
			std::cout << "came in restaurant" << std::endl;
			this->whereAmI = RESTAURANT;

			this->exchangeShortToInt(RESTAURANT);

			this->player->updatePosition(this->exchangedPlace);
		}
		//this->player->updatePosition(whereAmI);
	}
	else if(Keyboard::isKeyPressed(Keyboard::S))
	{
		this->insideChemist = false;
		this->insideSweetshop = false;
		this->insideGreengrocer = false;
		this->insideFlorist = false;
		this->insideCafe = false;
		this->insideRestaurant = false;
		this->outside = true;

		this->whereAmI = OUTSIDE;
		this->exchangeShortToInt(OUTSIDE);
		this->player->updatePosition(this->exchangedPlace);
	}
	
	//if (Keyboard::isKeyPressed(Keyboard::P))
	//{
	//	
	//	//this->renderDialog();
	//}


	////เก็บไว้เช็คโน๊ตหาตำแหน่งได้
	//float position = this->player->getPlayer().getPosition().x;
	//std::cout << position << std::endl;
}

void MainPage::updateCharacter()
{
	//this->testTime = this->clock.getElapsedTime().asSeconds();
	
	
	this->situation = 0;
	
	if (this->hinataArea.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->situation = 1;
	}
	else if (this->kageyamaArea.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->situation = 2;
	}
	else if (this->sugawaraArea.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->situation = 3;
	}
	 
}

void MainPage::updateDialog()
{
	this->testTime = this->clock.getElapsedTime().asSeconds();
	printf("%f\n", testTime);
	if (Keyboard::isKeyPressed(Keyboard::Space) && testTime > 1 && situation == 0)
	{
		this->i++;
		if (this->i == 2)
		{
			this->text = this->op1;

			//this->window->draw(*this->text);
		}
		else if (this->i == 3)
		{
			this->text = this->op2;
			//this->window->draw(*this->text);
		}
		else if (this->i == 4)
		{
			this->text = this->op3;
			//this->window->draw(*this->text);
		}
		else if (this->i == 5)
		{
			this->text = this->op4;
			//this->window->draw(*this->text);
		}

		if (i > 4)
		{
			this->i = 0;
		}
		this->clock.restart();
	}
	if (Keyboard::isKeyPressed(Keyboard::Space) && this->testTime > 1 && this->situation == 1) // ซ้าย
	{
		this->i++;
		if (this->i == 1)
		{
			this->text = this->hina1;

			//this->window->draw(*this->text);
		}
		else if (this->i == 2)
		{
			this->text = this->hina2;
			//this->window->draw(*this->text);
			printf("กดติดแล้วโว้ย");
		}
		else if (this->i == 3)
		{
			this->text = this->hina3;
			//this->window->draw(this->hina3);
			printf("กดติดแล้วโว้ยยยยยย");
		}
		else if (this->i == 4)
		{
			this->text = this->hina4;
			//this->window->draw(this->hina4);
		}
		else if (this->i == 5)
		{
			this->text = this->hina5;
			//this->window->draw(this->hina5);
		}
		else if (this->i == 6)
		{
			this->text = this->hina6;
			this->firstTalkWithHina = true;
		}
		
		if (this->i >= 7)
		{
			this->i = 0;
		}
		this->clock.restart();
		
	}
	if ((Keyboard::isKeyPressed(Keyboard::Space)|| Keyboard::isKeyPressed(Keyboard::X) || Keyboard::isKeyPressed(Keyboard::C)) && this->testTime > 1 && this->situation == 2 )
	{
		if (this->firstTalkWithHina == true)
		{
			this->j += 1;
			this->firstTalkWithHina == false;
		}
		
		if (this->j == 1)
		{
			this->text = this->kage1;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
		}
		if (this->j == 2)
		{
			this->text = this->kage2;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
		}
		if (this->j == 3)
		{
			this->text = this->kage3;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
		}
		if (this->j == 4)
		{
			this->text = this->kage4;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
		}
		if (this->j == 5)
		{
			this->text = this->kage4_1;
			this->text2 = this->kage4_2;
			
		}
		if (this->j==7 && this->X == true)
		{
			this->text = this->kage5_1;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
		}
		if (this->j==7 &&this->C == true)
		{
			this->text = this->kage5_2;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
		}
		if (this->j == 8)
		{
			this->text = this->kage6;
			this->text2 = this->empty;
		}
		if (this->j == 9)
		{
			this->text = this->kage7;
		}
		if (this->j == 10)
		{
			this->text = this->kage8;
		}
		if (this->j == 11)
		{
			this->text = this->kage9;
		}
		if (this->j == 12)
		{
			this->text = this->kage10;
		}
		/*if (this->j == 14)
		{
			this->text = this->kage11;
		}*/

		if (j > 12)
		{
			this->j = 0;
			this->X = false;
			this->C = false;
		}
		this->clock.restart();
	}

	if (this->secondTalkWithKage == true)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
		{
			this->C = false;
			this->X = true;
			this->text = this->kage5_1;
			this->text2 = this->empty;
			//this->j = 6;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = false;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			this->C = true;
			this->X = false;
			this->text = this->kage5_2;
			this->text2 = this->empty;
			//this->j = 6;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = false;
		}
	}
	
	int k = 0;

	if (Keyboard::isKeyPressed(Keyboard::Space) && this->testTime > 1 && this->situation == 3)
	{
		k++;
		if (k == 1)
		{
			
		}
	}


	

}


int MainPage::exchangeShortToInt(short whereAmI)
{
	if (whereAmI == CHEMIST)
	{
		this->exchangedPlace = 1;
	}
	else if (whereAmI == SWEETSHOP)
	{
		this->exchangedPlace = 2;
	}
	else if (whereAmI == GREENGROCER)
	{
		this->exchangedPlace = 3;
	}
	else if (whereAmI == FLORIST)
	{
		this->exchangedPlace = 4;
	}
	else if (whereAmI == CAFE)
	{
		this->exchangedPlace = 5;
	}
	else if (whereAmI == RESTAURANT)
	{
		this->exchangedPlace = 6;
	}
	else if (whereAmI == OUTSIDE)
	{
		this->exchangedPlace = 0;
	}

	return this->exchangedPlace;

}


void MainPage::render()
{
	this->window->clear();
	
	
	this->window->draw(this->sweetShopDoor);
	this->window->draw(this->chemistDoor);
	this->window->draw(this->greengrocerDoor);
	this->window->draw(this->floristDoor);
	this->window->draw(this->cafeDoor);
	this->window->draw(this->restaurantDoor);
	
	this->renderBG();



	this->updateDialog();
	//this->window->draw(*this->text);
	this->renderDialog();
	this->window->display();
}


void MainPage::renderBG()
{
	if (this->outside)
	{
		this->window->draw(this->mainBG);
		this->window->draw(this->mainBG2);
		this->player->render(*this->window);
		//this->updateCharacter();
	
	}
	if (this->insideChemist)
	{
		this->window->draw(this->chemistBG);
		this->window->draw(this->kitaSan);	
		this->player->render(*this->window);
	}
	if (this->insideSweetshop)
	{
		
		this->window->draw(this->sweetShopBG);
		this->window->draw(this->hinata);
		this->window->draw(this->kageyama);
		this->player->render(*this->window);
		this->window->draw(this->hinataArea);
		this->window->draw(this->kageyamaArea);
		//this->updateCharacter();
	
		
	}
	if(this->insideGreengrocer)//if (this->whereAmI == GREENGROCER)
	{
		this->window->draw(this->greengrocerBG);
		this->window->draw(this->ushijima);
		this->player->render(*this->window);
	}
	if (this->insideFlorist)//(this->whereAmI == FLORIST)
	{
		this->window->draw(this->floristBG);
		this->window->draw(this->sugawara);
		this->window->draw(this->sugawaraArea);
		this->player->render(*this->window);
	}
	if (this->insideCafe)//(this->whereAmI == CAFE)
	{
		this->window->draw(this->cafeBG);
		this->window->draw(this->kenma);
		this->player->render(*this->window);
	}
	if (this->insideRestaurant)//(this->whereAmI == RESTAURANT)
	{
		this->window->draw(this->restaurantBG);
		this->window->draw(this->oikawa);
		this->player->render(*this->window);
	}

}

void MainPage::renderDialog()
{
	this->window->draw(this->text);
	this->window->draw(this->text2);
}







