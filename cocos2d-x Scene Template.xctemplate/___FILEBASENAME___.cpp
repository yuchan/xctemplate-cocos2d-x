//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAMEASIDENTIFIER___.h"

USING_NS_CC;

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___()
{

}

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___()
{

}

Scene* ___FILEBASENAMEASIDENTIFIER___::createScene()
{
  auto scene = Scene::create();
  auto layer = ___FILEBASENAMEASIDENTIFIER___::create();
  scene->addChild(layer);
  return scene;
}

bool ___FILEBASENAMEASIDENTIFIER___::init()
{
  if (!Layer::init()) {
    return false;
  }

  // initialize

  return true;
}

void ___FILEBASENAMEASIDENTIFIER___::update(float dt)
{
  
}
