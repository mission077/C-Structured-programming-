/**
 *******************************************************************************
 * @file    spRecursionIL.cpp 
 * @brief   This program calculates the result of integer to the power integer
 * by using the functions iterativePower and recursivePower and then 
 * calculate the Greatest Common Divisor of two integers using the 
 * fumction recursiveGCD and iterativeGCD.
 *
 *
 * @remarks
 *      Course:        Computer Science 2214, Fall 2022
 *      Due Date:      Wednesday, November 16 2022
 *      Instructor:    Nancy Draganjac
 *
 * @author  Mission Kadariya
 * @date    11/16/2022
 *******************************************************************************
**/
#include <iostream>
using std :: cout;
using std :: cin;
using std :: endl;

int iterativePower (int x , int k) //funtion to find power
{
    int answer = 1;
    
    for (int i = 1; i <= k; ++i )
    {
        answer = answer * x; 
    }
    
    return answer;
}

int recursivePower (int x , int k) // funtion to find recursive power
{
    int answer;
    
    if (k > 0)
    {
        answer = x * recursivePower(x , k - 1);
        
    }
    else
    {
        answer = 1;
    }
    return answer;
    
}

int iterativeGCD(int a, int b) // funtion to find greatest common divisor
{
    int remainder;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int recursiveGCD(int a, int b) // funtion to find recursive GCD
{
    int answer;
    
    if (b != 0)
    {
        answer = recursiveGCD(b, a % b);
        
    }
    else
    {
        answer = a;
        
    }
    return answer;
}

int main()
{
    int x = 3, k = 5, a = 270, b = 192; // testing points for power and GCD
    cout << endl << x << "^" << k << " iteratively = "  
        << iterativePower (x, k) << endl << endl;
    cout << endl << x << "^" << k << " recursively = " 
        << recursivePower (x, k) << endl;
    cout << endl << "The GDC of " << a << " and " << b 
    << " iteratively = " << iterativeGCD(a , b);
    cout << endl << "The GDC of " << a << " and " << b 
    << " recursively = " << recursiveGCD(a , b)<< endl;
    
    return 0;
}