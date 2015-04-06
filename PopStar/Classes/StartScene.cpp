//
//  StartScene.cpp
//  PopStar
//
//  Created by lazio14 on 15/4/6.
//
//

#include "StartScene.h"

USING_NS_CC;

#define POPSTARBG_WIDTH  320.f
#define POPSTARBG_HEIGHT 481.f

Scene* StartScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = StartScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool StartScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto sprite = Sprite::create("popstar_start.png");
    
    
    
    // position the sprite on the center of the screen
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    sprite->setScale(visibleSize.width / POPSTARBG_WIDTH, visibleSize.height / POPSTARBG_HEIGHT);
    CCLOG("screen width:%f height%f", visibleSize.width, visibleSize.height);
    
    // add the sprite as a child to this layer
    this->addChild(sprite, 0);
    
    return true;
}
