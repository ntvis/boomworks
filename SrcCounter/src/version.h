#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "30";
	static const char MONTH[] = "10";
	static const char YEAR[] = "2008";
	static const double UBUNTU_VERSION_STYLE = 8.10;
	
	//Software Status
	static const char STATUS[] = "Release";
	static const char STATUS_SHORT[] = "r";
	
	//Standard Version Type
	static const long MAJOR = 2;
	static const long MINOR = 0;
	static const long BUILD = 9;
	static const long REVISION = 54;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 170;
	#define RC_FILEVERSION 2,0,9,54
	#define RC_FILEVERSION_STRING "2, 0, 9, 54\0"
	static const char FULLVERSION_STRING[] = "2.0.9.54";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 9;
	

}
#endif //VERSION_H