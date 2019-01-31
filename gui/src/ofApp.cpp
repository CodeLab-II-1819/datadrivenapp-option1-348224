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
	baseGUI.draw(0, 0, 1024, 768);
	ofSetColor(0, 0, 0);
	titleFont.drawString("Tweet Finder", 400, 60);
	mainFont.drawString("Choose a topic on the left to view all recent tweets regarding that topic:", 400, 120);
	mainFont.drawString("Current Topic:", 50, 20);
	mainFont.drawString("Paris", 50, 70);
	mainFont.drawString("All", 50, 140);
	mainFont.drawString("Money", 50, 200);
	mainFont.drawString("Politics", 50, 260);
	mainFont.drawString("Paris", 50, 320);
	mainFont.drawString("DreamWorks", 50, 380);
	mainFont.drawString("Uber", 50, 440);
	mainFont.drawString("Trump", 50, 500);
	mainFont.drawString("Obama", 50, 560);
	mainFont.drawString("Dogs", 50, 620);
	mainFont.drawString("Christmas", 50, 680);
	mainFont.drawString("Total Count: - number of tweets -", 300, 200);
	tweetFont.drawString("- list of all tweets -", 300, 300);
}