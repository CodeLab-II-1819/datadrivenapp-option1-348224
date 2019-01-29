#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


int input;
char replay = 'y';


int main() {

	while (replay == 'y') {

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
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					count++;
				}
				inFile.close();
				cout << count << endl;
			}
		}
		else if (input == 2) {

			ifstream inFile;
			inFile.open("sampleTweets.csv");
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					if (data.find("money") <= data.length()) {
						count++;
					}
				}
				inFile.close();
				cout << count << endl;
			}
		}
		else if (input == 3) {

			ifstream inFile;
			inFile.open("sampleTweets.csv");
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					if (data.find("politics") <= data.length()) {
						count++;
					}
				}
				inFile.close();
				cout << count << endl;
			}
		}
		else if (input == 4) {

			ifstream inFile;
			inFile.open("sampleTweets.csv");
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					if (data.find("Paris") <= data.length()) {
						cout << data << endl;
					}
				}
				inFile.close();
			}
		}
		else if (input == 5) {

			ifstream inFile;
			inFile.open("sampleTweets.csv");
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					if (data.find("DreamWorks") <= data.length()) {
						cout << data << endl;
					}
				}
				inFile.close();
			}
		}
		else if (input == 6) {

			ifstream inFile;
			inFile.open("sampleTweets.csv");
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					if (data.find("Uber") <= data.length()) {
						cout << data << endl;
					}
				}
				inFile.close();
			}
		}
		else if (input == 7) {

			ifstream inFile;
			inFile.open("sampleTweets.csv");
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					if (data.find("Trump") <= data.length()) {
						cout << data << endl;
					}
				}
				inFile.close();
			}
		}
		else if (input == 8) {

			ifstream inFile;
			inFile.open("sampleTweets.csv");
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					if (data.find("Obama") <= data.length()) {
						cout << data << endl;
					}
				}
				inFile.close();
			}
		}
		else if (input == 9) {

			ifstream inFile;
			inFile.open("sampleTweets.csv");
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					if (data.find("dog") <= data.length()) {
						cout << data << endl;
					}
				}
				inFile.close();
			}
		}
		else if (input == 10) {

			ifstream inFile;
			inFile.open("sampleTweets.csv");
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					if (data.find("Christmas") <= data.length()) {
						cout << data << endl;
					}
				}
				inFile.close();
			}
		}

		cout << "Do you want to continue? (Y/N)" << endl;
		cin >> replay;

	}

	system("pause");
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

