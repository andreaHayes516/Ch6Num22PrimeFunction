/************************************************
** Author: Andrea Hayes
** Date: April 10th 2020
** Purpose: Tell if number is prime
** Input: Integer, Bool
** Processing: Function, Formula
** Output: Display wether an integer is prime
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
bool isPrime(int); // Function header

int main() {

    int num;
    bool status;
    cout << "Enter an integer and I will tell you if it is a prime number: "; // User input
    cin >> num;

    status = isPrime(num); // Call function
    if (status==true)
    {
        cout << "The number " << num << " is prime.";
    }
    else
    {
        cout << "The number " << num << " is not prime.";
    }
    return 0;
}
bool isPrime(int num) // Function for prime number
{
    bool status;
    status = true;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            status = false;
        }
    }
    return status;
}


    