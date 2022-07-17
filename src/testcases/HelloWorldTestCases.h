#pragma once

#include "testcommon/testmacros.h"

#if defined (_USER_WP_)
#include "datastructure/wp/WPhelloworld.h"
#elif defined(_USER_AK_) 
#include "datastructure/ak/AKhelloworld.h"
#elif defined(_USER_GB_)
#include "datastructure/gb/GBhelloworld.h"
#endif

namespace HelloWorld {

void HelloWorldTest()
{
	_USER_NS_::sayHello();
}

void HellowHelloWorldTest()
{
	_USER_NS_::sayHello();
	_USER_NS_::sayHello();
}

void HelloWordEchoTest(const std::string & strA)
{
	_USER_NS_::sayHelloEcho(strA);
}

}