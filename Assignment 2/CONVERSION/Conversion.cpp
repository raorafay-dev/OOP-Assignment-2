#include <iostream>
using namespace std;
#include <sstream>
#include <string.h>
#include "conversion.h"

// default constructor
Conversion ::Conversion() {}

// parameterized constructor to initialize data member
Conversion ::Conversion(char *inp)
{
    ch = inp;
}

// destructor
Conversion ::~Conversion() {}

// setter
void Conversion ::setter(char *inp)
{
    ch = inp;
}

// getter
char *Conversion ::getter()
{
    return ch;
}

// for base
int Conversion ::FindBase(char ch[])
{
    int decimal_cnt = 0;
    int binary_cnt = 0;
    int octal_cnt = 0;
    int hexadecimal_cnt = 0;

    for (int i = 0; i < ch[i]; i++)
    {
        // for decimal
        if (ch[i] == '1' || ch[i] == '2' || ch[i] == '3' || ch[i] == '4' || ch[i] == '5' || ch[i] == '6' || ch[i] == '7' || ch[i] == '8' || ch[i] == '9')
        {
            decimal_cnt++;
        }

        // for binary
        if (ch[i] == '1' || ch[i] == '0')
        {
            binary_cnt++;
        }

        // for octal
        if (ch[i] == '1' || ch[i] == '2' || ch[i] == '3' || ch[i] == '4' || ch[i] == '5' || ch[i] == '6' || ch[i] == '7')
        {
            octal_cnt++;
        }

        // for hexadecimal
        if (ch[i] == 'A' || ch[i] == 'B' || ch[i] == 'C' || ch[i] == 'D' || ch[i] == 'E' || ch[i] == 'F')
        {
            hexadecimal_cnt++;
        }
    }

    // length of char
    int len_char = 0;
    for (int i = 0; i < ch[i]; i++)
    {
        len_char++;
    }

    // conditions for finding base

    // as octal and decimal numbers have similar form
    if (decimal_cnt == octal_cnt && decimal_cnt == len_char)
    {
        // program is not capable to deffrenciate between octal and decimal so it will return 0
        return 0;
    }

    // for hexadecimal
    if (hexadecimal_cnt > 0)
    {
        return 16;
    }

    // for decimal
    if (decimal_cnt == len_char)
    {
        return 10;
    }

    // for binary
    if (binary_cnt == len_char)
    {
        return 2;
    }

    // for octal
    if (octal_cnt == len_char)
    {
        return 8;
    }
}

// To Binary conversion
char *Conversion ::ToBinary(char *ch)
{
    // converting from character to integer (as there is no restriction on outside functions)
    int val = atoi(ch);

    // new array for storing binary numbers
    char *bin = new char[20];

    // iterating over the input number / logic for converting decimal to binary
    for (int i = 0; val > 0; i++)
    {
        int dig = val % 2;

        // converting integer to character (as there is no restriction on outside functions)
        stringstream strs;
        strs << dig;
        string temp_str = strs.str();
        char *char_type = (char *)temp_str.c_str();

        val = val / 2;

        // storing desired output
        bin[i] = *char_type;
    }

    return bin;
}

// To Octal conversion
char *Conversion ::ToOctal(char *ch)
{
    // converting from character to integer (as there is no restriction on outside functions)
    int val = atoi(ch);

    int temp;
    int i = 1;
    int oct = 0;
    int rem;
    temp = val;

    // logic for finding octal number
    while (temp != 0)
    {
        rem = temp % 8;
        oct += i * rem;
        i *= 10;
        temp /= 8;
    }

    // converting integer to character (as there is no restriction on outside functions)
    stringstream strs;
    strs << oct;
    string temp_str = strs.str();
    char *char_type = (char *)temp_str.c_str();

    // making a new char array and storing desired output
    char *octch = new char[10];
    for (int i = 0; i < char_type[i]; i++)
    {
        octch[i] = char_type[i];
    }

    return octch;
}

// To Hexadecimal
void Conversion ::ToHexaDecimal(char *ch)
{
    // converting from character to integer (as there is no restriction on outside functions)
    int val = atoi(ch);

    int temp;
    int i;
    int j = 0;
    int rem;

    char *hexa = new char[10];

    temp = val;
    while (temp > 0)
    {
        rem = temp % 16;
        if (rem < 10)
        {
            int dig = 48 + rem;
            stringstream strs;
            strs << hex;
            string temp_str = strs.str();
            char *char_type = (char *)temp_str.c_str();

            cout << *char_type;
        }
        else
        {
            int dig = 55 + rem;
            stringstream strs;
            strs << hex;
            string temp_str = strs.str();
            char *char_type = (char *)temp_str.c_str();

            cout << *char_type;
        }

        temp /= 16;
    }

    cout << hexa;
}
