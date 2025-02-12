// Chapter 3  Exercise 18- Intrest Earned.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
File Name: Chapter 3 Exercise 18- Intrest Earned
GitHub URl:https://github.com/omr24100/Chapter-3-Exercise-18--Intrest-Earned.git
Programmer: Olivia Ruiz
Date: 2/21/25
Requirments: Assuming there are no deposits other than the orginal investment,
the balance in a saving account after one year may be calcated as 
Amount= Principal(1+rate/T)^t. Write a program that ask for the principal, the intrest rate,
and the number of times the intrest is compounded. It should display a report.
*/

#include <iostream>
#include <cmath>  

using namespace std;


double calculate_balance(double principal, double rate, int num_compounds, int time) {
    
    double amount = principal * pow((1 + rate / num_compounds), (num_compounds * time));
    return amount;
}

int main() {
    double principal, rate;
    int num_compounds;

 
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (as a decimal): ";  
    cin >> rate;
    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> num_compounds;

    int time = 1;  

    
    double balance = calculate_balance(principal, rate, num_compounds, time);

    
    cout << "\n--- Savings Account Report ---\n";
    cout << "Principal Amount: $" << principal << endl;
    cout << "Annual Interest Rate: " << (rate * 100) << "%" << endl;
    cout << "Compounded " << num_compounds << " times per year" << endl;
    cout << "Balance after 1 year: $" << balance << endl;

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
