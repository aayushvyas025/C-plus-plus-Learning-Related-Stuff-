#include<bits/stdc++.h>
using namespace std; 

//* Conditional Statement : For conditional based scenario we have conditonal statements like if statement, else statement or else-if statement 

int main() { 
    int ageOfPerson; 
   cout << "Enter your Current Age" << '\n'; 
   cin >> ageOfPerson; 
   // if statement for conditional based problem 
   if(ageOfPerson >= 18){ 
    cout << "You are Adult" << endl; 
   }else if(ageOfPerson > 14){
     cout << "You are Teenager" << endl; 
   }else{
    cout << "You are  Child" << endl; 
   }

   return 0; 
}
