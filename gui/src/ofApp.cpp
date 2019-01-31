#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	baseGUI.load("assessmentGUI.png"); // Loads the 'assessmentGUI' file from the data folder
	titleFont.load("helvetica-neue-5-cufonfonts/HelveticaNeueBoldItalic.ttf", 60); // Loads the Helvetica font at size 60 for the title
	mainFont.load("helvetica-neue-5-cufonfonts/HelveticaBlkIt.ttf", 24); // Loads the Helvetica font at size 24 for the main bulk of the GUI
	tweetFont.load("helvetica-neue-5-cufonfonts/HelveticaBlkIt.ttf", 18); // Loads the Helvetica font at size 18 for the printed tweets
}

//--------------------------------------------------------------
void ofApp::draw(){
	baseGUI.draw(0, 0, 1024, 768); // Draws the background image onto the canvas
	ofSetColor(0, 0, 0); // Sets the color of the text to black - couldn't get working
	titleFont.drawString("Tweet Finder", 400, 60); // Draws the title text
	mainFont.drawString("Choose a topic on the left to view all recent tweets regarding that topic:", 400, 120); // Draws the text for a quick description of the app
	mainFont.drawString("Current Topic:", 50, 20); // Draws the current topic outliner
	mainFont.drawString("Paris", 50, 70); // Draws the current topic (for this demonstration, 'Paris' is used)
	mainFont.drawString("All", 50, 140); // From here, draws the text for each individual button option
	mainFont.drawString("Money", 50, 200);
	mainFont.drawString("Politics", 50, 260);
	mainFont.drawString("Paris", 50, 320);
	mainFont.drawString("DreamWorks", 50, 380);
	mainFont.drawString("Uber", 50, 440);
	mainFont.drawString("Trump", 50, 500);
	mainFont.drawString("Obama", 50, 560);
	mainFont.drawString("Dogs", 50, 620);
	mainFont.drawString("Christmas", 50, 680);
	mainFont.drawString("Total Count: - number of tweets -", 300, 200); // Draws the text that gives the number of tweets in the selection
	tweetFont.drawString("- list of all tweets -", 300, 300); // Draws the text of the selected tweets
}