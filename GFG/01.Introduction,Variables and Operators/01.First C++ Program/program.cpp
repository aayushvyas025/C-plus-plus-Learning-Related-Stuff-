#include<iostream>
//* This above #include was pre-processor directive it helps to import header file for our c++ program & iostream was header file that means "input output stream" which was used to process our code related to input and output operation.

using namespace std; 
//* this statement using namespace std; it create the segment or this whole c++ program as segment of code or sepearation of code into different logical group and we used c++ standard library implementation methods and keywords so if other library also because it avoids the collison and confusion for our c++ compiler and we used the method we want according to our needs. 

//* This int main function was entry point in our c++ program all the execution of our c++ code was start from this point only and as we know that c++ was statically type language so we have to give type before our function decalration so it was int that means it returning the int type 
int main() {
    //* Inside this curly braces all code we are writing related to this int main function only and lived upto or valid upto this curly braces only. 
    cout << "Aayush Vyas "; 
    //* This cout was object of costream it will help to give output or print anything on standard output  and "Aayush Vyas" was String 
    std::cout << "Hello World";

    // We can use namespace like that also.... 
    return 0; 
    //* Here we are returning the 0 as integer which indicate to operating system that our program was executed successfully if we return 1 than that indicate error in our execution of program. 
} 

//! One think keep in a mind that always end our c++ program statement with semicolon ";" it incidate the compiler end of statement 