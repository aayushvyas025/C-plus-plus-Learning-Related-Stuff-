#include<bits/stdc++.h>
using namespace std; 

int main() {
    //* Datatype in C++ 
    // - In programming, we work with data to store and manipulate it as per our needs.
   // - To store data, we use variables. A variable helps to store a value and gives a name to a specific memory location, so we can easily access or modify it.
  // - This data is categorized into different types, such as int, float, double, char, etc. These are known as data types.
   
  // let do initialization of variable 
  int number_one;  
  cout << "Enter the Integer Number " << endl; 
  cin >> number_one; 
  cout << "Value of Integer Number was " << number_one << endl; 
// If we want more bigger range number as compare to int than we are using long datatype which store bigger number range as compare to int type 
long number_two; 
cout << "Enter the Long Number " << endl; 
cin >> number_two; 
cout << "Value of Long Number was " << number_two << '\n'; 
// Need more bigger number range than we do mixed up two data type 
long long number_three; 
// It give more bigger range as we compare to long 
cout << "Enter the Long Long Number" << endl; 
cin >> number_three; 
cout << "Value of Long Long Number was " << number_three << '\n'; 

   return 0; 
}