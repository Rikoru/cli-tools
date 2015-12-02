#ifndef _CIPHERS_H_
#define _CIPHERS_H_
#include <string>
#include <iostream>

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
	void EncodeCaeser(int charShift);
	void DecodeCaeser(int charShift);

	// Getters
	void printOut() const { std::cout << heldText << '\n'; }

private:
	std::string heldText;
};



#endif //_CIPHERS_H_
