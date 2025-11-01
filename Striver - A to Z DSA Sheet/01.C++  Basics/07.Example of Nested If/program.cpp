#include <bits/stdc++.h>

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

//? Nested If
//  When we are using if conditional statement inside the if statement than it was called as Nested If

int main()
{
    int userAge;
    std::cout << "Enter Your Age Here" << '\n';
    std::cin >> userAge;
    if (userAge < 18)
    {
        std::cout << " not eligible for job" << '\n';
    }
    else if (userAge <= 57)
    {
        std::cout << "eligible for job";
        //* Here we are using Nested If
        if (userAge >= 55)
        {
            std::cout << " but retierment was soon.";
        }
    }
    else
    {
        std::cout << "retierment time" << '\n';
    }

    return 0;
}