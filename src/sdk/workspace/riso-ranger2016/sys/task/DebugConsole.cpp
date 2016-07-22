///////////////////////////////////////////////////////////
//  DebugConsole.cpp
//  Implementation of the Class DebugConsole
//  Created on:      2016/05/24 13:09:41
//  Original author: 037789
///////////////////////////////////////////////////////////

#include "DebugConsole.h"
#include "SysDeviceBridge.h"

DebugConsole::DebugConsole(sint32 rv_tsk_id, sint32 rv_mbox_id)
    : Task(rv_tsk_id, rv_mbox_id)
{

}



DebugConsole::~DebugConsole(){

}





void DebugConsole::start(){
    loop();
}


bool DebugConsole::isOwnMessage(){

	return false;
}