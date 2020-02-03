/********
 Author:
 Program: Money class - program assignment #1
 Due Date:
 Purpose:
 ********/
#include "money.h"

// convert current currency values to a string
string Money::toString() {
    return "";
}

// format amount as a local currency and return
string Money::toCurrency(double amount) {
    stringstream ss;

    ss << "$" << left << setfill('0') << setw(4) << amount;
    return ss.str();
}

// convert currency to float
// read currency values from stdin and compute value
// return results
string Money::processChange() {
    return "";
}

// read from stdin and process float command
// convert float to change
// return results
string Money::processFloat() {
cin >> total;
    stringstream floatStream;
    hundreds = (total / 100);
    total = total - (hundreds * 100);
    tens = (total / 10.0);
    total = total - (tens * 10);
    fives = (total / 5.0);
    total = total - (fives * 5);
    ones = (total / 1.0);
    total = total - (ones);
    quarters = (total / .25);
    total = total - (quarters * .25);
    dimes = (total / .1);
    total = total - (dimes * .1);
    nickels = (total / .05);
    total = total - (nickels * .05);
    cents = (total / .01);

    floatStream << hundreds << " " << tens << " " << fives << " " << ones << " " << quarters << " " << dimes
            << " " << nickels << " " << cents;
    return floatStream.str();
}

// read from stdin and process check command
// convert float to dollar words & cents
// return results
string Money::processCheck() {
  return "";
}

// read from stdin and process change-float command
// read float of customer payment
// read float of transaction cost
// calculate difference and compute change values
// return the results
string Money::processChangeFloat() {
  return "";
}

// read from stdin and process change-change command
// read change of customer payment
// read float of transaction cost
// calculate difference and compute change values
// output the results
string Money::processChangeChange() {
  return "";
}
