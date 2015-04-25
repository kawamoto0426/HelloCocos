#include "LifeGameScene2.h"

USING_NS_CC;

LifeGameScene2::LifeGameScene2()
{
}

LifeGameScene2::~LifeGameScene2()
{
}

void LifeGameScene2::initialize()
{
	// レイヤーの作成
	auto *pLayer = GameLayer::create();
	this->addChild(pLayer);

	// タイトルの作成
	auto *pTitleLabel = Label::create("LifeGame2", "fonts/arial.ttf", 24);
	pTitleLabel->setAnchorPoint(Vec2(0, 1));
	pTitleLabel->setColor(Color3B(128, 128, 128));
	pTitleLabel->setPosition(100, RESOLUTION_HEIGHT-100);
	pTitleLabel->setZOrder(10);
	pLayer->addChild(pTitleLabel);

	// セル
	float beginX = 100;
	float beginY = RESOLUTION_HEIGHT - 100;
	float offsetX = 50;
	float offsetY = -50;
	const int SELL_WIDTH = 45;
	const int SELL_HEIGHT = 45;
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			auto *pSprite = Sprite::create("LifeGame/common_base.png");
			pSprite->setPosition(beginX + offsetX*x, beginY + offsetY*y);
			pSprite->setAnchorPoint(Vec2(0, 1));
			pSprite->setScale(SELL_WIDTH, SELL_HEIGHT);
			pLayer->addChild(pSprite);
		}
	}
}

void LifeGameScene2::finalize()
{
}

void LifeGameScene2::enter()
{
}

void LifeGameScene2::leave()
{
}

bool LifeGameScene2::input()
{
	return false;
}

void LifeGameScene2::process(float delta)
{
}
