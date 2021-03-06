#include "testApp.h"
//--------------------------------------------------------------
void testApp::setup() {
    string s = "one,two,three,four,five,six,seven,eight,nine,ten";
    
    list = ofSplitString(s, ",");
    
    gui.setup();// <-- gui is just a regular ofxPanel
    

    
    gui.add(new ofxFloatSliderPlus(pf.set("float param", 1000, 100, 10000)));    // <--- add ofParameter to ofxPanel using an ofxFloatSliderPlus
    gui.add(param1.setup("param1", 1, 0, 100));                                  // <--- instanced ofxFloatSliderPlus
    gui.add(s1.setup("regular ofxFloatSlider", 1, 0, 100));                      // <--- regular ofxFloatSlider, just to compare
    gui.add(color.setup(" Color", ofColor::red, ofColor(0,0), ofColor(255,255)));// <--- instanced ofxColorSliderPlus
    gui.add(new ofxColorSliderPlus(colorParam.set("ColorParam", ofColor::yellow, ofColor(0,0), ofColor(255,255))));
    gui.add(new ofxDropDown("Dropdown", list));
	
	g1.setName("g1");
	g2.setName("g2");
	g3.setName("g3");
	
	v2.set("v2", ofVec2f(0),ofVec2f(0),ofVec2f(1));
	v3.set("v3", ofVec3f(0),ofVec3f(0),ofVec3f(1));
	v4.set("v4", ofVec4f(0),ofVec4f(0),ofVec4f(1));
	
	g1.add(v2);
	g1.add(f1.set("f1", 0,0,1));
	g2.add(v3);
	g3.add(v4);
	g2.add(g1);
	g3.add(g2);
	gui.add(g3);
	
}

//--------------------------------------------------------------
void testApp::update() {}

//--------------------------------------------------------------
void testApp::draw() {
    ofBackground(color);
    
    ofSetColor(255);
    gui.draw();
    
    string str = "USAGE:\n";
    str += "Place the mouse over a slider.\n";
    str += "The slider will highlight if it is an ofxSliderPlus.\n";
    str += "If highlighted:\n";
    str += "    Press the space bar to edit the value\n";
    str += "        A rectangle will appear around the value\n";
    str += "        Type a new value.\n";
    str += "        Press the return key to set the typed value\n";
    str += "        Press the space bar or move the mouse out from the slider to cancel.\n";
    str += "    If not editing the value (the value DOESN'T have a rectangle around it)\n";
    str += "        Use the arrow keys to change the value\n";
    str += "            LEFT/RIGHT: -/+ fine increment   (1/1000th of the slider range by default)\n";
    str += "            DOWN/UP   : -/+ coarse increment (1/100th of the slider range by default)\n";
    str += "            If the SHIFT key is being held, the value will be rounded\n";
    
    int numLines = ofSplitString(str, "\n").size();
    int lineHeight = 8 * 1.7;
//    ofDrawBitmapStringHighlight(str, 20, ofGetHeight() - numLines*lineHeight -4);
	
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void testApp::keyReleased(int key) {

}
