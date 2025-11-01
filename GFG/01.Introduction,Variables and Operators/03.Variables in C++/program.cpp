#include <iostream>


int main() { 
    //* Variables in C++ 
    // Variable was the empty container to store our data. So, variable will give identifier name to our data memory in our program main memory and with the help of name we can access it or modifiy the data of that memory address. 
    // As we know c++ was statically type language so we have to define type of variable first 
    //? Let see example of variable 
    int number;  //! When we don't assign the value than that variable known as Declaration of variable 
    // let's print number variable to check output 
    std::cout << "Value of Declare Variable " << number << '\n'; 
    //* Output was 4201035 which was random value called as Garbage Value.  
    int numberOne  = 25; //! When we assign the value than our variable know as intialization of variable 
    std::cout << "Value of Initialize Variable " << numberOne << std::endl; 
    
    int firstNumber  = 5 ; 
    std::cout << firstNumber << std::endl; 
    // let's re-assign or modify the value of variable 
    firstNumber = 10; 
    std::cout << firstNumber << '\n'; 

}