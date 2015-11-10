#include <iostream>
#include <string>
#include "ciphers.h"

int upperMin = 65;
int upperMax = 90;
int lowerMin = 97;
int lowerMax = 122;

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
}

void Cipher::Caeser(opType choiceCode){
	// Encoding
	switch (choiceCode) {
		case encode:
		break;


		case decode:
		break;
	}
	for (int i = 0; i < heldText.size(); i++){

	}
}

void Cipher::Unique(opType choiceCode, int origCharShift){
	// does nothing yet
}

std::string Cipher::getOutput(){
	return heldText;
}
