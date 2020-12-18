#include "Player.h"

void Player::initPlayer()
{
	if (this->playerTexture.loadFromFile("Texture/animation walk and stand fix1.png"))
	{
		//printf("âËÅ´¢Öé¹");
	}
	this->player.setTexture(this->playerTexture);
	this->player.setOrigin(90.f, 0.f);
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
	if (Keyboard::isKeyPressed(Keyboard::A) && this->player.getPosition().x - 90 > 0)
	{
		this->wordForMovement = MOVING_LEFT;
		this->player.move(-6.f, 0.f);
	}
	else if (this->pinPlace == 1 || this->pinPlace == 2 || this->pinPlace == 3 || this->pinPlace == 4 || this->pinPlace == 5 || this->pinPlace == 6 || this->pinPlace == 7)
	{
		if (Keyboard::isKeyPressed(Keyboard::D) && this->player.getPosition().x + 90 < 1366)
		{
			this->wordForMovement = MOVING_RIGHT;
			this->player.move(6.f, 0.f);
		}
		else
		{
			this->wordForMovement = STAY;
		}
	}
	else if (this->pinPlace == 8 && Keyboard::isKeyPressed(Keyboard::D) && this->player.getPosition().x + 90 < 2732)
	{
		this->wordForMovement = MOVING_RIGHT;
		this->player.move(6.f, 0.f);
	}
	else if (this->pinPlace == 0 && Keyboard::isKeyPressed(Keyboard::D) && this->player.getPosition().x + 90 < 8196)
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
	if (this->pinPlace == 1)			//<---chemist
	{
		this->cam.setCenter(683, 1152);
	}
	else if (this->pinPlace == 2)		//<---sweetshop
	{
		this->cam.setCenter(683, 1920);
	}
	else if (this->pinPlace == 3)		//<---greengrocer
	{
		this->cam.setCenter(683, 2688);
	}
	else if (this->pinPlace == 4)		//<---florist
	{
		this->cam.setCenter(683, 3456);
	}
	else if (this->pinPlace == 5)		//<---cafe
	{
		this->cam.setCenter(683, 4224);
	}
	else if (this->pinPlace == 6)		//<---restaurant
	{
		this->cam.setCenter(683, 4992);
	}
	else if (this->pinPlace == 7)
	{
		this->cam.setCenter(683, 5760);
	}
	else if (this->pinPlace == 8)
	{
		this->cam.setCenter(this->player.getPosition());

		if (this->cam.getCenter().x - 683 <= 0)
		{
			this->cam.setCenter(683, 6528);
		}
		if (this->cam.getCenter().x + 683 >= 2732)
		{
			this->cam.setCenter(2049, 6528);
		}
	}
	else if(this->pinPlace == 0)		//<---outside
	{
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
	
}



void Player::render(RenderTarget& target)
{
	
	target.setView(this->cam);
	target.draw(this->player);
}

Sprite Player::getPlayer()
{
	return this->player;
}

void Player::updatePosition(int where)
{
	this->pinPlace = where;
	//this->place = where;
	float xPosition = this->player.getPosition().x;
	if (pinPlace == 0)
	{
		this->player.setPosition(Vector2f(684.f, 384.f));
	}
	if (pinPlace == 1)
	{
		this->player.setPosition(Vector2f(684.f, 1152.f));
	}
	if (pinPlace == 2)
	{
		this->player.setPosition(Vector2f(684.f, 1920.f));
	}
	if (pinPlace == 3)
	{
		this->player.setPosition(Vector2f(684.f, 2688.f));
	}
	if (pinPlace == 4)
	{
		this->player.setPosition(Vector2f(684.f, 3456.f));
	}
	if (pinPlace == 5)
	{
		this->player.setPosition(Vector2f(684.f, 4224.f));
	}
	if (pinPlace == 6)
	{
		this->player.setPosition(Vector2f(684.f, 4992.f));
	}
	if (pinPlace == 7)
	{
		this->player.setPosition(Vector2f(684.f, 5760.f));
	}
	if (pinPlace == 8)
	{
		this->player.setPosition(Vector2f(684.f, 6528.f));
	}
	
	
}







