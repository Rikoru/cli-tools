/*
Toggleable blocks are used throughout the code
they can be disabled by removing a trailing slash
(so '//*' will become '/*')
Add the slash back to enable the block

*/
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include "ciphers.h"
#include "transmute.h"

const std::string verNum = "2015.12.05";

enum TYPE_ENUM {
	noneTP, cipher, transmute
};

enum OPTYPE {
	/* Default */ noneOP,
	/* Cipher */ rot13, caeser,
	/* Transmute */ wrap_box, right_angle, gradient,
};

int IsInt(char* input, int& holder);
void PrintHelp();

int main(int argc, char* argv[]){
	// Initialize variables
	// Argument reading variable in arrays
	int j = 0;
	// Adjustment modifier for applicable types
	int offset = 0;
	// Default mode for manipulators/creators
	bool defaultMode = true;
	// Flag to check next argument
	bool nextCheck = false;
	// Selectors for type of operation
	TYPE_ENUM typeChoice = noneTP;
	OPTYPE opChoice = noneOP;
	// Declare default string and assign value
	std::string held;
	held = "TEST";

	// Print the default help if nothing specified
	if (argc <= 1) PrintHelp();
	else {
		for (int i = 0; i < argc; i++){
			// Check for flags
			if (argv[i][0] == '-'){

				// Prints current version of cli-tools
				if (argv[i][1] == 'v' || (std::string(argv[i]) == "--version")){
					std::cout << "cli-tools version " << verNum << "\n";
					return 0;
				}

				// Prints the help
				if (argv[i][1] == 'h' || std::string(argv[i]) == "--help"){
					PrintHelp();
					return 0;
				}

				// Checks for long-form input
				if (argv[i][1] == '-'){
					if (std::string(argv[i]) == "--transmute"){
						typeChoice = transmute;
					}
					continue;
				}

				//===============================//
				/* Toggleable block

				// Set operation to cipher
				if (argv[i][1] == 'C' || std::string(argv[i]) == "--cipher"){
					typeChoice = cipher;
				}

				// Continue checking for cipher-related args
				if (typeChoice == cipher){
					while (argv[i][j] != '\0'){
						if (argv[i][j] == 'd' || std::string(argv[i]) == "--decode"){
							defaultMode = false;
						}
						if (argv[i][j] == 'r') opChoice = rot13;
						if (argv[i][j] == 'c') opChoice = caeser;
						// Check if next argument is an integer
						if (opChoice != rot13 && offset == 0){
							IsInt(argv[i+1], offset);
							//std::cout << offset << '\n';
						}
						j++;
					}

					// Other relevant choices
				}

				//*/
				//===============================//
				//* Toggleable block

				// Set operation to transmute
				if (argv[i][1] == 'T'){
					typeChoice = transmute;
				}

				// Continue checking for transmute-related args
				if (typeChoice == transmute){
					while (argv[i][j] != '\0'){
						if (argv[i][j] == 'l' || std::string(argv[i]) == "--transmute"){
							defaultMode = false;
						}
						if (argv[i][j] == 'w') opChoice = wrap_box;
						if (argv[i][j] == 'r') opChoice = right_angle;
						if (argv[i][j] == 'g') opChoice = gradient;
						// Check if next argument is an integer
						/* Toggleable block, numbers might be useful at some point
						if (offset == 0){
							IsInt(argv[i+1], offset);
							// Debugging related
							//std::cout << offset << '\n';
						}
						//*/
						
						//Increment mini count
						j++;
					}

					// Other relevant choices
				}
				//*/
			}
			// Check for text input in last argument
			else if (i == argc - 1) held = (argv[i]);
		}

		/*
		if (typeChoice == cipher){
			Cipher cip(held);
			if (opChoice == rot13){
				cip.ROT13();
			}
			else if (opChoice == caeser){
				if (defaultMode) cip.EncodeCaeser(offset);
				//else cip.DecodeCaeser(offset);
			}
			//cip.printOut();
		}
		else */ if (typeChoice == transmute){
			Transmute tip(held);
			if (opChoice == right_angle) tip.RightAngle();
			else if (opChoice == wrap_box) tip.WrapBox();
			if (opChoice == gradient) tip.UpperGradient();

		}

		/* Debugging helper (toggleable - just add a slash to the start)
		std::cout << "You chose: " << typeChoice << " and "
			<< opChoice << " with " << held << '\n';
		//*/
	}

	return 0;
}

// Checks if input is an integer
int IsInt(char* input, int& holder){
	int x = 0;
	std::istringstream testing(input);
	if (!(testing >> x)) return 0;
	else holder = x;
	return x;
}

void PrintHelp(){
	std::cout << "usage: cli-tools <operation> [...]\n"
		<< "Operations:\n"
		<< "  " << "cli-tools {-h | --help}\n"
		<< "  " << "cli-tools {-v | --version}\n"
		//<< "  " << "cli-tools {-C | --cipher} [options] <input>\n"
		<< "  " << "cli-tools {-T | --transmute} [options] <input>\n\n"
		<< "Operations and subflags can be used together"
			<< " (i.e. -Tr).\n"
		<< "Single quotes (ie.  \' ) can be used to surround phrases.\n"
	/* Toggleable when the features work
	<< "\nCipher\n"
	<< "usage: cli-tools {-C | --cipher} [options] <input>\n"
		<< "options:\n"
		<< "  " << "-d, --decode" << " = "
			<< "Sets mode to decode, cannot be combined with encode.\n"

		<< "  " << "-r" << " = "
			<< "Shifts letters 13 characters through alphabet.\n"
			<< "    " << "Does not require encode/decode flag.\n"

		<< "  " << "-c #" << " = "
			<< "Shifts letters in input over # letters.\n"
			<< "    " << "Assumes encode if no mode specified.\n"
	//*/
	<< "\nTransmute\n"
	<< "usage: cli-tools {-T | --transmute} [options] <input>\n"
		<< "options:\n"

		<< "  " << "-l, --lower" << " = "
			<< "Sets more to lower for applicable transmutations.\n"

		<< "  " << "-g" << " = "
			<< "Creates a gradient of the given input.\n"

		<< "  " << "-w" << " = "
			<< "Creates a wrapped box of the given input.\n"

		<< "  " << "-r" << " = "
			<< "Creates a left-ended right-angle of the input.\n";

}
