// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// #include <map>
// #include <set>
// #include <cmath>
// In C++ there was so many libraries so every time we have to import it like this instead of it we used one import statement  
#include <bits/stdc++.h>
// So individual importing c++ header file instead of it we can import signle header file which was <bits/stdc++.h> which include all the other headers files in it of C++ Standard but this <bits/stdc++.h> was not part of standard implementation of c++  

using namespace std; 

int main() { 
      int numberOne, numberTwo;  // Here we do decelaration of number variable 
      cout << "Enter Your  First Number " << endl; 
      // Taking Input from User with the help of cin object which means "character input" 
      cin >> numberOne;   
      cout << "Enter Your Second Number" << endl; 
      cin >> numberTwo; 
      cout << "Value of First Number:" << numberOne << " and  of Second Number:" << numberTwo << '\n'; 
    //  With the help of cin we can take input from user 
    return 0; 
}