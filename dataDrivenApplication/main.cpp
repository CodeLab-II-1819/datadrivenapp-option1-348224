#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


int input;


int main() {

	cout << "Please select an option:" << endl;

	cout << "1/ Display number of tweets from sample." << endl;
	cout << "2/ Display number of tweets that mention money" << endl;
	cout << "3/ Display number of tweets that mention politics." << endl;
	cout << "4/ Display all tweets that mention 'Paris'." << endl;
	cout << "5/ Display all tweets that mention 'DreamWorks'." << endl;
	cout << "6/ Display all tweets that mention 'Uber'." << endl;
	cout << "7/ Display all tweets that mention 'Trump'." << endl;
	cout << "8/ Display all tweets that mention 'Obama'." << endl;
	cout << "9/ Display all tweets that mention 'Dogs'." << endl;
	cout << "10/ Display all tweets that mention 'Christmas'." << endl;

	cin >> input;

	int count = 0;
	string data;


	if (input == 1) {
		
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				count++;
			}
			cout << count << endl;
		}
		inFile.close();
	}
	else if (input == 2) {
		
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				if (data.find("money")<=data.length()) {
					count++;
					cout << count << endl;
				}
				inFile.close();
			}
			
		}
		
	}/*
	else if (input == 3) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				string politics;
				int politicsCount; // int count for first 3 statements
				if (politics.find("politics") == 0) {
					cout << "PLACEHOLDER" << endl;
				}
			}
		}
	}
	else if (input == 4) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				string paris;
				if (paris.find("Paris") == 0) {
					cout << "PLACEHOLDER" << endl; //"PLACEHOLDER" temporary until know how to fill
				}
			}
		}
	}
	else if (input == 5) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				string dream;
				if (dream.find("DreamWorks") == 0) {
					cout << "PLACEHOLDER" << endl;
				}
			}
		}
	}
	else if (input == 6) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				string uber;
				if (uber.find("Uber") == 0) {
					cout << "PLACEHOLDER" << endl;
				}
			}
		}
	}
	else if (input == 7) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				string trump;
				if (trump.find("Trump") == 0) {
					cout << "PLACEHOLDER" << endl;
				}
			}
		}
	}
	else if (input == 8) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				string obama;
				if (obama.find("Obama") == 0) {
					cout << "PLACEHOLDER" << endl;
				}
			}
		}
	}
	else if (input == 9) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				string dog;
				if (dog.find("dog") == 0) {
					cout << "PLACEHOLDER" << endl;
				}
			}
		}
	}
	else if (input == 10) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				string christmas;
				if (christmas.find("Christmas") == 0) {
					cout << "PLACEHOLDER" << endl;
				}
			}
		}
	}*/
}






/*
void selection();
void menu();
void countOverall(ifstream &inFile);
void countMoney(ifstream &inFile);
void countPolitics(ifstream &inFile);
void printParis(ifstream &inFile);
void printDreamWorks(ifstream &inFile);
void printUber(ifstream &inFile);
void printTrump(ifstream &inFile);
void printObama(ifstream &inFile);
void printDogs(ifstream &inFile);
void printChristmas(ifstream &inFile);
int keyPress;
*/


 /*
void countOverall() {

}

void countMoney() {

}

void countPolitics() {

}

void printParis() {

}

void printDreamWorks() {

}

void printUber() {

}

void printTrump() {

}

void printObama() {

}

void printDogs() {

}

void printChristmas() {

}
*/

