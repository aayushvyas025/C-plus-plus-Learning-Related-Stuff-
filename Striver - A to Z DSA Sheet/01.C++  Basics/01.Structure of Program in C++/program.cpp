#include <iostream>
// This above was importing header file from c++ with the help of pre-processor directive "#include" which help to import or add headers file in our c++ program for processing our code. 
// iostream: this iostream was header file related to input and output stream whatever the input and output we want to take was taken with the including of this library according to c++ standard because it contain all the defination and decelarations of the methods are inside this library so we have to add it in our c++ program  

using namespace std; 
// This namespace was create the seperate segment of code into different logical group and in this we are using std which was standard implementation of c++ all the methods, keywords etc are c++ standardize instead of using manually or inline std:: namespace 

int main() { 
   // we are using cout object from iostream header file to do output anything or print something 
//* std::cout << "Aayush Vyas " << '\n' << "How are your C++ Learning was going on !!!" << std::endl; 
cout << "Aayush Vyas" << '\n' << "How are your C++ Learning was going on !!!" << endl; 
  // This "\n" forward-slash character n was called newline character which help to terminate the present line and start execution from new line. 

//*    std::cout << "Hello World" << std::endl; 
  cout << "Hello World" << endl; 
// This endl was also used to terminate the present line and start execution of code from new line. 

  // So here we use std namespace so this cout was feature of standardize implmenetation of c++ methods and keywords
  
    return 0; 
    // This returning 0 indicate to the operating system that our program was executed successfully without any error, if error was occur than we are returning 1 so it indicate operating system that program was break and crash  

    // ";" Always use semi-colon to terminate the present line in c++ otherwise it give error at the time of compilation and c++ ignore the wide spaces and line so that's why we are using new line character sequence or new line character or endl method but most of developer are using new line character because it was faster than endl it flush out the buffer of output 
} 

// This int main was the function and it was very important function in our c++ which help to execute our c++ program so we consider it main entry point of our c++ program to execute and run our code. 