#include<iostream>
extern int number;
extern int conversion;
int biniary = 0;

void transformation(){
    int base = 1;
    while(number > 0)
    {
        int remainder = number % conversion;
        biniary = biniary + (remainder * base);
        base = base* 10;
        number = number/conversion;
        
    }
}