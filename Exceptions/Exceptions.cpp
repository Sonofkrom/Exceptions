// Marcus Needham
// CIS 1202 501
// April 29 2023

#include <iostream>

using namespace std;

class invalidCharacterException : public exception {
};

class invalidRangeException : public exception {
};

char character(char start, int offset);

int main()
{
    try {
        cout << character('a', 1);
    }
    catch(invalidRangeException x){
        cout << "Invalid Range!\n";
    }
    catch (invalidCharacterException x) {
        cout << "Invalid Character!\n";
    }
}

char character(char start, int offset) {
    if (start > 96 && start < 123) {
        int test = start + offset;
        if (test <= 96 || test >= 123)
            throw invalidRangeException();
        return char(test);
    }
    else if (start > 64 && start < 91) {
        int test = start + offset;
        if (test <= 64 || test >= 91)
            throw invalidRangeException();
        return char(test);
    }
    else
        throw invalidCharacterException();
}