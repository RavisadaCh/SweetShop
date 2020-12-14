#include "Player.h"

void Player::initPlayer()
{
	if (this->playerTexture.loadFromFile("Texture/animation walk and stand fix1.png"))
	{
		printf("âËÅ´¢Öé¹");
	}
	this->player.setTexture(this->playerTexture);
	this->player.setOrigin(90.f, 0.f);
	this->player.setPosition(Vector2f(684.f, 384.f));
}

void Player::initAnimation()
{
	this->wordForMovement = STAY;
	moved = false;
	this->currentFram.top = 360.f;
	this->currentFram.left = 0.f;
	this->currentFram.height = 360.f;
	this->currentFram.width = 180.f;
	this->playerTimer.restart();
	//this->player.setTextureRect(IntRect(this->currentFram));
}

void Player::initCamera()
{
	this->cam.setSize(Vector2f(1366.f, 768.f));
	this->cam.setCenter(this->player.getPosition());
}

Player::Player()
{
	this->initPlayer();
	this->initAnimation();
	this->initCamera();
	

}

Player::~Player()
{
}

void Player::update()
{
	this->updateMovedPosition();
	this->updateAnimation();
	this->updateCamera();
	this->updatePlace();
}

void Player::updatePlace()
{
	



}

void Player::updateMovedPosition()
{
	//this->wordForMovement = STAY;

	if (Keyboard::isKeyPressed(Keyboard::A) && this->player.getPosition().x - 90 > 0)
	{
		this->wordForMovement = MOVING_LEFT;
		this->player.move(-6.f, 0.f);
	}
	else if (Keyboard::isKeyPressed(Keyboard::D) && this->player.getPosition().x + 90 < 8196)
	{
		this->wordForMovement = MOVING_RIGHT;
		this->player.move(6.f, 0.f);
	}
	else 
	{
		this->wordForMovement = STAY;
	}


	if (this->wordForMovement == STAY)
	{
		moved = false;
	}
	
}

void Player::updateAnimation()
{
	if (this->wordForMovement == STAY)
	{
		this->currentFram.top = 0.f;
		this->currentFram.left = 0.f;
		this->currentFram.height = 360.f;
		this->currentFram.width = 180.f;
		this->playerTimer.restart();
		//printf("STAY PUT MAN!!");
	}
	else if (this->wordForMovement == MOVING_LEFT)
	{
		if (this->playerTimer.getElapsedTime().asMilliseconds() >= 200) //speed
		{

			this->currentFram.top = 360.f;
			this->currentFram.height = 360.f;
			this->currentFram.width = 180.f;
			this->currentFram.left -= 180.f;
			if (!moved) {
				this->currentFram.left = 720.f;
				this->moved = true;
			}
			if (this->currentFram.left < 180.f)
			{ 
				this->currentFram.left = 720.f;
			}
			this->playerTimer.restart();
		}
	}
	else if (this->wordForMovement == MOVING_RIGHT)
	{
		if (this->playerTimer.getElapsedTime().asMilliseconds() >= 200) //speed
		{
			this->currentFram.top = 0.f;
			this->currentFram.height = 360.f;
			this->currentFram.width = 180.f;
			this->currentFram.left += 180.f;
			if (!moved) {
				this->currentFram.left = 180.f;
				this->moved = true;
			}
			if (this->currentFram.left > 720.f)
			{
				this->currentFram.left = 180.f;
			}
			
			this->playerTimer.restart();
		}
	}
	this->player.setTextureRect(IntRect(this->currentFram));

}

void Player::updateCamera()
{
	//this->updatePosition(this->place);
	/*this->Valuetest = this->testnum;
	printf("%d\n", Valuetest);*/
	this->test = this->testWhere;
	this->cam.setCenter(this->player.getPosition());

	if (this->cam.getCenter().x - 683 <= 0)
	{
		this->cam.setCenter(683, 384);
	}

	if (this->cam.getCenter().x + 683 >= 8196)
	{
		this->cam.setCenter(7513, 384);
	}
}



void Player::render(RenderTarget& target)
{
	target.draw(this->player);
	target.setView(this->cam);
}

Sprite Player::getPlayer()
{
	return this->player;
}

void Player::updatePosition(short where)
{
	this->testWhere = where;
	//this->place = where;
}

//View Player::getView()
//{
//	//return this->cam;
//}






