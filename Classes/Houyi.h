#ifndef __HOUYI_SCENE_H__
#define __HOUYI_SCENE_H__

#include "cocos2d.h"
#include "menuScene1st.h"

using namespace cocos2d;

class Houyi : public MenuScene1st
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();
	CREATE_FUNC(Houyi);
};

#endif // __HOUYI_SCENE_H__

