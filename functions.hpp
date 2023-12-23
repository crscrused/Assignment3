#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#define _USE_MATH_DEFINES
#include <iostream> /*provides input and output functionality*/
#include <iomanip> /*used to manage input and output formatting*/
#include <math.h> /*declares a set of functions to compute common mathematical operations and transformations*/
#include <conio.h> /*to take input from the keyboard given by the user and display output on the screen*/
#include <string> /*stores the characters of a string as a collection*/


using namespace std;

/*Declarations*/

int IntegersOnly();/*NO Characters*/

/*Basic Arithmetic*/

int Add(int a, int b); /*Addtion*/

int Subtract(int a, int b); /*Subtraction*/

int Multiply(int a, int b); /*Multiplication*/

int Divide(int a, int b); /*Division*/

/*Exponentiation*/
int Power(int a, int b);

int SquareRoot(int a);

int CubeRoot(int a);

/*Logarithm*/
double Logatrithm(double a); // base 10 ni

double NaturalLogarithm(double a);

double LogarithmOfBase(double a, double b);

/*Trigonometry*/
// sa main int SineDegrees(int Angle);
double Sine(double a); // sa function.cpp

// int CosineDegrees(int Angle);
double Cosine(double a);

// int TangentDegrees(int Angle);
double Tangent(double a);

// int InverseSineDegrees(int Angle);
double ArcSine(double a);

//int InverseCosineDegrees(int Angle);
double ArcCosine(double a);

// int InverseTangentDegrees(int Angle);
double ArcTangent(double a);

/*===Conversions===*/
/*Decimal Conversions*/
string decimalToBinary(int decimal);

string decimalToOctal(int decimal);

string decimalToHexadecimal(int decimal);

/*Binary Conversions*/
int binaryToDecimal(string binary);

int binaryToOctal(string binary);

int binaryToHexadecimal(string binary);

/*Octal Conversions*/
int octalToDecimal(string octal);

string octalToBinary(int octal);

string octalToHexadecimal(int octal);

/*Hexadecimal Conversion*/
int hexadecimalToDecimal(string hexadecimal);

string hexadecimalToBinary(int hexadecimal);

int hexadecimalToOctal(string hexadecimal);

/*Others*/
long long Factorial(int n);

long long Fibonacci(int n);

bool isPrime(int n);

#endif