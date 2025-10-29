#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number's datatype

    // short data-type : This short datatype was smallest range type to store integer type data
    // short number_one;
    // int data-type : This int datatype was integer type
    // int number_two;
    // long data-type : this long type help to store more bigger range as we compare to int
    // long number_three;
    // Mixed up data-type for more bigger number like long long, short short
    // long long number_four;

    //! Above all are integrs number both positive and negative

    // Fraction numbers or decimal number
    //  Mainly for decimal there was two type one was float and double for bigger ranges which give output in decimal number
    // float number_five;
    // float data type : this data type was used for decimal pointer value
    // double data type : this data type was used for more range of number in decimal value
    // double number_six;

    // cout << "Enter the short number type " << endl;
    // cin >> number_one;
    // cout << "Enter the int number type " << endl;
    // cin >> number_two;
    // cout << "Enter the long number type " << endl;
    // cin >> number_three;
    // cout << "Enter the long long number type " << endl;
    // cin >> number_four;
    // cout << "Enter the float number type " << endl;
    // cin >> number_five;
    // cout << "Enter the double number type " << endl;
    // cin >> number_six;

  /*
    cout << "Short number datatype: " << number_one << endl;
    cout << "Int number datatype: " << number_two << endl;
    cout << "Long number datatype: " << number_three << endl;
    cout << "Long Long number type: " << number_four << endl;
    cout << "Float number type: " << number_five << endl;
    cout << "Double number type: " << number_six << endl; 
    */

    // There are other datatype also like string datatype , getline datatype, boolean etc. 
    string myString; 
    cout << "Enter any String or Character " << endl; 
    // cin >> myString; 
    // The problem with myString variable when we give wide spaces it not taking as input just trim those part after wide spaces 
    //? There was inbuilt method which was getline method which was used to read input line of string in which wide spaces are also included... 
    getline(cin , myString); 
    cout << myString << '\n'; 


    return 0;
}