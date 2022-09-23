#include <stdio.h>

#include <stdlib.h>

#include <string.h>



/**

* _strcat -> this is a function strcat

* @dest: first param

* @src: second param

* Return: a string

*/

char *_strcat(char *dest, char *src)

{

	strcat(*dest, *src);

	return (dest);

}



int main()

{     

	_strcat("Hello", "World");

}

