//
//
//
//
//

#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str);

int main(void) {

	string inputword;

	while (true) {
		cout << "Enter a word and this program will count the letters: ";
		getline(cin, inputword);
		if (inputword == "Q") break;
		cout << endl << countCharacter(inputword) << endl;
	}



	cout << endl << countCharacter(inputword);

}


int countCharacter(string str) {

	int vowelCount = 0;
	int letterNumber = 0;

	for (int letterNum = 0;letterNumber < str.length(); letterNum) {
		letterNumber++;

	}

	return (letterNumber);

}