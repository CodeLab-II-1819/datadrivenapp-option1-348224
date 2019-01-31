#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup(); // Initialises the 'setup' function
		void draw(); // Initialises the 'draw' function

		ofImage baseGUI; // Initialises the use of an image found in the 'bin/data' folder
		ofTrueTypeFont titleFont; // Initialises the use of a font present in the 'bin/data' folder; two more are present to allow for differences in text
		ofTrueTypeFont mainFont;
		ofTrueTypeFont tweetFont;
};
