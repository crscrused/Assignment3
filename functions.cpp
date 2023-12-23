#include "functions.hpp"

/*My Epic Function for no characters*/
int IntegersOnly()
{
    int Integer;
    while (!(cin >> Integer))
    {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Invalid Input. Please Input Integers Only: ";
    }
    return Integer;
}

/*Basic Arithmetic*/
int Add(int a, int b) /*Adds the numbers inputted*/
{
    return a + b;
}

int Subtract(int a, int b) /*Subtracts the numbers inputted*/
{
    return a - b;
}

int Multiply(int a, int b) /*Multiplies the numbers inputted*/
{
    return a * b;
}

int Divide(int a, int b) /*Divides the numbers inputted*/
{
    return a / b;
}

/*Exponentiation*/
int Power(int a, int b)
{
    return pow(a, b);
}

int SquareRoot(int a)
{
    return sqrt(a);
}

int CubeRoot(int a)
{
    return cbrt(a);
}

double Logatrithm(double a) /*base 10 ni*/ 
{
    return log10(a);
}

double NaturalLogarithm(double a)
{
    return log(a);
}

double LogarithmOfBase(double a, double b)
{
    return log(a) / log(b);
}

/*Trigonometry*/
double Sine(double a)
{
    return sin(a);
}

double Cosine(double a)
{
    return cos(a);
}

double Tangent(double a)
{
    return tan(a);
}

double ArcSine(double a)
{
    return asin(a);
}


double ArcCosine(double a)
{
    return acos(a);
}

double ArcTangent(double a)
{    
    return atan(a);
}
/*Number Conversion*/
/*Decimal Section*/
string decimalToBinary(int decimal)
{
    if (decimal == 0)
    {
        return "0"; /*Special case for 0*/ 
    }

    string binary = "";

    while (decimal > 0)
    {
        int remainder = decimal % 2;
        binary = to_string(remainder) + binary; /*Prepend remainder to the binary string*/ 
        decimal /= 2;
    }

    return binary;
}

string decimalToOctal(int decimal)
{
    if (decimal == 0)
    {
        return "0"; /*Special case for 0*/ 
    }

    string octal = "";

    while (decimal > 0)
    {
        int remainder = decimal % 8;
        octal = to_string(remainder) + octal; /*Prepend remainder to the octal string*/ 
        decimal /= 8;
    }

    return octal;
}

string decimalToHexadecimal(int decimal)
{
    if (decimal == 0)
    {
        return "0"; // Special case for 0
    }
    string hexadecimal = "";
    while (decimal > 0)
    {
        int remainder = decimal % 16;

        // Convert remainder to hexadecimal character
        char hexDigit;
        if (remainder < 10)
        {
            hexDigit = '0' + remainder;
        }
        else
        {
            hexDigit = 'A' + (remainder - 10);
        }
        hexadecimal = hexDigit + hexadecimal; // Prepend hexDigit to the hexadecimal string
        decimal /= 16;
    }
    return hexadecimal;
}
/*Binary Section*/
int binaryToDecimal(string binary)
{
    int decimal = 0;

    int len = binary.length();
    for (int i = 0; i < len; i++)
    {
        if (binary[i] == '1')
        {
            decimal += pow(2, len - 1 - i);
        }    
    }
    return decimal;
}

int binaryToOctal(string binary)
{
    int octal = 0;
    int len = binary.length();

    /*Ensure the length is a multiple of 3*/
    int padding = len % 3;
    if (padding > 0)
    {
        /*Add leading zeros to make it a multiple of 3*/
        binary = string(3 - padding, '0') + binary; 
        len += 3 - padding;
    }

    for (int i = 0; i < len; i += 3)
    {
        int chunkValue = 0;
        for (int j = 0; j < 3; j++)
        {
            chunkValue += (binary[i + j] - '0') * pow(2, 2 - j);
        }
        octal = octal * 10 + chunkValue;
    }

    return octal;
}

