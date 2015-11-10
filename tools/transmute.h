#ifndef _TRANSMUTE_H_
#define _TRANSMUTE_H_
#include <string>

class Transmute {
public:
	// Default Constructor
	Transmute();
	// Proper Constructor
	Transmute(std::string input);
	// Destructor
	~Transmute();

	// Transmutation types
	void rightAngle(); // Needs a new name
	void wrapBox();
	void upperGradient();
	void lowerGradient();
	void asciiMagnify(int lineHeight);

private:
	std::string heldText;
};





#endif //_TRANSMUTE_H_

/*

A E S T H E T I C
E S T H E T I C
S T H E T I C
T H E T I C
H E T I C
E T I C
T I C
I C
C

*/