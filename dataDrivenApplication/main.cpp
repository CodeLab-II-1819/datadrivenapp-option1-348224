#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


int input; // Initialises the users input number to select an option
char replay = 'y'; // Initialises the condition for the while loop to remain in effect


int main() {

	while (replay == 'y') { // Opening of the while loop that keeps the program open until replay != y

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

		cin >> input; // User inputs their selected integer

		int count = 0; // Initialises the counter used to count the number of relevant tweets
		string data; // Initialises the string that is used to search for keywords


		if (input == 1) {

			ifstream inFile; // Initialises the reading of the file
			inFile.open("sampleTweets.csv"); // Opens the file that needs to be searched 
			cout << "Reading file..." << endl;
			if (inFile.good()) { // Determines if the file opens
				while (!inFile.eof()) { // Loops the process if the end of the file hasn't been reached
					getline(inFile, data); // Reads the line in accordance to the data given (in this case, every line counts)
					count++; // Increases the counter by one for every line of data
				}
				inFile.close(); // Closes the file
				cout << count << endl; // Prints the total number of tweets, as per the condition
			}
		}
		else if (input == 2) {

			ifstream inFile;
			inFile.open("sampleTweets.csv");
			cout << "Reading file..." << endl;
			if (inFile.good()) {
				while (!inFile.eof()) {
					getline(inFile, data);
					if (data.find("money") <= data.length()) { // If statement tells the program to only look for tweets mentioning money using the data.find() string, rather than every line
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
						cout << data << endl; // From here, instead of printing the total count of tweets, the tweets themselves are printed by simply showing the data instead
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
		cin >> replay; // If the user enters a character other than 'y', the program closes

	}

	system("pause"); // Pauses the system so the program doesn't run then immediately finish
}
