#include "Integer.h"

// Managing class for the Integer struct
class Integers {
public:
	Integers();
	~Integers();

private:
// Pointer to the list of Integers: ll 
	Integer * head;
	Integer * tail;
};
