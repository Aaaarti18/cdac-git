// Write a Program to read a string and find out the length of that string by writing User defined function


#include <stdio.h>
int main()
{
    char Str[1000];
    int mystrlen(Str);
  
    printf("Enter the String: ");
    scanf("%s", Str);
  
    printf("Length of Str is %ld", mystrlen(Str));
  
    return 0;
}