int binaryToHexadecimal(string binary)
{
    int Hexanumber = 0;
    int power = 0;

    for (int i = binary.size() - 1; i >= 0; --i) 
    {
        if (binary[i] == '1') {
            Hexanumber += static_cast<int>(pow(2, power));
        }
        power++;
    }

    return Hexanumber;
}
/*Octal Sention*/
int octalToDecimal(string octal)
{
    int Decimal = 0;
    int base = 1; /*Initialize the base for the rightmost digit*/

    /*Iterate through the octal string from right to left*/
    for (int i = octal.size() - 1; i >= 0; --i) 
    {
        int digit = octal[i] - '0'; /*Convert the character to an integer*/ 
        Decimal += digit * base;
        base *= 8;  /*Octal is base-8, so multiply the base by 8 for each position*/
    }
    return Decimal;
}

string octalToBinary(int octal)
{
    if (octal == 0) {
        return "0";  /*Special case for octal 0*/ 
    }

    string binaryString = "";

    while (octal > 0) {
        int remainder = octal % 8;
        binaryString = to_string(remainder) + binaryString;
        octal /= 8;
    }
    return binaryString;
}

string octalToHexadecimal(int octal)
{
    if (octal == 0) {
        return "0";  /*Special case for octal 0*/ 
    }

    string hexDigits = "0123456789ABCDEF";
    string hexadecimalString = "";

    while (octal > 0) {
        int remainder = octal % 8;
        hexadecimalString = hexDigits[remainder] + hexadecimalString;
        octal /= 8;
    }

    return hexadecimalString;
}
/*Hexadecimal Section*/
int hexadecimalToDecimal(string hexadecimal)
{
    int decimalValue = 0;
    int length = hexadecimal.length();

    for (int i = 0; i < length; i++) {
        char digit = hexadecimal[i];
        int digitValue;

        if (digit >= '0' && digit <= '9') {
            digitValue = digit - '0';
        }
        else if (digit >= 'A' && digit <= 'F') {
            digitValue = 10 + digit - 'A';
        }
        else if (digit >= 'a' && digit <= 'f') {
            digitValue = 10 + digit - 'a';
        }
        else {
            /*Invalid hexadecimal digit*/ 
            return -1;
        }

        decimalValue += digitValue * pow(16, length - 1 - i);
    }

    return decimalValue;
}

string hexadecimalToBinary(int hexadecimal)
{
    string binaryString = "";
    for (int i = 28; i >= 0; i -= 4) {
        int hexDigit = (hexadecimal >> i) & 0xF;  /*Extract one hex digit*/ 
        for (int j = 3; j >= 0; j--) {
            int bit = (hexDigit >> j) & 1;  /*Extract one bit*/
            binaryString += to_string(bit);
        }
    }
    return binaryString;
}

int hexadecimalToOctal(string hexadecimal)
{
    /*First, convert the hexadecimal string to an integer*/
    int decimal = stoi(hexadecimal, 0, 16);

    /*Then, convert the decimal integer to octal*/
    int octal = 0, i = 1;
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}
/*Other Section*/
long long Factorial(int n)
{
    long long factorial = 1.0;
    if (n < 0)
        cout << "Please Input Positive Number Only.";
    else
    {
        for (int i = 0; i <= n; ++i)
        {
            factorial *= i;
        }
    }
    return factorial;
}

long long Fibonacci(int n)
{
    int Term1 = 0, Term2 = 1, NextTerm = 0;

    for (int i = 1; i < n; ++i)
    {
        /*Prints the two terms*/
        if (i == 1)
        {
            cout << Term1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << Term2 << ", ";
            continue;
        }
        NextTerm = Term1 + Term2;
        Term1 = Term2;
        Term2 = NextTerm;
    }
    return Term1;
}

bool isPrime(int n)
{
    int i;
    bool isPrime = true;

    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    for ( i = 2; i < n/2; ++i)
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    {
        if (isPrime)
            cout << n << " is a Prime Number.\n";
        else
            cout << n << " is not a Prime Number\n";
    }
    return i;
}
