#include <bits/stdc++.h>
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

//* Problem Two :
/*
Take the age from the user and decide accordingly .
 1. if age < 18
   print ->  not eligible for job
2. if age >=18
   print -> "eligible for job"
3. if age >= 55  and age <= 57
   print -> "eligible for job, but retierment was soon."
4.  if age > 57
   print -> retierment time
*/
int main()
{
    //? Solution of Problem One
    // int userMark;
    // cout << "Enter your Mark" << '\n';
    // cin >> userMark;
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
    /*  if(userMark < 25) {
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
   */

    //? Problem Two Solution
    int userAge;
    cout << "Please Enter your Age" << '\n';
    cin >> userAge;
    //* Approach One
    /* if(userAge < 18) {
       cout <<"Not Eligible For Job" << endl;
    } else if(userAge >= 18 && userAge < 55) {
        cout << "Eligible For Job" << '\n';
    } else if(userAge >= 55 && userAge < 57) {
        cout << "Eligible for job, but retierment was soon" << '\n';
     } else  if(userAge >= 57) {
        cout << "Retierment Time" << '\n';
     }
    */

    //* Approach Two
    if (userAge < 18)
    {
        cout << "Not Eligible For Job" << '\n';
    }
    else if (userAge <= 54)
    {
        cout << "Eligible For Job" << '\n';
    }
    else if (userAge <= 57)
    {
        cout << "Eligible for job, but retierment was soon" << '\n';
    }
    else
    {
        cout << "Retierment Time" << '\n';
    }

    //! Here the problem with else if was when the first condition was true than other condition was not check it's like in chaining

    return 0;
}