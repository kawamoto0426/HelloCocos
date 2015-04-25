#pragma once
#include "common.h"

class LifeGameScene2 : public GameScene {

	typedef GameScene super;

public:

	// 生成関数
	CREATE_FUNC(LifeGameScene2);

public:

	LifeGameScene2();
	~LifeGameScene2();

	virtual void initialize() override;
	virtual void finalize() override;
	virtual void enter() override;
	virtual void leave() override;
	virtual bool input() override;
	virtual void process(float delta) override;

};
