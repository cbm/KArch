#ifndef VISION_H
#define VISION_H
#include <albroker.h>
#include "alptr.h"

#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "architecture/IActivity.h"
#include <iostream>
//#include "albrokermanager.h"
//#include "almemoryproxy.h"

#include "KImageExtractor.h"
#include "KSegmentator.h"

#include "architecture/narukom/pub_sub/publisher.h"
#include "messages/VisionObservations.pb.h"
//#define DEBUGVISION

#include <vector>

class Vision : public IActivity, public Publisher
{

public:
    /**
    * The only available constructor: I need:
    * albroker: only to pass along to the KImageExtractor
    * MessageQueue : a messageQueue to deliver messages to
    * gui= enable debug gui? On the robot all cvhighigui calls should fail, so default is false
    */
    Vision() ;

    void UserInit();
    void testrun();
    int Execute();
    std::string GetName() {
        return "Vision";
    }


private:
    bool cvHighgui;
    BallTrackMessage trckmsg;
    //AL::ALPtr<AL::ALMemoryProxy> memory;

    //Ball Detection related
    typedef struct balldata
    {
        float x, y;
        float r;//Observed radius
    } balldata_t;
    enum colors
    {
        bad = 0, red = 1, blue = 2, green = 3, skyblue = 4, yellow = 5, orange = 6, white = 7, black = 8
    };
    //Extractor Object, to get a new image
    KImageExtractor ext;
    KSegmentator *seg;
    KSegmentator *segbottom;
    KSegmentator *segtop;
    int type;//Colorspace fourCC
    //Raw Input Image
    IplImage *rawImage;
    IplImage *segIpl;
    //Ball Detection related
    std::vector<CvPoint> ballpixels;
    std::vector<CvPoint> ygoalpost;
    std::vector<CvPoint> bgoalpost;

    void gridScan(const KSegmentator::colormask_t color);
    bool calculateValidBall(const CvPoint2D32f center, float radius, KSegmentator::colormask_t c);
    balldata_t locateBall(std::vector<CvPoint> cand);
    CvPoint traceline(CvPoint start, CvPoint vel, KSegmentator::colormask_t c);
    //Wrapper for seg object
    KSegmentator::colormask_t doSeg(int x, int y);
    void cvShowSegmented();
};

#endif
