#include<bits/stdc++.h>
using namespace std; 

//* Probelm One : 
/** 
 * School has following rules for grading system : 
 * a. Below 25 - F 
 * b. 25 to 44 - E 
 * c. 45 to 49 - D 
 * d. 50 to 59 - C
 * e. 60 to 79 - B
 * f. 80 to 100 - A 
 * Ask user to input marks and print the corresponding grade. 
 */
int main() {
    int userMark; 
    cout << "Enter your Mark" << '\n';
    cin >> userMark; 
    //* Approach 1st 
   /* if(userMark < 25) {
        cout << "F Grade" << '\n'; 
    }else if(userMark >= 25 && userMark <=44 ) {
        cout << "E Grade" << "\n"; 
    }else if(userMark >= 45 && userMark <= 49) {
        cout << "D Grade" << "\n";
    }else if(userMark >= 50 && userMark <=59) {
        cout << "C Grade" << "\n";
    }else if(userMark >= 60 && userMark <= 79) {
        cout << "B Grade" << "\n";
    }else if(userMark >= 80 && userMark <=100) {
        cout <<"A Grade" << "\n"; 
    } 
 */ 
   //* 2nd Approach 
   if(userMark < 25) {
    cout << "Grade F" << '\n';
   }else if(userMark <= 44) {
    cout << "Grade E" << '\n';
   }else if(userMark <=49) {
    cout << "Grade D" << '\n';
   }else if(userMark <= 59) {
    cout << "Grade C" << '\n';
   }else if(userMark <= 79) {
    cout << "Grade B" << '\n';
   }else if(userMark <= 100) {
    cout << "Grade A" << '\n';
   }
 

     return 0; 

}