#include <iostream>
#include <string>
#include <cstring>
#include "ciphers.h"
#include "transmute.h"

enum GIVEHELP {
	none, cipher, transmute
};

void printHelp(GIVEHELP manipType);

int main(int argc, char* argv[]){
	// Initialize variables
	int length = 0;



	return 0;
}

void printHelp(GIVEHELP manipType){
	switch (manipType) {
		default:
		none:
			std::cout << "usage: cli-tools <operation> [...]\n"
				<< "Operations:\n" 
				<< '\t' << "cli-tools {-h | --help}\n"
				<< '\t' << "cli-tools {-V | --version}\n"
				<< '\t' << "cli-tools {-C | --cipher} [options] <input>\n"
				<< '\t' << "cli-tools {-T | --transmute} [options] <input>\n\n"
				<< "use 'cli-tools {-h --help}' with an operation"
					<< " for available options\n";
			break;
		cipher:
			std::cout << "usage: cli-tools {-C | --cipher} [options] <input>\n"
				<< "options:\n"
				<< "  " << "-r, --rot13";
			break;
		transmute:
			std::cout << "usage: cli-tools {-T | --transmute} [options] <input>\n"
				<< "options:\n"
				<< "  " << "-b, --wrap-box"
				<< "  " << "-r, --right-angle"
				<< "  " << "-g, --gradient";
			break;
	}
}