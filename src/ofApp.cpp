#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    xpos = 50;  // horizontal start position
    ypos = 50; // LAB1: vertical start position
    ofBackground(ofColor::black);  // black background
}

//--------------------------------------------------------------
void ofApp::update(){
    //xpos += 5;
    xpos += 10; // LAB1: Traveling twice as fast
    ypos += 5;
    
    if(xpos >= ofGetWidth()){  // if horizontal position is off the screen (width)
        xpos = 0;             // reset horizontal position
    }
    
    if(ypos >= ofGetHeight()){
        ypos = 0;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(230, 123, 10); //sets the color of the circle below
    
    
    ofDrawCircle(xpos, ofGetHeight()/2, 50);   // draw a circle at the (variable) horizontal position, starting at the midle height of the screen and with a diameter(LAB1: radius) of 50
    
    ofDrawRectangle(ofGetWidth()/2, ypos, 100, 100);
}

