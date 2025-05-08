#include <iostream>
#include <fstream>
using namespace std;

char encryptionKey(char ch) {
	
	if(ch == '|') {
		ch = ' ';
		return ch;
	}
	if(ch == '}') {
		ch = '!';
		return ch;
	} 
	if(ch == '~') {
		ch = '"';
		return ch;
	}
	else {
		ch = ch + 3;
	}
	
	return ch;
}

char decryptionKey(char ch) {
	
	if(ch == ' ') {
		ch = '|';
		return ch;
	}
	if(ch == '!') {
		ch = '}';
		return ch;
	} 
	if(ch == '"') {
		ch = '~';
		return ch;
	}
	else {
		ch = ch - 3;
	}
	
	return ch;
}


int main(){
	
	ifstream inFile;
	ofstream outFile;
	
	int option = 0;
	
	cout <<"Welcome to the Caesar Cipher Program!\nIt's a pleasure to assist you.\n";
	cout <<"\nPlease select an option below:\n  1 - Encrypt a message\n  2 - Decrypt a message\n  3 - Exit Program\n\nYour choice: ";
	cin >> option;
	
	while (option != 1 && option != 2 && option != 3) {
        cout << "Invalid option. Please enter 1 to Encrypt, 2 to Decrypt or 3 to Exit: ";
        cin >> option;
    }
	
	if(option == 1) {
		
	// Caesar Cipher Encryption Program
	// This program encrypts various text files by shifting the characters to 3 ASCII places.
		
		inFile.open("Message.txt");
		if(!inFile.is_open()) {
			cout << "Error opening Input File: Message.txt! Aborting..." << endl;
			return 0;
		}
		
		outFile.open("Encrypted.txt");
		if(!outFile.is_open()) {
			cout << "Error opening Output File: Encrypted.txt! Aborting..." << endl;
			return 1;
		}
		
		int size;
		char ch;
		inFile >> size;
		inFile.get(ch);
		int i = 0;
		char *character = new char[size];
		
		while(inFile.get(ch)) {
			character[i] = ch;
			i++;
		}
		
		outFile << size << endl;
		for(i = 0; i < size; i++) {
			character[i] = encryptionKey(character[i]);
			outFile << character[i];
		}
		
		delete[] character;
	
	}

	if (option == 2) {
		
	// Caesar Cipher Decryption Program
	// This program decrypts various text files by shifting the characters to 3 ASCII places.
		
		inFile.open("Encrypted.txt");
		if(!inFile.is_open()) {
			cout << "Error opening Input File: Encrypted.txt! Aborting..." << endl;
			return 2;
		}
		
		outFile.open("Message.txt");
		if(!outFile.is_open()) {
			cout << "Error opening Output File: Message.txt! Aborting..." << endl;
			return 3;
		}
		
		int size;
		char ch;
		inFile >> size;
		inFile.get(ch);
		int i = 0;
		char *character = new char[size];
		
		while(inFile.get(ch)) {
			character[i] = ch;
			i++;
		}
		
		outFile << size << endl;
		for(i = 0; i < size; i++) {
			character[i] = decryptionKey(character[i]);
			outFile << character[i];
		}
		
		delete[] character;
	
	}
	
 	if(option == 3) {
 		return 0;
	 }
	
	cout << "\nThank you for using the Caesar Cipher Program. Goodbye!\n";
	
	inFile.close();
	outFile.close();
	
	return 0;
}

