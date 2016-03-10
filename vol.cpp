// Olivier Dorvelus
//Cylinder volume compute program
// Due 2/4/2016

#include <iostream>

using namespace std;

int main()
{

// Declaring the constant value of pi and other values for the volume calculation

double pi = 3.141593;
double diameter;
double height;
double radius;
double volume;
// Using string variables to show the user the formula being calculated later on in the program
string diamaterFormula = "pi * (d^2/4) * h";
string radiusFormula = "pi * r^2 * h";

    cout << "This program's task is to calculate the volume of a cylinder in cubic inches \n \n";
    //next four lines of code is asking for the user to input the desired input of the diameter and height of the cylinder
    cout << "Please enter the desired number for the diameter of the cylinder:";
    cin >> diameter;
    // Dividing the user input for diameter by 2 so the program now has a radius
    radius = diameter / 2;
    cout << endl;
    cout << "Please enter the desired number for the height of the cylinder:";
    cin >> height;
    cout << endl;
    // Calculating the volume of the cylinder  in terms of the radius
    cout << endl;

    // Showing what the user inputted and outputing it, as well as the formula of the volume in terms of the radius and diameter
    cout << "The value of the diameter was given as: " << diameter << " inches" << endl;
    cout << "So the value of the radius is: " << radius << " inches" << endl;
    cout << "The value of the height was given as: " << height << " inches" << endl;
    cout << "In terms of the radius, Volume = " << radiusFormula << endl;
    cout << pi << " * " << radius << "^2" << " * " << height << endl;
    cout << "In terms of the diameter, Volume = " << diamaterFormula << endl;
    cout << pi << " * ((" << diameter << "^2 / 4) * " << height << endl;
    //assigning the volume variable to the volume formula of a cylinder
    volume = pi * radius * radius * height;
    // Outputting the final calculation known as the volume of a Cylinder
    cout << "The calculated volume is: " << volume << " cubic inches" << endl;

    // int type function so must return an int
    return 0;
}
