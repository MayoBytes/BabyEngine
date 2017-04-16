/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GameObject.h
 * Author: dsbatts
 *
 * Created on April 15, 2017, 9:11 PM
 */

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Engine.h"
#include "EngineComponent.h"
#include "Transform.h"

namespace baby {
    class GameObject : public EngineComponent {
    
    public:
        bool attachedToParent;
        Transform transform;
        virtual ~GameObject()=0;
        virtual void update()=0;
        virtual void setup()=0;
        virtual void draw()=0;
        void setTrasform(Transform& t);
        Transform* getTransform();
        
    protected:
        GameObject(Engine* instance, long guid, std::string typeID);
        GameObject(ObjectInit& init);
        GameObject(Engine* instance, long guid, std::string typeID, EngineComponent* parent);
        GameObject(ObjectInit& init, EngineComponent* parent);
    };
}
#endif /* GAMEOBJECT_H */

