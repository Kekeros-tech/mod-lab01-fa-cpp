// Copyright 2022 UNN-IASR
#include "fun.h"
#include <ctype.h>

unsigned int faStr1(const char *str) {
    int count = 0;
    bool inWord = false;
    int iteration = 0;
    bool containsNumber = false;
    while (str[iteration]) {
        char currentChar = str[iteration];
        if (inWord == false && currentChar != ' ')
        {
            inWord = true;
            count++;
        }
        else if (inWord = true && currentChar == ' ')
        {
            if (containsNumber) {
                containsNumber = false;
                count--;
            }
            inWord = false;
        }
        if (inWord = true && isdigit(currentChar)) {
            containsNumber = true;
        }
        iteration++;
    }
    if (containsNumber) {
        return count - 1;
    }
    return count;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}
