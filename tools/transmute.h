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
	// Checker
	bool validSize();

	// Transmutation types
	void RightAngle(); // "r"
	void WrapBox(); // "w"
	void UpperGradient(); // "g"
	
	// Getters
	void printOut() const { std::cout << heldText << '\n'; }

private:
	std::string heldText;
};





#endif //_TRANSMUTE_H_

/* An example of uppergradient

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