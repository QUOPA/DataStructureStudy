#include "GBhelloworld.h"

#include <iostream>

namespace gb {

void sayHello()
{
	std::cout << "Yeah datastructure!" << std::endl;
}

void sayHelloEcho(const std::string& strIn)
{
	std::cout << "Yeah datastructure - " << strIn << std::endl;
}

}