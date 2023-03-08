


string transformation(int demial){
    
string biniary = ""
    while(demial > 0)
    {
        int remainder = demial % conversion;
        biniary = biniary + (remainder * base);
        base = base* 10;
        demial = demial/conversion;
        
    }
}


int main(){
    string binary;
    string binary_second;
    std::cout <<"enter a number:";
    std::cin >> binary;
    int demial = biniary_to_decimal(binary);
    std::cout <<"enter a number:";
    std::cin >> biniary_second;
    int demial_second = biniary_to_decimal(biniary_second);
    
    int number = demial + demial_second
    std::cout <<"the number is " number;
}
}