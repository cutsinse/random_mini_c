//This program will get an input and convert the ascii characters to their representative numbers. 
#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    string name = get_string("Name: ");
    printf("Output:\n");

//strlen requires string.h and uses the number of characters in a given string. 
    for (int i = 0; i < strlen(name); i++)
    {
        printf("%i", (int) name[i]);
        // this will take each character in "name" and then typecast or convert it into  an int
    }
    printf("\n");
}
