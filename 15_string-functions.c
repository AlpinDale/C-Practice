#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Alpin";
    char string2[] = "Sama";

    strlwr(string1);                     // converts to lowercase
    strupr(string1);                     // converts to uppercase
    strcat(string1, string2);            // concatenates string2 to the end of string1
    strncat(string1, string2, 1);        // concatenates 1 character from string2 to the end of string1
    strcpy(string1, string2);            // copy string2 to string1
    strncpy(string1, string2, 2);        // copy 2 characers from string2 to string1
    strset(string1, '?');                // sets all characters of string1 to the given char
    strnset(string1, '?', 1);            // sets 1 character of string1 to the given char
    strrev(string1);                     // reverses the string

    int result = strlen(string1);           // returns string length as integer
    int result = strcmp(string1, string2);  // string compare all chars, return 0 if match
    int result = strncmp(string1, string2, 1); // string compare 1 character
    int result = strcmpi(string1, string2);   // string compare all (ignore case sens)
    int result = strnicmp(string1, string2, 1);  // string compare 1 character (ignore case)

    printf("%d", result);
}