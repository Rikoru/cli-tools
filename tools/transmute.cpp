#include <iostream>
#include <string>
#include "transmute.h"

Transmute::Transmute(){
	// hello
}

Transmute::Transmute(std::string input){
	heldText = input;
}

Transmute::~Transmute(){
	// Currently nothing is dynamic, but at some point it might be
}

void Transmute::rightAngle(){ // Needs a new name
	if (heldText.empty()) return;

	if (heldText.size() == 1){ 
		std::cout << heldText << '\n';
		return;
	}

	// Upper row
	for (int i = 0; i < heldText.size(); i++){
		std::cout << heldText[i] << ' ';
	}
	// Vertical column of text
	for (int i = 1; i < heldText.size(); i++){
		std::cout << heldText[i] << '\n';
	}
} 

void Transmute::wrapBox(){

}

void Transmute::upperGradient(){

}

void Transmute::lowerGradient(){

}

void Transmute::asciiMagnify(int lineHeight){

}