#include <iostream>

#include <string>

//#include "architecture/talws.h"
#include "architecture/representation.h"


#include "../../hal/generic_linux/pthread.h"

namespace {  //FIXME
    Thread* CreatePThread(Threadable * obj, ThreadConfig cfg) {
        return new PThread(obj,cfg);
    }
    const bool registered_pthread_temp = ThreadFactory::Instance()->Register("PThread", CreatePThread)  ;
}


int main () {

    std::cout<<"Main: Inst"<<std::endl;
    //Representation rep("name",NULL);
//    Talws tal;

    std::cout<<"Main: Starting"<<std::endl;

//    tal.Start();

    std::cout<<"Main: Sleeping"<<std::endl;

    usleep(10000000);

    std::cout<<"Main: Stoping"<<std::endl;

//    tal.Stop();

    usleep(3000000);

    std::cout<<"Main: Exiting"<<std::endl;

    
    return 0;
}


