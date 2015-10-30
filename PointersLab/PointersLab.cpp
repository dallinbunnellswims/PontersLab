// PointersLab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	// declare a c-string to reverse
	char myString[] = "Hello world!";

	// call the reverser function
	reverser(myString);

	// output the result
	cout << myString << endl;

	system("PAUSE");
	return 0;
}
