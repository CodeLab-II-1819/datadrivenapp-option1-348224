#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


int input;

/*
void data() {

	string data;
	ifstream inFile;
	inFile.open("sampleTweets.csv");
	int count = 0;
	if (inFile.good()) {
		while (!inFile.eof()) {
			getline(inFile, data);
		}
		inFile.close();
	}
*/


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

	if (input == 1) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				cout << data << endl;
			}
		}
	}
	else if (input == 2) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				cout << data << endl;
			}
		}
	}
	else if (input == 3) {
		string data;
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {
			while (!inFile.eof()) {
				getline(inFile, data);
				cout << data << endl;
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
				cout << data << endl;
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
				cout << data << endl;
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
				cout << data << endl;
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
				cout << data << endl;
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
				cout << data << endl;
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
				cout << data << endl;
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
				cout << data << endl;
			}
		}
	}
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
 void selection() {
	switch (keyPress) {
		case 0: countOverall();
			break;
		case 1: countMoney();
			break;
		case 2: countPolitics();
			break;
		case 3: printParis();
			break;
		case 4: printDreamWorks();
			break;
		case 5: printUber();
			break;
		case 6: printTrump();
			break;
		case 7: printObama();
			break;
		case 8: printDogs();
			break;
		case 9: printChristmas();
			break;
	}
}
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

