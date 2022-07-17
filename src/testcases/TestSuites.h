#pragma once

#include "testcommon/testmacros.h"
#include "HelloWorldTestCases.h"

namespace HelloWorld{

void TestSuite (const std::string & strIN)
{
	REGISTERTESTCASE(HelloWorldTest)
	REGISTERTESTCASE(HellowHelloWorldTest)
	REGISTERTESTCASE(HelloWordEchoTest, strIN)
}

}