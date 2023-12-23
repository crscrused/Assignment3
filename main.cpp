// File Name : SanJose_PA3.cpp
// Author : John Cris San Jose
// Email Address : jcsanjose@gbox.adnu.edu.ph
// ProgAss Number : 3
// Description : Header Files and Functioning Engineer's Calculator
// Last Changed :  10/03/2023 ,  11:00PM

/*Used to call out the functions from Header file*/
#include "functions.hpp"


/*Variables*/
int MainChoice, SubChoice, Sub_SubChoice; /*Variables For Switch*/
double A, B, Base, Angle, Hexadecimal, Degrees; /*Variables For Inputs*/
int Decimal, Octal, a, b, HexNum, DecimalPlaces; /*Variables For Inputs*/
string Binary, octal, hexadecimal;

int main()
{
    while (true)
    {
        /*Main Menu*/
        cout << "Welcome to Calculator for Engineers\n";
        cout << "========MENU========\n";
        cout << "(1) Basic Arithmetic\n";
        cout << "(2) Powers\n";
        cout << "(3) Logarithm\n";
        cout << "(4) Trigonometry (with DRG)\n";
        cout << "(5) Number System Conversion\n";
        cout << "(6) Others\n";
        cout << "Press 0 to EXIT\n";
        MainChoice = _getch() - '0';

        switch (MainChoice)
        {

        case 0: /*To Exit*/
            cout << "Press Enter To Comfirm Exit\n";
            while (true)
            {
                char Enter = _getch(); // Read a character without echoing it to the console
                if (Enter == 13)      // Check if the Enter key (ASCII code 13) is pressed
                    cout << "Exiting The Program. Thank You!\n";
                break;
            }
            return 0;
            break; /*Break for MainChoiceCase 0*/

        case 1: /*Basic Arithmetic*/
            cout << "Basic Arithmetic\n";
            cout << "========MENU========\n";
            cout << "(1) Addition\n";
            cout << "(2) Subtraction\n";
            cout << "(3) Multiplication\n";
            cout << "(4) Division\n";
            SubChoice = _getch() - '0';
            switch (SubChoice)
            {
            case 1:
                cout << "===Addition===\n";
                cout << "Enter the Augend: ";
                a = IntegersOnly();
                cout << "Enter the Addend: ";
                b = IntegersOnly();
                cout << "Sum: " << Add(a, b) << "\n";
                break;
            case 2:
                cout << "===Subtraction===\n";
                cout << "Enter the Minuend: ";
                a = IntegersOnly();
                cout << "Enter the Subtrahend: ";
                b = IntegersOnly();
                cout << "Difference: " << Subtract(a, b) << "\n";
                break;
            case 3:
                cout << "===Multiplication===\n";
                cout << "Enter the Multiplicand: ";
                a = IntegersOnly();
                cout << "Enter the Multipilier: ";
                b = IntegersOnly();
                cout << "Product: " << Multiply(a, b) << "\n";
                break;
            case 4:
                cout << "===Division===\n";
                cout << "Enter the Dividend: ";
                a = IntegersOnly();
                cout << "Enter the Divisor: ";
                b = IntegersOnly();
                cout << "Quotient: " << Divide(a, b) << "\n";
                break;

            default:
                cout << "Invalid Choice. Please Choose Again.\n";
                break;/*Break for SubChoice*/
            }
            break;/*Break For SubChoice 1*/

        case 2: /*Exponentiation*/
            cout << "Exponentiation\n ";
            cout << "========MENU========\n";
            cout << "(1) Power\n";
            cout << "(2) Square Root\n";
            cout << "(3) Cube Root\n";
            SubChoice = _getch() - '0';

            switch (SubChoice)
            {
            case 1:
                cout << "===Power===\n";
                cout << "Enter the Base: ";
                a = IntegersOnly();
                cout << "Enter the Exponent: ";
                b = IntegersOnly();
                cout << a << " is raised to the power of " << b << ": " << Power(a, b) << "\n";
                break;
            case 2:
                cout << "===Square Root===\n";
                cout << "Enter a Number: ";
                a = IntegersOnly();
                cout << "Result: " << SquareRoot(a) << "\n";
                break;
            case 3:
                cout << "===Cube Root===\n";
                cout << "Enter a Number: ";
                a = IntegersOnly();
                cout << "Result: " << CubeRoot(a) << "\n";
                break;

            default:
                cout << "Invalid Choice. Please Choose Again.\n";
                break; /*Break for SubChoice*/
            }
            break; /*Break For SubChoice 2*/

        case 3: /*Logarithm*/
            cout << "Logarithm\n";
            cout << "========MENU========\n";
            cout << "(1) Base 10 Logarithm (log10)\n";
            cout << "(2) Natural Logarithm (ln)\n";
            cout << "(3) Logarithm with Any Base\n";
            SubChoice = _getch() - '0';

            switch (SubChoice)
            {
            case 1:
                cout << "===Base 10 Logarithm===\n";
                cout << "Enter a number (x): ";
                A = IntegersOnly();
                cout << "log10(" << A << ") = " << Logatrithm(A) << "\n";
                break;
            case 2:
                cout << "===Natural Logarithm===\n";
                cout << "Enter a number (x): ";
                A = IntegersOnly();
                cout << "ln(" << A << "): " << NaturalLogarithm(A) << "\n";
                break;
            case 3:
                cout << "===Logarithm with Any Base===\n";
                cout << "Enter the base: ";
                Base = IntegersOnly();
                cout << "Enter a number (x): ";
                A = IntegersOnly();
                cout << "log" << Base << "(" << A << "): " << LogarithmOfBase(A, Base) << "\n";
                break;
            default:
                cout << "Invalid Choice. Please Choose Again.\n";
                break;/*Break for SubChoice*/
            }
            break; /*Break for SubChoice 3*/

        case 4: /*Trigonometry*/
            cout << "Trigonometry\n";
            cout << "========MENU========\n";
            cout << "(1) Sine\n";
            cout << "(2) Cosine\n";
            cout << "(3) Tangent\n";
            cout << "(4) Inverse Sine\n";
            cout << "(5) Inverse Cosine\n";
            cout << "(6) Inverse Tangent\n";
            SubChoice = _getch() - '0';

            switch (SubChoice)
            {
            case 1:
                cout << "===Sine===\n";
                cout << "Enter an angle in degrees: ";
                Angle = IntegersOnly();
                Degrees = sin(Angle * (M_PI / 180));
                cout << "Degrees: " << Degrees << "\n";
                cout << "Radian: " << Sine(Angle) << "\n";
                break;
            case 2:
                cout << "===Cosine===\n";
                cout << "Enter an angle in degrees: ";
                Angle = IntegersOnly();
                Degrees = cos(Angle * (M_PI / 180));
                cout << "Degrees: " << Degrees << "\n";
                cout << "Radian: " << Cosine(Angle) << "\n";
                break;
            case 3:
                cout << "===Tangent===\n";
                cout << "Enter an angle in degrees: ";
                Angle = IntegersOnly();
                Degrees = tan(Angle * (M_PI / 180));
                cout << "Degrees: " << Degrees << "\n";
                cout << "Radian: " << Tangent(Angle) << "\n";
                break;
            case 4:
                cout << "===Inverse Sine===\n";
                cout << "Enter an angle in degrees: ";
                Angle = IntegersOnly();
                Degrees = asin(Angle * (M_PI / 180));
                cout << "Degrees: " << Degrees << "\n";
                cout << "Radian: " << ArcSine(Angle) << "\n";
                break;
            case 5:
                cout << "===Inverse Cosine===\n";
                cout << "Enter an angle in degrees: ";
                Angle = IntegersOnly();
                Degrees = acos(Angle * (M_PI / 180));
                cout << "Degrees: " << Degrees << "\n";
                cout << "Radian: " << ArcCosine(Angle) << "\n";
                break;
            case 6:
                cout << "=== Inverse Tangent===\n";
                cout << "Enter an angle in degrees: ";
                Angle = IntegersOnly();
                Degrees = atan(Angle * (M_PI / 180));
                cout << "Degrees: " << Degrees << "\n";
                cout << "Radian: " << ArcTangent(Angle) << "\n";
                break;

            default:
                cout << "Invalid Choice. Please Choose Again.\n";
                break; /*Break For SubChoice*/
            }
            break; /*Break For SubChoice 4*/

        case 5: /*Number System Convertion*/
            cout << "Number System Conversion\n";
            cout << "========MENU========\n";
            cout << "(1) Decimal\n";
            cout << "(2) Binary\n";
            cout << "(3) Octal\n";
            cout << "(4) Hexadecimal\n";
            SubChoice = _getch() - '0';

            switch (SubChoice)
            {
            case 1: /*Decimal*/
                cout << "Source base DECIMAL\n";
                cout << "Choose the target base\n";
                cout << "========MENU========\n";
                cout << "(1) Binary\n";
                cout << "(2) Octal\n";
                cout << "(3) Hexadecimal\n";
                Sub_SubChoice = _getch() - '0';

                switch (Sub_SubChoice)
                {
                case 1: /*Decimal to Binary*/
                    cout << "===Decimal to Binary Conversion===\n";
                    cout << "Enter a Decimal Number: ";
                    Decimal = IntegersOnly();
                    cout << "Result: " << decimalToBinary(Decimal) << "\n";
                    break;
                case 2: /*Decimal to Octal*/
                    cout << "===Decimal to Octal Conversion===\n";
                    cout << "Enter a Decimal Number: ";
                    Decimal = IntegersOnly();
                    cout << "Result: " << decimalToOctal(Decimal) << "\n";
                    break;
                case 3: /*Decimal to Hexadecimal*/
                    cout << "===Decimal to Hexadecimal Converson===\n";
                    cout << "Enter a Decimal Number: ";
                    Decimal = IntegersOnly();
                    cout << "Result: " << decimalToHexadecimal(Decimal) << "\n";
                    break;

                default:
                    cout << "Invalid Choice. Please Choose Again.\n";
                    break;
                }
                break; /*Break For Sub_SubChoice Decimal Conversion*/

            case 2:
                cout << "Source base BINARY\n";
                cout << "Choose the target base\n";
                cout << "========MENU========\n";
                cout << "(1) Decimal\n";
                cout << "(2) Octal\n";
                cout << "(3) Hexadecimal\n";
                Sub_SubChoice = _getch() - '0';

                switch (Sub_SubChoice)
                {
                case 1:
                    cout << "===Binary to Decimal Conversion===\n";
                    cout << "Enter a Binary Number: ";
                    Binary = IntegersOnly();
                    cout << "Result: " << binaryToDecimal(Binary) << "\n";
                    break;
                case 2:
                    cout << "===Binary to Octal Conversion===\n";
                    cout << "Enter a Binary Number: ";
                    Binary = IntegersOnly();
                    cout << "Result: " << binaryToOctal(Binary) << "\n";
                    break;
                case 3:
                    cout << "===Binary to Hexadecimal Conversion===\n";
                    cout << "Enter a Binary Number: ";
                    Binary = IntegersOnly();
                    cout << "Result: " << binaryToHexadecimal(Binary) << "\n";
                    break;

                default:
                    cout << "Invalid Choice. Please Choose Again.\n";
                    break;
                }
                break; /*Break For Sub_SubChoice Binary Conversion*/

            case 3:
                cout << "Source base Octal\n";
                cout << "Choose the target base\n";
                cout << "========MENU========\n";
                cout << "(1) Decimal\n";
                cout << "(2) Binary\n";
                cout << "(3) Hexadecimal\n";
                Sub_SubChoice = _getch() - '0';

                switch (Sub_SubChoice)
                {
                case 1:
                    cout << "===Octal to Decimal Conversion===\n";
                    cout << "Enter an Octal Number: ";
                    octal = IntegersOnly();
                    cout << "Result: " << octalToDecimal(octal) << "\n";
                    break;
                case 2:
                    cout << "===Octal to Binary Conversion===\n";
                    cout << "Enter an Octal Number: ";
                    Octal = IntegersOnly();
                    cout << "Result: " << octalToBinary(Octal) << "\n";
                    break;
                case 3:
                    cout << "===Octal to Hexadecimal Conversion===\n";
                    cout << "Enter an Octal Number: ";
                    Octal = IntegersOnly();
                    cout << "Result: " << octalToHexadecimal(Octal) << "\n";
                    break;

                default:
                    cout << "Invalid Choice. Please Choose Again.\n";
                    break;
                }
                break; /*Break For Sub_SubChoice Octal Conversion*/
            case 4:
                cout << "Source base Hexadecimal\n";
                cout << "Choose the target base\n";
                cout << "========MENU========\n";
                cout << "(1) Decimal\n";
                cout << "(2) Binary\n";
                cout << "(3) Octal\n";
                Sub_SubChoice = _getch() - '0';

                switch (Sub_SubChoice)
                {
                case 1:
                    cout << "===Hexadecimal to Decimal Conversion===\n";
                    cout << "Enter a Hexadecimal Number: ";
                    cin >> hexadecimal;
                    cout << "Result: " << hexadecimalToDecimal(hexadecimal) << "\n";
                    break;
                case 2:
                    cout << "===Hexadecimal to Binary Conversion===\n";
                    cout << "Enter a Hexadecimal Number: ";
                    cin >> HexNum;
                    cout << "Result: " << hexadecimalToBinary(HexNum) << "\n";
                    break;
                case 3:
                    cout << "===Hexadecimal to Octal Conversion===\n";
                    cout << "Enter a Hexadecimal Number: ";
                    cin >> hexadecimal;
                    cout << "Result: " << hexadecimalToOctal(hexadecimal) << "\n";
                    break;

                default:
                    cout << "Invalid Choice. Please Choose Again.\n";
                    break;
                }
                break;/*Break For Sub_SubChoice Hexadecimal Conversion*/

            default:
                cout << "Invalid Choice. Please Choose Again.\n";
                break;
            }
            break; /*Break For SubChoice 5*/

        case 6:
            cout << "Others\n";
            cout << "========MENU========\n";
            cout << "(1) Factorial\n";
            cout << "(2) Fibonacci\n";
            cout << "(3) Primality Test\n";
            cout << "(4) Set Numeric Scale\n";
            SubChoice = _getch() - '0';

            switch (SubChoice)
            {
            case 1:
                cout << "===Factorial===\n";
                cout << "Enter a Number: ";
                a = IntegersOnly();
                cout << "Result:" << Factorial(a) << "\n";
                break;
            case 2:
                cout << "===Fibonacci===\n";
                cout << "Enter a Number: ";
                a = IntegersOnly();
                cout << Fibonacci(a) << "\n";
                break;
            case 3:
                cout << "===Primarility Test===\n";
                cout << "Enter a Number: ";
                a = IntegersOnly();
                cout << isPrime(a) << "\n";
                break;
            case 4:
                cout << "Set Numeric Scale" << endl;
                cout << "Enter maximum decimal places: ";
                DecimalPlaces = IntegersOnly();
                cout << "Numeric Scale set to " << DecimalPlaces << " decimal places.\n";
                cout << fixed << setprecision(DecimalPlaces);
                break;

            default:
                cout << "Invalid Choice. Please Choose Again.\n";
                break;
            }
            break; /*Break For SubChoice 6*/

        default:
            cout << "Invalid Choice. Please Choose Again.\n";
            break;
        }
    }
}
