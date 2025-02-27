//
//  Flowers.h
//  http_example
//
//  Created by Phoenix Perry on 24/05/15.
//
//

#ifndef __http_example__Flowers__
#define __http_example__Flowers__

#include <stdio.h>
#include "ofMain.h"
#include "SerialReader.h" 
#include "OscData.h" 
#include "ofxTonic.h" 
using namespace Tonic;


class Flowers{
private:
    ofxTonicSynth synth;
    int scaleDegree;
    void trigger();
    void setScaleDegreeBasedOnMouseX();
public:
    Flowers(SerialReader *serial_);
    void update();
    float &padsAverage;
    SerialReader *serial;
    OscData *oscData;
    float average;
    float& getFood();
    void sendToWekinator(float &padsAverage_, string inputToWekinator);
    vector<float> *pads;
};
 
#endif /* defined(__http_example__Flowers__) */
