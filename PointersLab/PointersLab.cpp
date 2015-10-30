// PointersLab.cpp : Defines the entry point for the console application.
//
/*
Using a loop, determine the size of the string by counting characters until you encounter the null terminating character at the end of the string.
Establish a pointer that points to the beginning character of the string.
Establish a pointer that points to the last character in the string, this is the character just before the null terminating character.
Using the pointers, swap the first character in the string and the last character in the string.
Move the pointers so that the first pointer points to the 2nd character in the string and the second pointer points to the next to last character in the string. Swap these two characters.
Repeat this process until all of the characters have been swapped. The string should now be reversed. Add this driver code to your program:
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void reverser(char *pointer1)
{
	char * first_char = pointer1;
	char * last_char = pointer1 + strlen(pointer1);
	
	while (first_char < last_char)
	{
		--last_char;
		char temp_char = *first_char;
		*first_char = *last_char;
		*last_char = temp_char;
		++first_char;

	}

}

int main()
{
	// declare a c-string to reverse
	char myString[] = "Hello world!";

	//output the original
	cout << "The original string is " << myString << endl;
	// call the reverser function
	cout << "Now i will reverse the string." << endl;
	reverser(myString);

	// output the result
	cout << "the new string is " << myString << endl;
	

	system("PAUSE");
	return 0;
}

