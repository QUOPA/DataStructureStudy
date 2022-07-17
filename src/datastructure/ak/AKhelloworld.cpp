#include "AKhelloworld.h"

#include <iostream>

namespace ak {

void sayHello()
{
	std::cout << "Good datastructure!" << std::endl;
}

void sayHelloEcho(const std::string& strIn)
{
	std::cout << "Good datastructure - " << strIn << std::endl;
}

}