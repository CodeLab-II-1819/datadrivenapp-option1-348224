#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	baseGUI.load("assessmentGUI.png");
	titleFont.load("helvetica-neue-5-cufonfonts/HelveticaNeueBoldItalic.ttf", 60);
	mainFont.load("helvetica-neue-5-cufonfonts/HelveticaBlkIt.ttf", 24);
	tweetFont.load("helvetica-neue-5-cufonfonts/HelveticaBlkIt.ttf", 18);
}

//--------------------------------------------------------------
void ofApp::draw(){
	baseGUI.draw(1024, 768, 0, 0);
	titleFont.drawString("Tweet Finder", 600, 60);
	mainFont.drawString("Choose a topic on the left to view all recent tweets regarding that topic:", 600, 120);
	mainFont.drawString("Current Topic:", 100, 20);
	mainFont.drawString("Paris", 100, 70);
	mainFont.drawString("All", 100, 140);
	mainFont.drawString("Money", 100, 200);
	mainFont.drawString("Politics", 100, 260);
	mainFont.drawString("Paris", 100, 320);
	mainFont.drawString("DreamWorks", 100, 380);
	mainFont.drawString("Uber", 100, 440);
	mainFont.drawString("Trump", 100, 500);
	mainFont.drawString("Obama", 100, 560);
	mainFont.drawString("Dogs", 100, 620);
	mainFont.drawString("Christmas", 100, 680);
	mainFont.drawString("Total Count: - number of tweets -", 400, 200);
	tweetFont.drawString("- list of all tweets -", 400, 200);

}