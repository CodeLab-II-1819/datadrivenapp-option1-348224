#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void draw();

		ofImage baseGUI;
		ofTrueTypeFont titleFont;
		ofTrueTypeFont mainFont;
		ofTrueTypeFont tweetFont;
};
