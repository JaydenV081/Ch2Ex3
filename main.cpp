/*
Developer: Jayden Veloz
File Name: Ch2Ex3.cpp
Date: 9 / 16 / 26

Requirements:
3. Sales Tax
Write a program that computes the sales tax and total price on a $95 purchase.
Assume the state sales tax is 6.5 percent and the county sales tax is 2 percent.
Display the purchase price, total tax, and total price on the screen.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double stateTax = 0.065;
    double countryTax = 0.02;
    double totalTax = stateTax + countryTax;

    int price = 95;
    double totalPrice = price * totalTax + price;

    cout << "The purchase price is $" << price << endl;
    cout << "The total tax is " << totalTax << "%" << endl;
    cout << fixed << setprecision(2) <<"The total price after taxes is $" << totalPrice << endl;

    return 0;
}