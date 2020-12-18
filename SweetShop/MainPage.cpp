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
	this->BGsound.setVolume(10.f);
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
	this->chemist.loadFromFile("Texture/Inside.jpg");
	this->chemistBG.setTexture(this->chemist);
	this->chemistBG.setPosition(Vector2f(0.f, 768.f));

	this->kita.loadFromFile("Texture/kita.png");
	this->kitaSan.setTexture(kita);
	this->kitaSan.setPosition(Vector2f(750, 1102));

	this->kitaSanArea.setSize(Vector2f(336, 417));
	this->kitaSanArea.setPosition(Vector2f(650, 1102));
	this->kitaSanArea.setFillColor(Color::Transparent);

	this->player->getPlayer().setPosition(Vector2f(684.f, 1152.f));
}

void MainPage::initInsideSweetShop()
{
	this->sweetShop.loadFromFile("Texture/Inside.jpg"); 
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
	this->greengrocer.loadFromFile("Texture/Inside.jpg");
	this->greengrocerBG.setTexture(this->greengrocer);
	this->greengrocerBG.setPosition(Vector2f(0.f, 2294.f));
	
	this->player->getPlayer().setPosition(Vector2f(684.f, 2688.f));

	this->ushi.loadFromFile("Texture/ushijima.png");
	this->ushijima.setTexture(this->ushi);
	this->ushijima.setPosition(Vector2f(1084.f, 2588.f));

}

void MainPage::initInsideFlorist()
{
	this->florist.loadFromFile("Texture/Inside.jpg");
	this->floristBG.setTexture(this->greengrocer);
	this->floristBG.setPosition(Vector2f(0.f, 3072.f));

	this->player->getPlayer().setPosition(Vector2f(684.f, 3456.f));

	this->suga.loadFromFile("Texture/sugawara.png");
	this->sugawara.setTexture(this->suga);
	this->sugawara.setPosition(Vector2f(254.f, 3356.f));
	this->sugawaraArea.setSize(Vector2f(368, 505));
	this->sugawaraArea.setPosition(154, 3256);
	this->sugawaraArea.setFillColor(Color::Transparent);
}

void MainPage::initInsideCafe()
{
	this->cafe.loadFromFile("Texture/Inside.jpg");
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
	this->restaurant.loadFromFile("Texture/Inside.jpg");
	this->restaurantBG.setTexture(this->restaurant);
	this->restaurantBG.setPosition(Vector2f(0.f, 4608.f));

	this->player->getPlayer().setPosition(Vector2f(684.f, 4992.f));
	//this->cam->getView().setCenter(Vector2f(683, 4992));

	this->oikawa.setSize(Vector2f(180, 360));
	this->oikawa.setFillColor(Color::Blue);
	this->oikawa.setPosition(Vector2f(1011.f, 4992.f));
}

void MainPage::initHowToPlay()
{
	this->howTo.loadFromFile("Texture/how to play.jpg");
	this->howToPlay.setTexture(howTo);
	this->howToPlay.setPosition(0, 5376);
	this->howtoBox.loadFromFile("Texture/how to play button.png");
	this->howToButton.setTexture(howtoBox);
	this->howToButton.setPosition(10, 678);
}

void MainPage::initCredit()
{
	this->end.loadFromFile("Texture/endCredit.jpg");
	this->credit.setTexture(end);
	this->credit.setPosition(0, 6144);
	this->creditBox.loadFromFile("Texture/credit button.png");
	this->creditButton.setTexture(creditBox);
	this->creditButton.setPosition(7896, 678);
}

