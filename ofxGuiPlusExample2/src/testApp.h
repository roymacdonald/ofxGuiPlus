#pragma once

#include "ofMain.h"
#include "ofxGuiPlus.h"

    
class testApp : public ofBaseApp{
        
    public:
        void setup();
        void update();
        void draw();
        
        void keyPressed(int key);
        void keyReleased(int key);
        
        ofxPanelPlus gui;
        
        ofxFloatSliderPlus  param1;
        
        ofxFloatSlider s1;
    
        ofxColorSliderPlus color;
    
    
        ofParameter<float>pf;
    ofParameter<ofColor> colorParam;
    vector<string> list;
	ofParameterGroup g1,g2,g3;
	ofParameter<ofVec2f>v2;
	ofParameter<ofVec3f>v3;
	ofParameter<ofVec4f>v4;
	ofParameter<float>f1;
};