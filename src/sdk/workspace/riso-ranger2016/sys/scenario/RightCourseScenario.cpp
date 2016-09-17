///////////////////////////////////////////////////////////
//  RightCourseSenario.cpp
//  Implementation of the Class RightCourseSenario
//  Created on:      2016/08/04 13:35:25
//  Original author: 039389
///////////////////////////////////////////////////////////

#include "RightCourseScenario.h"
#include "Scenario.h"

#include "SitWaitAction.h"
#include "LineTraceAction.h"
#include "TailBrakeAction.h"
#include "RecliningAction.h"
#include "TailRunAction.h"
#include "TailRunAction.h"
#include "TailCalibrationAction.h"

#include "TimeCondition.h"
#include "CollisionCondition.h"
#include "DistanceToObjectCondition.h"
#include "InclinationCondition.h"
#include "DistanceCondition.h"
#include "TailStopCondition.h"
#include "EmptyCondition.h"
#include "CommandCondition.h"

RightCourseScenario::RightCourseScenario(){

}



RightCourseScenario::~RightCourseScenario(){

}


void RightCourseScenario::start(){
	// シーケンス順設定
	Sequence* sequence;
	Sequence* firstSequence;
///////////////////////////////////
//スタート
///////////////////////////////////
  // 尻尾キャリブレーション部
	firstSequence = 							new Sequence(new TailCalibrationAction(),	new TailStopCondition(1000)	);
	sequence = firstSequence->setNextSequence(	new Sequence(new SitWaitAction(97),			new CommandCondition())	);
	// スタート部
	sequence = sequence->setNextSequence(	new Sequence(new LineTraceAction(20, 45, 0.5, new PIDControl(40, 0, 0)),	new DistanceCondition(300))		);	// スタート直後はゆっくり走行
//	sequence = sequence->setNextSequence(	new Sequence(new LineTraceAction(80, 45, new PIDControl(80, 0, 3000)),	new EmptyCondition())		);	// 直線終わりまで
	sequence = sequence->setNextSequence(		new Sequence(new LineTraceAction(80, 2, 0.5, new PIDControl(80, 0.5, 3000)),	new DistanceCondition(4350)));
	sequence = sequence->setNextSequence(		new Sequence(new LineTraceAction(35, 2, 0.5, new PIDControl(80, 0.5, 3000)),	new DistanceCondition(700))	);
	sequence = sequence->setNextSequence(		new Sequence(new LineTraceAction(80, 2, 0.5, new PIDControl(80, 0.5, 3000)),	new DistanceCondition(1250)));
	sequence = sequence->setNextSequence(		new Sequence(new LineTraceAction(40, 2, 0.5, new PIDControl(80, 0.5, 3000)),	new DistanceCondition(1100)));
//////////////////////////////////////
//ゴール
//////////////////////////////////////
//////////////////////////////////////
//階段
//////////////////////////////////////
	sequence = sequence->setNextSequence(		new Sequence(new LineTraceAction(50, 2, 0.5, new PIDControl(80, 0.5, 3000)),	new DistanceCondition(720)));


//////////////////////////////////////
//階段終わり
//////////////////////////////////////
///////////////////////////////////////
//ガレージ
///////////////////////////////////////
	//ToDo グレーラインの検知する位置が決まったら微調整
	sequence = sequence->setNextSequence(		new Sequence(new LineTraceAction(40, 60, 0.5, new PIDControl(80, 0.5, 3000)),	new DistanceCondition(80))	);
	sequence = sequence->setNextSequence(		new Sequence(new LineTraceAction(30, 80, 0.5, new PIDControl(80, 0.5, 3000)),	new DistanceCondition(80))	);
	sequence = sequence->setNextSequence(		new Sequence(new LineTraceAction(20, 80, 0.5, new PIDControl(80, 0.5, 3000)),	new DistanceCondition(40))	);
	sequence = sequence->setNextSequence(		new Sequence(new TailBrakeAction(),			new TimeCondition(700))		);
///////////////////////////////////////
//ガレージ終わり
///////////////////////////////////////


	m_Sequencer->startSequence(firstSequence);
}