void MainPage::initDialog()
{
	this->font.loadFromFile("Font/TH Mali Grade6 Bold.ttf");

	this->empty.setString("  ");

	this->op1.setFont(font);
	this->op1.setCharacterSize(50);
	this->op1.setString(L"เช้าวันนี้ยังคงสดใส แม้จะเป็นวันทดลองงานก็ตาม");
	this->op1.setFillColor(Color::Black);
	this->op1.setPosition(this->player->getPlayer().getPosition().x , this->player->getPlayer().getPosition().y);

	this->op2.setFont(font);
	this->op2.setCharacterSize(50);
	this->op2.setString(L"หวังว่ามันจะเป็นวันที่ดี");
	this->op2.setFillColor(Color::Black);
	this->op2.setPosition(this->player->getPlayer().getPosition().x, this->player->getPlayer().getPosition().y);

	this->op3.setFont(font);
	this->op3.setCharacterSize(50);
	this->op3.setString(L"ยังไม่เคยเจอใครในร้านเลย นอกจากคุณฮินาตะ");
	this->op3.setFillColor(Color::Black);
	this->op3.setPosition(this->player->getPlayer().getPosition().x, this->player->getPlayer().getPosition().y );

	this->op4.setFont(font);
	this->op4.setCharacterSize(50);
	this->op4.setString(L"ผมหวังว่าทุกคนจะใจดีกับผมนะ");
	this->op4.setFillColor(Color::Black);
	this->op4.setPosition(this->player->getPlayer().getPosition().x , this->player->getPlayer().getPosition().y);

	this->hina1.setFont(font);
	this->hina1.setCharacterSize(50);
	this->hina1.setString(L"โอ๊ะ! สวัสดีตอนเช้านะ!");
	this->hina1.setFillColor(Color::Black);
	this->hina1.setPosition(100, 1586);

	this->hina2.setFont(font);
	this->hina2.setCharacterSize(50);
	this->hina2.setString(L"ขอโทษด้วยที่ช่วงเช้าๆร้านจะดูยุ่งไปหน่อย");
	this->hina2.setFillColor(Color::Black);
	this->hina2.setPosition(100, 1586);

	this->hina3.setFont(font);
	this->hina3.setCharacterSize(50);
	this->hina3.setString(L"แต่ยังไงก็");
	this->hina3.setFillColor(Color::Black);
	this->hina3.setPosition(100, 1586);

	this->hina4.setFont(font);
	this->hina4.setCharacterSize(50);
	this->hina4.setString(L"ยินดีต้อนรับนะ");
	this->hina4.setFillColor(Color::Black);
	this->hina4.setPosition(100, 1586);

	this->hina5.setFont(font);
	this->hina5.setCharacterSize(50);
	this->hina5.setString(L"ถ้านายเจอคนอื่นๆในร้าน ว่างๆก็เข้าไปคุยกับพวกเขาได้นะ");
	this->hina5.setFillColor(Color::Black);
	this->hina5.setPosition(100, 1586);

	this->hina6.setFont(font);
	this->hina6.setCharacterSize(50);
	this->hina6.setString(L"ทุกคนระแวกนี้เช่นกัน");
	this->hina6.setFillColor(Color::Black);
	this->hina6.setPosition(100, 1586);

	this->kage1.setFont(font);
	this->kage1.setCharacterSize(50);
	this->kage1.setString(L"อ๋า? เนี่ยน่ะหรอคนที่นายหามาน่ะ?");
	this->kage1.setFillColor(Color::Black);
	this->kage1.setPosition(100, 1586);

	this->kage2.setFont(font);
	this->kage2.setCharacterSize(50);
	this->kage2.setString(L"นึกว่าจะดูโปรกว่านี้เสียอีก ผิดหวังนิดๆแหะ");
	this->kage2.setFillColor(Color::Black);
	this->kage2.setPosition(100, 1586);

	this->kage3.setFont(font);
	this->kage3.setCharacterSize(50);
	this->kage3.setString(L"ใครๆก็ไม่อยากให้งานตัวเองผิดพลาดนะรู้มั้ย");
	this->kage3.setFillColor(Color::Black);
	this->kage3.setPosition(100, 1586);

	this->kage4.setFont(font);
	this->kage4.setCharacterSize(50);
	this->kage4.setString(L"ดูแล้วเราเองก็ไม่ได้อยากคุยกันยาวๆหรอก");
	this->kage4.setFillColor(Color::Black);
	this->kage4.setPosition(100, 1586);

	this->kage4_1.setFont(font);
	this->kage4_1.setCharacterSize(50);
	this->kage4_1.setString(L"[X] ผมไม่พลาดอยู่แล้ว");
	this->kage4_1.setFillColor(Color::Black);
	this->kage4_1.setPosition(100, 1586);

	this->kage4_2.setFont(font);
	this->kage4_2.setCharacterSize(50);
	this->kage4_2.setString(L"[C] ผมไม่อยากให้คุณเอาความเป็นมืออาชีพมาวัดกันแบบนี้");
	this->kage4_2.setFillColor(Color::Black);
	this->kage4_2.setPosition(100, 1686);

	this->kage5_1.setFont(font);
	this->kage5_1.setCharacterSize(50);
	this->kage5_1.setString(L"ให้แน่เถอะ");
	this->kage5_1.setFillColor(Color::Black);
	this->kage5_1.setPosition(100, 1586);

	this->kage5_2.setFont(font);
	this->kage5_2.setCharacterSize(50);
	this->kage5_2.setString(L"'errorในมนุษย์น่ะ เกิดขึ้นได้บ่อยกว่าหุ่นยนต์'");
	this->kage5_2.setFillColor(Color::Black);
	this->kage5_2.setPosition(100, 1586);

	this->kage6.setFont(font);
	this->kage6.setCharacterSize(50);
	this->kage6.setString(L"แต่ถึงวันนี้จะแค่วันทดลองงาน");
	this->kage6.setFillColor(Color::Black);
	this->kage6.setPosition(100, 1586);

	this->kage7.setFont(font);
	this->kage7.setCharacterSize(50);
	this->kage7.setString(L"ก็ไม่ได้หมายความว่าพวกฉันจะให้แต่งานง่ายๆหรอก");
	this->kage7.setFillColor(Color::Black);
	this->kage7.setPosition(100, 1586);

	this->kage8.setFont(font);
	this->kage8.setCharacterSize(50);
	this->kage8.setString(L"เริ่มด้วยร้านดอกไม้พี่สึกาวะระ");
	this->kage8.setFillColor(Color::Black);
	this->kage8.setPosition(100, 1586);
	
	this->kage9.setFont(font);
	this->kage9.setCharacterSize(50);
	this->kage9.setString(L"ถัดจากร้านเราไปอีกสองร้านทางขวา");
	this->kage9.setFillColor(Color::Black);
	this->kage9.setPosition(100, 1586);

	this->kage10.setFont(font);
	this->kage10.setCharacterSize(50);
	this->kage10.setString(L"ส่งช๊อคโกแลตให้ถึงมือพี่เขาล่ะ");
	this->kage10.setFillColor(Color::Black);
	this->kage10.setPosition(100, 1586);

	this->player1.setFont(font);
	this->player1.setCharacterSize(50);
	this->player1.setString(L"ส่งของครับ จากร้านขนมคาเกยามะ");
	this->player1.setFillColor(Color::Black);
	this->player1.setPosition(100, 3122);

	this->player2.setFont(font);
	this->player2.setCharacterSize(50);
	this->player2.setString(L"ถึงคุณสึกะวาระครับ");
	this->player2.setFillColor(Color::Black);
	this->player2.setPosition(100, 3122);

	this->suga1.setFont(font);
	this->suga1.setCharacterSize(50);
	this->suga1.setString(L"เอ๊ะ ขอบคุณครับผม");
	this->suga1.setFillColor(Color::Black);
	this->suga1.setPosition(100, 3122);

	this->suga2.setFont(font);
	this->suga2.setCharacterSize(50);
	this->suga2.setString(L"เคยได้ยินฮินาตะเปรยๆว่าอยากได้คนช่วยส่งออร์เดอร์");
	this->suga2.setFillColor(Color::Black);
	this->suga2.setPosition(100, 3122);

	this->suga3.setFont(font);
	this->suga3.setCharacterSize(50);
	this->suga3.setString(L"แต่ก็ไม่คิดว่าจะได้เร็วขนาดนี้");
	this->suga3.setFillColor(Color::Black);
	this->suga3.setPosition(100, 3122);

	this->suga4.setFont(font);
	this->suga4.setCharacterSize(50);
	this->suga4.setString(L"เป็นยังไงบ้างล่ะ");
	this->suga4.setFillColor(Color::Black);
	this->suga4.setPosition(100, 3122);

	this->player2_1.setFont(font);
	this->player2_1.setCharacterSize(50);
	this->player2_1.setString(L"[X] นี่เป็นงานแรกเลยครับ");
	this->player2_1.setFillColor(Color::Black);
	this->player2_1.setPosition(100, 3122);

	this->player2_2.setFont(font);
	this->player2_2.setCharacterSize(50);
	this->player2_2.setString(L"[C] คุณเจ้าของร้านเหมือนจะหาเรื่องผม");
	this->player2_2.setFillColor(Color::Black);
	this->player2_2.setPosition(100, 3222);

	this->suga5_1.setFont(font);
	this->suga5_1.setCharacterSize(50);
	this->suga5_1.setString(L"น่าๆ อย่าถือสาเขาเลย");
	this->suga5_1.setFillColor(Color::Black);
	this->suga5_1.setPosition(100, 3122);

	this->suga5_2.setFont(font);
	this->suga5_2.setCharacterSize(50);
	this->suga5_2.setString(L"จริงๆเขาแค่หน้าดุไปงั้นแหละ");
	this->suga5_2.setFillColor(Color::Black);
	this->suga5_2.setPosition(100, 3122);

	this->suga5_3.setFont(font);
	this->suga5_3.setCharacterSize(50);
	this->suga5_3.setString(L"เอ๊ะ จริงหรอเนี่ย");
	this->suga5_3.setFillColor(Color::Black);
	this->suga5_3.setPosition(100, 3122);

	this->suga5_4.setFont(font);
	this->suga5_4.setCharacterSize(50);
	this->suga5_4.setString(L"ยังไงก็ สู้ๆนะ เป็นกำลังใจให้");
	this->suga5_4.setFillColor(Color::Black);
	this->suga5_4.setPosition(100, 3122);

	this->suga6.setFont(font);
	this->suga6.setCharacterSize(50);
	this->suga6.setString(L"สำหรับวันนี้ ขอบคุณมากนะ");
	this->suga6.setFillColor(Color::Black);
	this->suga6.setPosition(100, 3122);

	this->hina7.setFont(font);
	this->hina7.setCharacterSize(50);
	this->hina7.setString(L"เรื่องคาเกยามะก่อนหน้านี้ขอโทษด้วยนะ แหะๆ");
	this->hina7.setPosition(100, 3122);

	this->hina8.setFont(font);
	this->hina8.setCharacterSize(50);
	this->hina8.setString(L"นายเจอพี่สึกะวาระแล้วสินะ");
	this->hina8.setPosition(100, 3122);

	this->hina9.setFont(font);
	this->hina9.setCharacterSize(50);
	this->hina9.setString(L"พี่เขาใจดีมากเลยล่ะ");
	this->hina9.setPosition(100, 3122);

	this->hina10.setFont(font);
	this->hina10.setCharacterSize(50);
	this->hina10.setString(L"อย่าน้อยนายน่จะพอกระชุ่มกระชวยหัวใจขึ้นมาบ้าง");
	this->hina10.setPosition(100, 3122);

	this->hina11.setFont(font);
	this->hina11.setCharacterSize(50);
	this->hina11.setString(L"เพราะออร์เดอร์ต่อไปเป็นร้านคาเฟ่แทว เลยร้านดอกไม้ไปอีกหน่อยเอง");
	this->hina11.setPosition(100, 3122);

	this->hina12.setFont(font);
	this->hina12.setCharacterSize(50);
	this->hina12.setString(L"ฝากด้วยนะ");
	this->hina12.setPosition(100, 3122);

	this->player3.setFont(font);
	this->player3.setCharacterSize(50);
	this->player3.setString(L"สวัสดีครับ");
	this->player3.setPosition(100, 3122);

	this->player3.setFont(font);
	this->player3.setCharacterSize(50);
	this->player3.setString(L"ส่งของจากร้านขนมคาเกยามะ ถึงคุณโคสุเมะครับ");
	this->player3.setPosition(100, 3122);

	this->kenma1.setFont(font);
	this->kenma1.setCharacterSize(50);
	this->kenma1.setString(L"อ๋อ... โชโยฝากมาให้หรอกหรอ");
	this->kenma1.setPosition(100, 3122);

	this->kenma2.setFont(font);
	this->kenma2.setCharacterSize(50);
	this->kenma2.setString(L"นาย... หน้าตาไม่คุ้นเลย...");
	this->kenma2.setPosition(100, 3122);

	this->player4_1.setFont(font);
	this->player4_1.setCharacterSize(50);
	this->player4_1.setString(L"[X] ผมเพิ่งมาใหม่ครับ");
	this->player4_1.setPosition(100, 3122);

	this->player4_2.setFont(font);
	this->player4_2.setCharacterSize(50);
	this->player4_2.setString(L"[C] ... (คุณไม่ได้หันมามองผมด้วยซ้ำ!!)");
	this->player4_2.setPosition(100, 3122);

	this->kenma3_1.setFont(font);
	this->kenma3_1.setCharacterSize(50);
	this->kenma3_1.setString(L"อ่อ... ยินดีต้อนรับนะ");
	this->kenma3_1.setPosition(100, 3122);

	this->kenma3_2.setFont(font);
	this->kenma3_2.setCharacterSize(50);
	this->kenma3_2.setString(L"โชโยน่ะสแกนคนไม่เก่งเท่าไหร่");
	this->kenma3_2.setPosition(100, 3122);

	this->kenma3_3.setFont(font);
	this->kenma3_3.setCharacterSize(50);
	this->kenma3_3.setString(L"แต่ยังไง พวหฉันก็คงช่วยกันอีกแรง");
	this->kenma3_3.setPosition(100, 3122);

	this->kenma3_4.setFont(font);
	this->kenma3_4.setCharacterSize(50);
	this->kenma3_4.setString(L"อย่าลืมทำตัวดีๆเข้าไว้ล่ะ");
	this->kenma3_4.setPosition(100, 3122);

	this->kenma3_5.setFont(font);
	this->kenma3_5.setCharacterSize(50);
	this->kenma3_5.setString(L"อา.. งั้น ขอบคุณนะ");
	this->kenma3_5.setPosition(100, 3122);

	this->kenma3_6.setFont(font);
	this->kenma3_6.setCharacterSize(50);
	this->kenma3_6.setString(L"โอกาสหน้าค่อยคุยกันใหม่");
	this->kenma3_6.setPosition(100, 3122);

	this->kenma4.setFont(font);
	this->kenma4.setCharacterSize(50);
	this->kenma4.setString(L"สำหรับของ ขออบคุณนะ");
	this->kenma4.setPosition(100, 3122);

	this->kenma5.setFont(font);
	this->kenma5.setCharacterSize(50);
	this->kenma5.setString(L"ไว้ว่างๆจะแวะไปคุยด้วย");
	this->kenma5.setPosition(100, 3122);



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
	this->initCredit();
	this->initHowToPlay();
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
	else if (Keyboard::isKeyPressed(Keyboard::Space) && this->howToButton.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->atHowToPlayPage = true;
		if (atHowToPlayPage)
		{
			this->outside = false;
			this->whereAmI = HOWTO;

			this->exchangeShortToInt(HOWTO);

			this->player->updatePosition(this->exchangedPlace);
		}
	}
	else if (Keyboard::isKeyPressed(Keyboard::Space) && this->creditButton.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->atCreditPage = true;
		if (atCreditPage)
		{
			this->outside = false;
			this->whereAmI = CREDIT;

			this->exchangeShortToInt(CREDIT);

			this->player->updatePosition(this->exchangedPlace);
		}
	}
	else if(Keyboard::isKeyPressed(Keyboard::S))
	{
		this->insideChemist = false;
		this->insideSweetshop = false;
		this->insideGreengrocer = false;
		this->insideFlorist = false;
		this->insideCafe = false;
		this->insideRestaurant = false;
		this->atCreditPage = false;
		this->atHowToPlayPage = false;
		this->outside = true;

		this->whereAmI = OUTSIDE;
		this->exchangeShortToInt(OUTSIDE);
		this->player->updatePosition(this->exchangedPlace);
	}


	////เก็บไว้เช็คโน๊ตหาตำแหน่งได้
	//float position = this->player->getPlayer().getPosition().x;
	//std::cout << position << std::endl;
}

