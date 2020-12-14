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
	this->chemist.loadFromFile("Texture/Inside breif.jpg");
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
	this->sweetShop.loadFromFile("Texture/Inside breif.jpg"); 
	this->sweetShopBG.setTexture(sweetShop);
	this->sweetShopBG.setPosition(Vector2f(0.f, 1536.f));

	this->player->getPlayer().setPosition(Vector2f(684.f, 1920.f));
	//this->cam->getView().setCenter(Vector2f(683, 1920));
	
	this->hina.loadFromFile("Texture/hinata.png");
	this->hinata.setTexture(this->hina);
	this->hinata.setPosition(Vector2f(284.f, 1920.f));

	this->kage.loadFromFile("Texture/kageyama.png");
	this->kageyama.setTexture(this->kage);
	this->kageyama.setPosition(Vector2f(1014.f, 1920.f));

}

void MainPage::initInsideGreengrocer()
{
	this->greengrocer.loadFromFile("Texture/Inside breif.jpg");
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
	this->sugawara.setPosition(Vector2f(254.f, 3456.f));
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

MainPage::MainPage()
{
	//this->cam = cam;
	//ใส่ฟังก์ชันทุกอย่างที่อยู่ในprivate สร้าง
	this->initBG();
	this->initPlayer();
	this->initWindow();
	this->initMusic();
	this->initDoors();
	this->text = new Dialog(player);
	this->initInsideChemist();
	this->initInsideSweetShop();
	this->initInsideGreengrocer();
	this->initInsideFlorist();
	this->initInsideCafe();
	this->initInsideRestaurant();
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
	this->text->update();
	this->updateNewBG(this->whereAmI);
	
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
	this->whereAmI = OUTSIDE;

	if ( Keyboard::isKeyPressed(Keyboard::W)
		//ขอบเขตที่คลิ๊กได้
		&& this->sweetShopDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->whereAmI = SWEETSHOP;
		std::cout << "came in sweetShop" << std::endl;
	}
	else if (Keyboard::isKeyPressed(Keyboard::W) && this->chemistDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		std::cout << "came in chemist" << std::endl;
		this->whereAmI = CHEMIST;
		
	}
	else if (Keyboard::isKeyPressed(Keyboard::S) && this->greengrocerDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		std::cout << "came in greengrocer" << std::endl;
		this->whereAmI = GREENGROCER;
		this->updateNewBG(GREENGROCER);
	}
	else if (Keyboard::isKeyPressed(Keyboard::W) && this->floristDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		std::cout << "came in florist" << std::endl;
		this->whereAmI = FLORIST;
		this->updateNewBG(FLORIST);
	}
	else if (Keyboard::isKeyPressed(Keyboard::W) && this->cafeDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		std::cout << "came in cafe" << std::endl;
		this->whereAmI = CAFE;
		this->updateNewBG(CAFE);
	}
	else if (Keyboard::isKeyPressed(Keyboard::W) && this->restaurantDoor.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		std::cout << "came in restaurant" << std::endl;
		this->whereAmI =RESTAURANT;
		this->updateNewBG(RESTAURANT);
	}
	

	if (Keyboard::isKeyPressed(Keyboard::P))
	{
		this->player->updatePosition(whereAmI);
		this->renderDialog();
		//this->text->render(*this->window);
	}


	////เก็บไว้เช็คโน๊ตหาตำแหน่งได้
	//float position = this->player->getPlayer().getPosition().x;
	//std::cout << position << std::endl;
}

void MainPage::updateNewBG(short whereAmI)
{
	if (this->whereAmI == CHEMIST)
	{
		this->window->draw(this->kitaSan);
		this->window->draw(this->chemistBG);
	}
	else if (this->whereAmI == SWEETSHOP)
	{
		this->window->draw(this->sweetShopBG);
		this->window->draw(this->hinata);
		this->window->draw(this->kageyama);
	}
	else if (this->whereAmI == GREENGROCER)
	{
		this->window->draw(this->greengrocerBG);
		this->window->draw(this->ushijima);
	}
	else if (this->whereAmI == FLORIST)
	{
		this->window->draw(this->floristBG);
		this->window->draw(this->sugawara);
	}
	else if (this->whereAmI == CAFE)
	{
		this->window->draw(this->cafeBG);
		this->window->draw(this->kenma);
	}
	else if (this->whereAmI == RESTAURANT)
	{
		this->window->draw(this->restaurantBG);
		this->window->draw(this->oikawa);
	}
}


void MainPage::render()
{
	this->window->clear();
	this->renderBG();
	this->renderPlayer();
	this->window->draw(this->sweetShopDoor);
	this->window->draw(this->chemistDoor);
	this->window->draw(this->greengrocerDoor);
	this->window->draw(this->floristDoor);
	this->window->draw(this->cafeDoor);
	this->window->draw(this->restaurantDoor);

	this->renderDialog();
	/*if (this->whereAmI == SWEETSHOP)
	{
		
	}*/

	////delete this
	//sf::Text* omg;
	//sf::Text hey = sf::Text();
	//
	//hey.setString(L"สวัสดีก้าบบ");
	//sf::Font hey2;
	//hey2.loadFromFile("Font/Itim-Regular.ttf");
	//hey.setFont(hey2);
	//hey.setCharacterSize(30);
	//hey.setFillColor(sf::Color::Red);
	//hey.setPosition(sf::Vector2f(0, 0));
	//
	//omg = &hey; //<-ไปใส่ในเงื่อนไข
	//this->window->draw(*omg);

	this->window->display();
}

void MainPage::renderPlayer()
{
	this->player->render(*this->window);
}

void MainPage::renderBG()
{
	this->window->draw(this->mainBG);
	this->window->draw(this->mainBG2);

	if (this->whereAmI == SWEETSHOP)
	{
		this->renderNewBG(SWEETSHOP);
	}
}

void MainPage::renderDialog()
{
	this->text->render(*this->window);
}

void MainPage::renderNewBG(short whereAmI)
{
	this->updateNewBG(this->whereAmI);
}






