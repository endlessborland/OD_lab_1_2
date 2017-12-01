//
//  main.cpp
//  Lab_1_2
//
//  Created by Денис Скоробогатов on 24.11.17.
//  Copyright © 2017 Denis Skorobogatov. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

double read_double();

int main(int argc, const char * argv[]) {
    // insert code here...
    double x, y;
    double length;
    double rsmall, rbig;
    while(true)
    {
        cout << "Insert the radius of a smaller circle\n";
        rsmall = read_double();
        cout << "Insert the radius of a bigger circle\n";
        rbig = read_double();
        if (rbig <= rsmall)
        {
            cout << "Bigger circle must be bigger than the smaller one!\n";
            continue;
        }
        if (rbig < 0 || rsmall < 0)
        {
            cout << "Raduis must be larger than zero\n";
            continue;
        }
        break;
    }
    cout << "Insert x:\n";
    x = read_double();
    cout << "Inser y:\n";
    y = read_double();
    length = sqrt(pow(x,2) + pow(y,2));
    if (length > rsmall && length <= rbig)
        cout << "(" << x << ";" << y << ")" << " is inside the area\n";
    else
        cout << "(" << x << ";" << y << ")" << " is outside of the area\n";
    return 0;
}

double read_double()
{
    string input;
    bool input_incorrect = true;
    double result = 0.0;
    while (input_incorrect) {
        try {
            cin >> input;
            result = std::stod(input);
            input_incorrect = false;
        }
        catch(...)
        {
            cout << "Try again, the input is incorrect\n";
        }
    }
    return result;
}