void MainPage::updateCharacter()
{
	this->situation = 0;

	if (this->hinataArea.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()) && this->thirdTalkWithSuga == true)
	{
		this->situation = 4;
	}
	
	else if (this->hinataArea.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
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
	
	else if (this->kenmaArea.getGlobalBounds().intersects(this->player->getPlayer().getGlobalBounds()))
	{
		this->situation = 5;
	}
	 
}

void MainPage::updateDialog()
{
	this->testTime = this->clock.getElapsedTime().asSeconds();
	printf("%f\n", testTime);

	/*if (Keyboard::isKeyPressed(Keyboard::Space) && testTime > 1 && situation == 0)
	{
		this->i++;
		if (this->i == 2)
		{
			this->text = this->op1;
		}
		else if (this->i == 3)
		{
			this->text = this->op2;
		}
		else if (this->i == 4)
		{
			this->text = this->op3;
		}
		else if (this->i == 5)
		{
			this->text = this->op4;
		}

		if (i > 4)
		{
			this->i = 0;
		}
		this->clock.restart();
	}*/

	if (Keyboard::isKeyPressed(Keyboard::Space) && this->testTime > 1 && this->situation == 1) // ซ้าย
	{
		this->i++;
		if (this->i == 1)
		{
			this->text = this->hina1;
		}
		else if (this->i == 2)
		{
			this->text = this->hina2;
		}
		else if (this->i == 3)
		{
			this->text = this->hina3;
		}
		else if (this->i == 4)
		{
			this->text = this->hina4;
		}
		else if (this->i == 5)
		{
			this->text = this->hina5;
		}
		else if (this->i == 6)
		{
			this->text = this->hina6;
			this->firstTalkWithHina = true;
		}
		else if (this->i == 7)
		{
			this->text = this->empty;
		}
		
		
		if (this->i >= 8)
		{
			this->i = 0;
		}
		this->clock.restart();
		
	}
	
	////////////////////////////////////KAGEYAMA////////////////////////////////////////////

	if (this->secondTalkWithKage == true) //ใช้ไม่ได้ต่อเนื่อง
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
		{
			this->C = false;
			this->X = true;
			/*this->text = this->kage5_1;
			this->text2 = this->empty;*/
			//this->j = 6;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = false;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			this->C = true;
			this->X = false;
			/*this->text = this->kage5_2;
			this->text2 = this->empty;*/
			//this->j = 6;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = false;
		}
	}

	if ((Keyboard::isKeyPressed(Keyboard::Space) || Keyboard::isKeyPressed(Keyboard::X) || Keyboard::isKeyPressed(Keyboard::C)) && this->testTime > 1 && this->situation == 2)
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
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
			this->j = 6;
		}
		if (this->j == 7 && this->X == true)
		{
			this->text = this->kage5_1;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
		}
		if (this->j == 7 && this->C == true)
		{
			this->text = this->kage5_2;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
		}
		if (this->j == 8)
		{
			this->firstTalkWithHina = true;
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
		if (this->j == 13)
		{
			this->text = this->empty;
			this->secondTalkWithKage = true;
		}

		if (j > 13)
		{
			this->j = 0;
			this->X = false;
			this->C = false;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
		}
		this->clock.restart();
	}

	/////////////SUGA/////////////////////////////////////////////

	if (this->thirdTalkWithSuga == true) 
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
		{
			this->C = false;
			this->X = true;
			this->secondTalkWithKage = true;
			this->thirdTalkWithSuga = false;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			this->C = true;
			this->X = false;
			this->secondTalkWithKage = true;
			this->thirdTalkWithSuga = false;
		}
	}

	if ((Keyboard::isKeyPressed(Keyboard::Space) || Keyboard::isKeyPressed(Keyboard::X) || Keyboard::isKeyPressed(Keyboard::C)) && this->testTime > 1 && this->situation == 3)
	{
		if (this->secondTalkWithKage == true)
		{
			k++;
			this->secondTalkWithKage = false;
		}

		if (this->k == 1)
		{
			this->text = this->player1;
			this->text2 = this->empty;
			this->secondTalkWithKage = true;
		}
		if (this->k == 2)
		{
			this->text = this->player2;
			this->text2 = this->empty;
			this->secondTalkWithKage = true;
		}
		if (this->k == 3)
		{
			this->text = this->suga1;
			this->text2 = this->empty;
			this->secondTalkWithKage = true;
		}
		if (this->k == 4)
		{
			this->text = this->suga2;
			this->text2 = this->empty;
			this->secondTalkWithKage = true;
		}
		if (this->k == 5)
		{
			this->text = this->suga3;
			this->secondTalkWithKage = true;
		}
		if (this->k == 6)
		{
			this->text = this->suga4;
			this->secondTalkWithKage = true;
		}
		if (this->k == 7)
		{
			this->text = this->player2_1;
			this->text2 = this->player2_2;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
			this->thirdTalkWithSuga = true;
			this->k =7;
		}
		if (this->k == 8 && this->X == true) 
		{
			this->text = this->suga5_3;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
			this->thirdTalkWithSuga = true;
		}
		if (this->k == 8 && this->C == true)
		{
			this->text = this->suga5_1;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
			this->thirdTalkWithSuga = true;
		}
		if (this->k == 9 && this->C == true)
		{
			this->text = this->suga5_2;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
			this->thirdTalkWithSuga = true;
		}
		if (this->k == 9 && this->X == true)
		{
			this->text = this->suga5_4;
			this->text2 = this->empty;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
			this->thirdTalkWithSuga = true;
		}
		if (this->k == 10)
		{
			this->text = this->suga6;
			this->secondTalkWithKage = true;
			this->thirdTalkWithSuga = true;
		}
		if (this->k == 11)
		{
			this->text = this->empty;
			this->secondTalkWithKage = true;
			this->thirdTalkWithSuga = true;
		}
		

		if (this->k > 11)
		{
			this->j = 0;
			this->X = false;
			this->C = false;
			this->firstTalkWithHina = true;
			this->secondTalkWithKage = true;
			this->thirdTalkWithSuga = true;
		}
		this->clock.restart();
	}

	
