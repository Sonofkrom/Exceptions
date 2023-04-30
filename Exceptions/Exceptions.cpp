// Marcus Needham
// CIS 1202 501
// April 29 2023

#include <iostream>

char character(char start, int offset);

int main()
{
    try {
        character('a', -1);
    }
    catch(invalidRangeException){

    }
    catch (invalidCharacterException) {

    }
}

class invalidCharacterException {
};

class invalidRangeException {
};

char character(char start, int offset) {
    return 'a';
}