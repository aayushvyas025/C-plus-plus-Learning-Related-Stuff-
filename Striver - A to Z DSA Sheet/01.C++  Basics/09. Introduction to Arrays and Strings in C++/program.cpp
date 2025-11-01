#include <bits/stdc++.h>

int main()
{
    //* What was an arrays in C++
    // An array is a data structure used to store multiple values of the same data type together.
    //  The elements of an array are stored in contiguous (adjacent) memory locations, which allows efficient access using an index.

    //? Example of array in c++
    int myArr[5];
    /* std::cout << "Enter the first element in an array" << '\n';
     std::cin >> myArr[0];
     std::cout << "Enter the second element in an array" << '\n';
     std::cin >> myArr[1];
     std::cout << "Enter the third element in an array" << '\n';
     std::cin >> myArr[2];
     std::cout << "Enter the fourth element in an array" << '\n';
     std::cin >> myArr[3];
     std::cout << "Enter the fifth element in an array" << '\n';
     std::cin >> myArr[4];
     */

    //* We can assign the value to array also
    //? Here we are accessing array with the help of index because our array was stored data in index wise.
    myArr[0] = 20;
    myArr[1] = 25;
    myArr[2] = 30;
    myArr[3] = 35;
    myArr[4] = 40;

    //* We can perform operation also
    myArr[0] += 5;
    myArr[1] += 10;
    myArr[2] += 15;
    myArr[3] += 20;
    myArr[4] += 25;

    std::cout << "Your array was [" << myArr[0] << ", " << myArr[1] << ", " << myArr[2] << ", " << myArr[3] << ", " << myArr[4] << "]" << '\n';

    //? The above array we see was 1D array.

    //* Introduction to 2D Array :
    int myTwoDimensionalArray[3][3];
    myTwoDimensionalArray[0][0] = 2;
    myTwoDimensionalArray[0][1] = 4;
    myTwoDimensionalArray[0][2] = 6;
    myTwoDimensionalArray[1][0] = 8;
    myTwoDimensionalArray[1][1] = 10;
    myTwoDimensionalArray[1][2] = 12;
    myTwoDimensionalArray[2][0] = 14;
    myTwoDimensionalArray[2][1] = 16;
    myTwoDimensionalArray[2][2] = 18;

    std::cout << "Two D Array [" << myTwoDimensionalArray[0][0] << ", " << myTwoDimensionalArray[0][1] << ", "  << myTwoDimensionalArray[0][2] << ", " << myTwoDimensionalArray[1][0] << ", " << myTwoDimensionalArray[1][1] << ", " << myTwoDimensionalArray[1][2] << ", " << myTwoDimensionalArray[2][0] << ", " << myTwoDimensionalArray[2][1] << ", " << myTwoDimensionalArray[2][2] << "]";

    return 0;
}