//////////////////hinata part 2//////////
	if ((Keyboard::isKeyPressed(Keyboard::Space) || Keyboard::isKeyPressed(Keyboard::X) || Keyboard::isKeyPressed(Keyboard::C)) && this->testTime > 1 && this->situation == 4)
	{
		if (this->thirdTalkWithSuga == true)
		{
			this->l++;
			this->thirdTalkWithSuga = false;
		}
		if (this->l == 1)
		{
			this->text = this->hina7;
			this->thirdTalkWithSuga = true;
		}
		if (this->l == 2)
		{
			this->text = this->hina8;
			this->thirdTalkWithSuga = true;
		}
		if (this->l == 3)
		{
			this->text = this->hina9;
			this->thirdTalkWithSuga = true;
		}
		if (this->l == 4)
		{
			this->text = this->hina10;
			this->thirdTalkWithSuga = true;
		}
		if (this->l == 5)
		{
			this->text = this->hina11;
			this->thirdTalkWithSuga = true;
		}
		if (this->l == 6)
		{
			this->text = this->hina12;
			this->thirdTalkWithSuga = true;
			this->forthTalkWithHina = true;
		}

		if (this->l > 6)
		{
			this->l = 0;
			this->forthTalkWithHina = true;
		}
		this->clock.restart();
	}
	//////////////////kenmaaaa//////////
	if (this->fifthTalkWithKenma == true)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
		{
			this->C = false;
			this->X = true;
			this->forthTalkWithHina = true;
			this->fifthTalkWithKenma = false;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			this->C = true;
			this->X = false;
			this->forthTalkWithHina = true;
			this->fifthTalkWithKenma = false;
		}
	}

	if ((Keyboard::isKeyPressed(Keyboard::Space) || Keyboard::isKeyPressed(Keyboard::X) || Keyboard::isKeyPressed(Keyboard::C)) && this->testTime > 1 && this->situation == 5)
	{
		if (this->forthTalkWithHina == true)
		{
			this->i++;
			this->forthTalkWithHina = false;
		}
		if (this->i == 1)
		{
			this->text = this->player3;
			this->forthTalkWithHina = true;
		}
		if (this->i == 2)
		{
			this->text = this->player4;
			this->forthTalkWithHina = true;
		}
		if (this->i == 3)
		{
			this->text = this->kenma1;
			this->forthTalkWithHina = true;
		}
		if (this->i == 4)
		{
			this->text = this->kenma2;
			this->forthTalkWithHina = true;
		}
		if (this->i == 5)
		{
			this->text = this->player4_1;
			this->text2 = this->player4_2;
			this->forthTalkWithHina = true;
			this->fifthTalkWithKenma = true;
		}
		if (this->i == 6 && this->X == true)
		{
			this->text = this->kenma3_1;
			this->text2 = this->empty;
			this->forthTalkWithHina = true;
		}
		if (this->i == 6 && this->C == true)
		{
			this->text = this->kenma3_5;
			this->text2 = this->empty;
			this->forthTalkWithHina = true;
		}
		if (this->i == 7 && this->X == true)
		{
			this->text = this->kenma3_2;
			this->text2 = this->empty;
			this->forthTalkWithHina = true;
		}
		if (this->i == 7 && this->C == true)
		{
			this->text = this->kenma3_6;
			this->forthTalkWithHina = false;
			this->fifthTalkWithKenma = true;
		}
		if (this->i == 8 && this->X == true)
		{
			this->text = this->kenma3_3;
			this->forthTalkWithHina = true;
		}
		if (this->i == 8 && this->C == true)
		{
			this->text = this->empty;
			this->fifthTalkWithKenma = true;
			this->i = 0;
		}
		if (this->i == 9 && this->X == true)
		{
			this->text = this->kenma3_4;
			this->forthTalkWithHina = true;
			this->fifthTalkWithKenma = true;
		}
		if (this->i == 10 && this->X == true)
		{
			this->text = this->empty;
			this->forthTalkWithHina = true;
			this->fifthTalkWithKenma = true;
		}
		if (this->i > 10)
		{
			this->i = 0;
			this->forthTalkWithHina = false;
			this->fifthTalkWithKenma = true;
		}
		this->clock.restart();
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
	else if (whereAmI == HOWTO)
	{
		this->exchangedPlace = 7;
	}
	else if (whereAmI == CREDIT)
	{
		this->exchangedPlace = 8;
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
		this->window->draw(this->howToButton);
		this->window->draw(this->creditButton);
		this->player->render(*this->window);
		//this->updateCharacter();
	
	}
	if (this->insideChemist)
	{
		this->window->draw(this->chemistBG);
		this->window->draw(this->kitaSan);	
		this->player->render(*this->window);
		this->window->draw(kitaSanArea);
	}
	if (this->insideSweetshop)
	{		this->window->draw(this->sweetShopBG);
		this->window->draw(this->hinata);
		this->window->draw(this->kageyama);
		this->player->render(*this->window);
		this->window->draw(this->hinataArea);
		this->window->draw(this->kageyamaArea);
	}
	if(this->insideGreengrocer)
	{
		this->window->draw(this->greengrocerBG);
		this->window->draw(this->ushijima);
		this->player->render(*this->window);
	}
	if (this->insideFlorist)
	{
		this->window->draw(this->floristBG);
		this->window->draw(this->sugawara);
		this->window->draw(this->sugawaraArea);
		this->player->render(*this->window);
	}
	if (this->insideCafe)
	{
		this->window->draw(this->cafeBG);
		this->window->draw(this->kenma);
		this->player->render(*this->window);
	}
	if (this->insideRestaurant)
	{
		this->window->draw(this->restaurantBG);
		this->window->draw(this->oikawa);
		this->player->render(*this->window);
	}
	if (this->atHowToPlayPage)
	{
		this->window->draw(this->howToPlay);
		this->player->render(*this->window);
	}
	if (this->atCreditPage)
	{
		this->window->draw(this->credit);
		this->player->render(*this->window);
	}
}

void MainPage::renderDialog()
{
	this->window->draw(this->text);
	this->window->draw(this->text2);
}







