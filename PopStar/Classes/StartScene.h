//
//  StartScene.h
//  PopStar
//
//  Created by lazio14 on 15/4/6.
//
//

#ifndef __PopStar__StartScene__
#define __PopStar__StartScene__

class StartScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(StartScene);
};


#endif /* defined(__PopStar__StartScene__) */
