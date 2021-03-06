SRCLANG := c++

# インクルードパスを列挙する.
#   面倒なので、ヘッダファイルが存在し得るパスは全てインクルードパスに含め、
#   include 記述は ヘッダファイル名のみを記述するものとする.
PROJECT_INCLUDE += \
	-I../workspace/riso-ranger2016/common/c_include \
	-I../workspace/riso-ranger2016/sys/action \
	-I../workspace/riso-ranger2016/sys/arch/interface \
	-I../workspace/riso-ranger2016/sys/arch \
	-I../workspace/riso-ranger2016/sys/arch/OS \
	-I../workspace/riso-ranger2016/sys/arch/timer \
	-I../workspace/riso-ranger2016/sys/condition \
	-I../workspace/riso-ranger2016/sys/device \
	-I../workspace/riso-ranger2016/sys/scenario \
	-I../workspace/riso-ranger2016/sys/sequence \
	-I../workspace/riso-ranger2016/sys/task \
	-I../workspace/riso-ranger2016/event \
	-I../workspace/riso-ranger2016/eng/linetrace \
	-I../workspace/riso-ranger2016/eng/calibration \
	-I../workspace/riso-ranger2016 \
	-I./

APPL_CXXOBJS += \
	../workspace/riso-ranger2016/sys/action/Action.o \
	../workspace/riso-ranger2016/sys/action/DirectionRunAction.o \
	../workspace/riso-ranger2016/sys/action/EmergencyStopAction.o \
	../workspace/riso-ranger2016/sys/action/LineTraceAction.o \
	../workspace/riso-ranger2016/sys/action/RecliningAction.o \
	../workspace/riso-ranger2016/sys/action/SitWaitAction.o \
	../workspace/riso-ranger2016/sys/action/TailBrakeAction.o \
	../workspace/riso-ranger2016/sys/action/TailCalibrationAction.o \
	../workspace/riso-ranger2016/sys/action/TailRunAction.o \
	../workspace/riso-ranger2016/sys/arch/OS/RTOS.o \
	../workspace/riso-ranger2016/sys/arch/interface/SubsystemBridge.o \
	../workspace/riso-ranger2016/sys/arch/interface/SubsystemIf.o \
	../workspace/riso-ranger2016/sys/arch/timer/Timer.o \
	../workspace/riso-ranger2016/sys/arch/timer/TimerEvent.o \
	../workspace/riso-ranger2016/sys/condition/CollisionCondition.o \
	../workspace/riso-ranger2016/sys/condition/CommandCondition.o \
	../workspace/riso-ranger2016/sys/condition/Condition.o \
	../workspace/riso-ranger2016/sys/condition/DistanceCondition.o \
	../workspace/riso-ranger2016/sys/condition/DistanceToObjectCondition.o \
	../workspace/riso-ranger2016/sys/condition/EmptyCondition.o \
	../workspace/riso-ranger2016/sys/condition/InclinationCondition.o \
	../workspace/riso-ranger2016/sys/condition/LineCondition.o \
	../workspace/riso-ranger2016/sys/condition/RotationCondition.o \
	../workspace/riso-ranger2016/sys/condition/TailStopCondition.o \
	../workspace/riso-ranger2016/sys/condition/TimeCondition.o \
	../workspace/riso-ranger2016/sys/device/balancer.o \
	../workspace/riso-ranger2016/sys/device/balancer_param.o \
	../workspace/riso-ranger2016/sys/device/Battery.o \
	../workspace/riso-ranger2016/sys/device/Bluetooth.o \
	../workspace/riso-ranger2016/sys/device/ColorSensor.o \
	../workspace/riso-ranger2016/sys/device/GyroSensor.o \
	../workspace/riso-ranger2016/sys/device/init_ev3.o \
	../workspace/riso-ranger2016/sys/device/Motor.o \
	../workspace/riso-ranger2016/sys/device/spec_ev3.o \
	../workspace/riso-ranger2016/sys/device/StateObserver.o \
	../workspace/riso-ranger2016/sys/device/TailControl.o \
	../workspace/riso-ranger2016/sys/device/TouchSensor.o \
	../workspace/riso-ranger2016/sys/device/UltrasonicControl.o \
	../workspace/riso-ranger2016/sys/device/WheelControl.o \
	../workspace/riso-ranger2016/sys/scenario/LeftCourseScenario.o \
	../workspace/riso-ranger2016/sys/scenario/RightCourseScenario.o \
	../workspace/riso-ranger2016/sys/scenario/Scenario.o \
	../workspace/riso-ranger2016/sys/sequence/Sequence.o \
	../workspace/riso-ranger2016/sys/sequence/Sequencer.o \
	../workspace/riso-ranger2016/sys/task/Task.o \
	../workspace/riso-ranger2016/sys/task/DebugConsole.o \
	../workspace/riso-ranger2016/sys/task/Engine.o \
	../workspace/riso-ranger2016/sys/task/HighPriority.o \
	../workspace/riso-ranger2016/sys/task/Main.o \
	../workspace/riso-ranger2016/eng/calibration/Calibration.o \
	../workspace/riso-ranger2016/event/TouchSensorListener.o \
	../workspace/riso-ranger2016/eng/linetrace/PIDControl.o 


