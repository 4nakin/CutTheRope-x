//
//  LevelEditor.h
//  CutTheRopeDemo
//
//  Created by guanghui on 5/11/13.
//
//

#ifndef __CutTheRopeDemo__LevelEditor__
#define __CutTheRopeDemo__LevelEditor__

#include "cocos2d.h"

USING_NS_CC;

class LevelFileHelper;
class PineappleModel;
class RopeModel;

class LevelEditor : public CCLayer
{
public:
    LevelEditor(LevelFileHelper *levelHelper);
    ~LevelEditor();
    static CCScene* createWithLevel(LevelFileHelper *levelHelper);
    
    virtual bool init();
    
    void createMenu();
    void resetLevel();
    void saveLevel();
    void playLevel();
    void drawLoadedLevel();
    void createPineappleSpriteFromModel(PineappleModel *pm);
    void createRopeSpriteFromModel(RopeModel *rm);
private:
    LevelEditor();
    
    LevelFileHelper         *_fileHandler;
    CCSprite                *_background;
    CCSpriteBatchNode       *_pineapplesSpriteSheet;
    CCSpriteBatchNode       *_ropeSpriteSheet;
    
    CCArray                 *_ropeSpritesArray;
    
};

#endif /* defined(__CutTheRopeDemo__LevelEditor__) */
