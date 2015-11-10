#ifndef _CIPHERS_H_
#define _CIPHERS_H_
#include <string>

enum opType { encode, decode };

class Cipher {
public:
	// Default constructor
	Cipher();
	// Proper constructor
	Cipher(std::string input);
	// Destructor
	~Cipher();

	// Cipher types
	void ROT13();
	void Caeser(opType choiceCode);
	void Unique(opType choiceCode, int origCharShift);
	
	// Receive modified string
	std::string getOutput();

private:
	std::string heldText;
};



#endif //_CIPHERS_H_
