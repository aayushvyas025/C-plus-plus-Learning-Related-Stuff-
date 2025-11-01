#include <bits/stdc++.h>

int main() {
    //* Switch Statement 
    // A switch statement is also a type of conditional statement. It compares a variable’s value or value and runs the code that matches one of its cases. 
    //? Syntax of Switch Statement 
    /*
      switch(value) {
       case One : 
         intruction of code to execute according to that. 
         break;  We use Break after all our case because to come out of switch statement otherwise it execute all the cases. 

        case Two : 
        intruction of code to execute according to that . 
        break; 

        default: 
        This defualt case should be run if any cases was not matches. 
      }
    */
//* Let see example of switch case 
 int inputDayNumber; 
 std::cout << "Enter Day Number here" << '\n'; 
 std::cin >> inputDayNumber; 

 switch(inputDayNumber) {
    case 1:
    std::cout << "Today was Monday" << '\n';
    break; 
    
    case 2: 
    std::cout << "Today was Tuesday" << '\n'; 
    break; 

    case 3:
    std::cout << "Today was Wednesday" << '\n';
    break; 

    case 4:
    std::cout << "Today was Thursday" << '\n'; 
    break; 

    case 5:
    std::cout << "Today was Friday" << '\n'; 
    break;

    case 6:
    std::cout << "Today was Saturday" << '\n';
    break; 

    case 7:
    std::cout << "Today was SUnday" << '\n';
    break; 

    default :
    std::cout << "Please enter valid number between 1 - 7"; 
 }
  
//* Advantage was here better clean code and code readability as compare to if-else, else-if or nested if  conditional statement. 


    return 0; 
}