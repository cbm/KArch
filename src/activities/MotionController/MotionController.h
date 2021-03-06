#ifndef MOTION_CONTROLLER_H
#define MOTION_CONTROLLER_H

#include "architecture/IActivity.h"

#include "architecture/narukom/pub_sub/publisher.h"


#include "messages/motion.pb.h"

#include "alptr.h"
#include "alvalue.h"
//#define WEBOTS
#include "alxplatform.h"
#include <albroker.h>
#include <alproxy.h>
#include <almemoryfastaccess.h>
#include "almotionproxy.h"
#include "almemoryproxy.h"
#include "albrokermanager.h"


class MotionController : public IActivity, public Publisher{

public:

	MotionController();

	int Execute();

    void UserInit();

    std::string GetName() {
        return "MotionController";
    }


private:

	AL::ALPtr<AL::ALMotionProxy> motion;
	AL::ALPtr<AL::ALMemoryProxy> memory;

	float *AccZ;

	bool robotDown;
	bool robotUp;
	float AccZvalue;

	int counter;

	int walkPID;
	float walkParam1, walkParam2, walkParam3, walkParam4;

	int headPID;
	float headParam1, headParam2;

	int actionPID;
	
	AL::ALValue names, values;

	MessageBuffer* sub_buffer;
	MotionMessage* mm;

	void commands();
	void mglrun();
	void process_messages();

	void ALstandUp();
	void ALstandUpCross();
	void ALstandUpFront();
	void ALstandUpBack();

	void ALstandUp2010();
	void ALstandUpFront2010();
	void ALstandUpBack2010();
	
	void loadActions();
	AL::ALValue LieDown_names, LieDown_times, LieDown_keys;
	AL::ALValue LeftKick_names, LeftKick_times, LeftKick_keys;
	AL::ALValue RightKick_names, RightKick_times, RightKick_keys;

};

#endif
