#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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


int main() {

	cout << "Please select an option:" << endl;
	break;

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

}

/*int main() {
	
	string data;

	ifstream inFile;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		while (!inFile.eof()) {
			getline(inFile, data);
			cout << data << endl;
		}
		inFile.close();
	}
	return 0;
}*/