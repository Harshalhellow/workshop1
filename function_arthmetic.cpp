#include <iostream>
#include <cmath>
#include <string>
extern string biniary;
extern string biniary_second;

int biniary_to_decimal(){
    int demial = 0;
    int power = 0;
    for (int i = biniary.length() - 1; i >=0; i--){
        if (biniary[i] == "1"){
            demial = demial + pow(2,power);
        }
        power++;
    }
    return demial
}

 
 int biniary_to_decimal_second(){
    int demial = 0;
    int power = 0;
    for (int i = biniary_second.length() - 1; i >=0; i--){
        if (biniary[i] == "1"){
            demial = demial + pow(2,power);
        }
        power++;
    }
    return demial
}


number  = biniary_to_decimal_second +biniary_to_decimal

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
 