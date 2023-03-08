#include<iostream>
extern void transformation();
int number;
int conversion;
extern int biniary;
int main (){
    std::cout <<"enter a number:";
    std::cin >> number;
    std::cout<< "enter the base to convert to(can only do up to 9)";
    std::cin>> conversion;
    transformation();
    std::cout<<"the converted number is:" <<biniary << std::endl;
    return 0;
}