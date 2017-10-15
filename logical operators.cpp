/*This program asks for 3 numbers to be inputted.
The first and second number entered represent the minimum and maximum of the interval respectively.
The program then checks if the third number is within this interval and output a boolean type variable (1 = true, 0 = false)

*/

#include <iostream>

using namespace std;

main()
{

    int first_integer,second_integer,third_integer;
    bool answer;

    cout << "Input the first integer: ";
    cin >> first_integer;
    cout << "Input the second integer: ";
    cin >> second_integer;
    cout << "Input the third integer: ";
    cin >> third_integer;

    answer = (first_integer < third_integer) && (third_integer < second_integer);
    cout << "Is the number " << third_integer << " contained in the interval from " << first_integer << " to " << second_integer << "? " << endl << answer;



}
