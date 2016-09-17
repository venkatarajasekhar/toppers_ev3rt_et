///////////////////////////////////////////////////////////
//  CollisionCondition.cpp
//  Implementation of the Class CollisionCondition
//  Created on:      2016/08/03 12:28:36
//  Original author: 039389
///////////////////////////////////////////////////////////

#include "CollisionCondition.h"
#include "Bluetooth.h"


CollisionCondition::CollisionCondition(){
	m_Velocity = 0;
	m_VelocityPrev = 0;
}



CollisionCondition::~CollisionCondition(){

}


void CollisionCondition::onStart(){

}


bool CollisionCondition::check(){

	m_Velocity = m_StateObserver->getVelocity();
	
	int acceleration = m_Velocity - m_VelocityPrev;
	m_VelocityPrev  = m_Velocity;
	
	bool ret = false;

	// 条件判定
	fprintf(btlog, "acc=%d¥r¥n", acceleration);
	if(acceleration < c_dif) {
		ret = true;
	}

	return ret;
}
