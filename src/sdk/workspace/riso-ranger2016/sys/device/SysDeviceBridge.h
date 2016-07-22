///////////////////////////////////////////////////////////
//  SysDeviceBridge.h
//  Implementation of the Class SysDeviceBridge
//  Created on:      2016/05/26 11:18:09
//  Original author: 037789
///////////////////////////////////////////////////////////

#if !defined(EA_42EC3F18_9FD7_4c80_976A_C48157E528D4__INCLUDED_)
#define EA_42EC3F18_9FD7_4c80_976A_C48157E528D4__INCLUDED_

#include "src\sdk\workspace\riso-ranger2016\sys\arch\interface\SubsystemBridge.h"
#include "SysDeviceIf.h"

class SysDeviceBridge : public SubsystemBridge
{

public:
	virtual ~SysDeviceBridge();

	void doStartRcvCommand();
	static SysDeviceBridge* geInstance();

private:
	static SysDeviceBridge* instance;
	SysDeviceIf *the_device;

	SysDeviceBridge(uint16 rv_subsys_id, sint32 rv_mbox_id);
	virtual void actInitialize();
	virtual void actReceiveMessage(uint16 rv_msg_code, uint16* rv_message);

};
#endif // !defined(EA_42EC3F18_9FD7_4c80_976A_C48157E528D4__INCLUDED_)