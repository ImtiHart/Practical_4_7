#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Create a union called "DataValue" with members "integer" (int) and "floatingPoint" (float).
Write a program to read user input and determine whether it represents an integer or a
floating-point number using the union.*/

union DataValue /*Initialize Union*/
{
    int integer;
    float floatingpoint;
};
void main(){

    union DataValue check;
    printf("Choose a number: "); /*Assign a value to varibale*/
    scanf("%f", &check.floatingpoint);
    if (ceil(check.floatingpoint) == check.floatingpoint)/*Identify correct situation*/
    {
        printf("The number is a integer value");
    }
    else
    {
        printf("The number is a floating point value");
    }
    return 0;
}


