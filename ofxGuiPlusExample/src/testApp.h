#pragma once

#include "ofMain.h"
#include "ofxGuiPlus.h"
#include "ofxGui.h"
    
class testApp : public ofBaseApp{
        
    public:
        void setup();
        void update();
        void draw();
        
        void keyPressed(int key);
        void keyReleased(int key);
        
        ofxPanel gui;
        
        ofxFloatSliderPlus  param1;
        
        ofxFloatSlider s1;
    
        ofxColorSliderPlus color;
    
    
        ofParameter<float>pf;
    ofParameter<ofColor> colorParam;
};