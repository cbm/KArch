if ( NOT ( ${TargetPlatform} STREQUAL "robot" AND ${RobotPlatform} STREQUAL "nao" ) )
    return()
endif ( NOT ( ${TargetPlatform} STREQUAL "robot" AND ${RobotPlatform} STREQUAL "nao" ) )

include( ../../hal/robot/nao-1.6.0/bootstrap.cmake ) 

set ( ActivityName RobotController )

set ( ActivitySrcs  gamecontroller.cpp 
                    robotcontroller.cpp   
) 

include ( ../activTemplate.cmake )

use_lib(${ActivityName}  LIBCORE TOOLS LIBCORE BOOST TINYXML ALCOMMON ALVALUE)
