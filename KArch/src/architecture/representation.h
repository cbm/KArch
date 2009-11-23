#ifndef representation_h_
#define representation_h_ 1

#include <string>

#include <string>
#include "architecture/communicationProxy.h"
#include "communication/KStream.h"
#include "boost/any.hpp"
#include "Sockets/Mutex.h"
#include "../hal/syscall.h"
#include "architecture/blackboard.h"

 class Blackboard;

class Representation {
    private:

      const std::string RepName;

      Blackboard * const blk;
    public:

      Representation( const std::string RepName ,  Blackboard * blk);
      virtual ~Representation();

      std::string GetRepName () { return RepName; }



};

#define DEFAULT_REP_CONSTRUCTOR(TYPE) \
          TYPE ( Blackboard * blk ) : Representation( #TYPE, blk ) { ; }

#endif  // _representation_h_
