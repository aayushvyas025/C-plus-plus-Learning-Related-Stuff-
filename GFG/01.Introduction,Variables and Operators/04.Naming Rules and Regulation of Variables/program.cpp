#include <iostream>
#include <strings.h>
using namespace std; 


int main() {
    //* Let see the variables rues and regulation one by one 
    //* 1st. Variables naming always start with alphabets or character otherwise it give error to us 
    int number = 25; // Correct naming 
    // int 01number = 25;  //! Incorrect naming it give error to us we can't use digits 
    //* 2nd. We use digits also but not in starting in between or last 
    int number01 = 50; 
    int aayush1vyas = 04; 
    //* 3rd. We don't give spaces between our variable names otherwise it give error to us. 
    int firstNumber = 01; 
    // int second Number = 02;  //! This was incorret we don't have to give space between variable. 
    //* 4th. We used only underscore _ as special character otherwise we used other special character it give error to us. 
    char first_character_name = 'A'; 
    // If we want to separate our variable name than we used underscore special character only... 
    // int my#Number = 25;  //! It give error because we can use only one special character which was underscore 
    //* 5th. We can't use keywords which was reserved words to create our variable  other wise it give error to us... 
    // int for = 25;  //! Incorrect keyword can't use it 
    // int else = 35;  //! Incorrect keyword can't use it 
    //* 6th. In c++ program was case sensitive it means lowercase and uppercase have different meaning 
    int numbers = 25; 
    int NUMBERS = 50; 
    cout << numbers << endl; 
    cout << NUMBERS << endl; 
    //* 7th. Always create variable name meaning full so we understand why we create variable and single character variable only use in updating variable only. 
    string myName = "Aayush Vyas"; 
    cout << myName << '\n';  

    //* In C++ we are using two convention 
    // Camel Case 
    string fullName = "Aayush Vyas"; 
    // Snake Case 
    int roll_number = 02; 
    // We create Constant Variable also in our program we create in Uppercase and separated by underscore like this AGE, MAX_AGE, LIMIT, PI etc. 
    return 0; 
}