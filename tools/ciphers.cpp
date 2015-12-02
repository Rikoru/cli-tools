#include <iostream>
#include <string>
#include <cctype>
#include "ciphers.h"

char upperMin = 'A';
char upperMax = 'Z';
char lowerMin = 'a';
char lowerMax = 'z';

Cipher::Cipher(){
	// hello
}

Cipher::Cipher(std::string input){
	heldText = input;
}

Cipher::~Cipher(){
	// Currently nothing is dynamic, but at some point it might be
}

void Cipher::ROT13(){
	for (int i = 0; i < heldText.size(); i++){
		// Capital Letters
		if (heldText[i] >= upperMin && heldText[i] <= upperMax){
			heldText[i] = (heldText[i] + 13) % upperMax;
		}

		// Lowercase letters
		if (heldText[i] >= lowerMin && heldText[i] <= lowerMax){
			heldText[i] = (heldText[i] + 13) % lowerMax;
		}
	}
	std::cout << heldText << '\n';
}

void Cipher::EncodeCaeser(int charShift){
	// Prevent overly large
	int shift = charShift % 26;
	// Iterate through input
	for (int i = 0; i < heldText.size(); i++){
		if (charShift == 0);
		else if (isalpha(heldText[i])){
			// Check lowercase letters being over 'z'
			if (heldText[i] >= lowerMin && heldText[i] <= lowerMax){
				if ((heldText[i] += shift) > lowerMax){
					heldText[i] -= 26;
				}
			} 
			// Check uppercase letters being over 'Z'
			else if (heldText[i] >= upperMin && heldText[i] <= upperMax){
				if ((heldText[i] += shift) > upperMax){
					heldText[i] -= 26;
				}
			}
		}
	}
	printOut();
}
