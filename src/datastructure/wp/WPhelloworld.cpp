
#include "WPhelloworld.h"

#include <iostream>

namespace wp {

void sayHello()
{
	std::cout << "Hello datastructure!" << std::endl;
}

void sayHelloEcho(const std::string& strIn)
{
	std::cout << "Hello datastructure - " << strIn << std::endl;
}

}