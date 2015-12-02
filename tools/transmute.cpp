#include <iostream>
#include <string>
#include "transmute.h"

Transmute::Transmute(){
	heldText = "TEST";
}

Transmute::Transmute(std::string input){
	heldText = input;
}

Transmute::~Transmute(){
	// Currently nothing is dynamic, but at some point it might be
}

// Check if there's any text to work with
bool Transmute::validSize(){
	if (heldText.size() <= 1){
		printOut();
		return false;
	}
	return true;
}

void Transmute::RightAngle(){ 
	if (!validSize()) return;

	// Upper row
	for (int i = 0; i < heldText.size(); i++){
		std::cout << heldText[i] << ' ';
	}
	std::cout << '\n';
	// Vertical column of text
	for (int i = 1; i < heldText.size(); i++){
		std::cout << heldText[i] << '\n';
	}
} 

void Transmute::WrapBox(){
	if (!validSize()) return;

	int sized = heldText.size();

	for (int i = 0; i < sized; i++){
		for (int j = 0; j < sized; j++){
			std::cout << heldText[(i + j) % sized] << ' ';
		}
		std::cout << '\n';
	}
}

void Transmute::UpperGradient(){
	if (!validSize()) return;

	int sized = heldText.size();

	for (int i = 0; i < sized; i++){
		for (int j = i; j < sized; j++){
			std::cout << heldText[j] << ' ';
		}
		std::cout << '\n';
	}

}
