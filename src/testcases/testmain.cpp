#include "testcommon/testmacros.h"
#include "TestSuites.h"

int main()
{
	//REGISTERTESTSUITE_NOARG(HelloWorld)
	REGISTERTESTSUITE(HelloWorld, "asdasdfasd")

	char tmpbuff[256];
	std::cin.getline(tmpbuff, 256);

	return 0;
}