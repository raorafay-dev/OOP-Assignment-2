#ifndef CONVERSION_H
#define CONVERSION_H

class Conversion
{
    // private:

    char *ch;

public:
    // default constructor
    Conversion(){};

    // parameterized constructor to initialize data member
    Conversion(char *);

    // destructor
    ~Conversion() {}

    // setter
    void setter(char *);

    // getter
    char *getter();

    // for finding base
    int FindBase(char ch[]);

    // To Binary conversion
    char *ToBinary(char *ch);

    // To Octal conversion
    char *ToOctal(char *ch);

    // To HexaDecimal conversion
    char *ToHexaDecimal(char *ch);
};

#endif