// Copyright 2022 UNN-IASR
#include "fun.h"
#include <ctype.h>
#include <math.h>

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
        else if (inWord == true && currentChar == ' ')
        {
            if (containsNumber) {
                containsNumber = false;
                count--;
            }
            inWord = false;
        }
        if (inWord == true && isdigit(currentChar)) {
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
    int count = 0;
    bool inWord = false;
    int iteration = 0;
    bool correctWord = false;
    while (str[iteration]) {
        char currentChar = str[iteration];
        int numberOfChar = (int)currentChar;
        if (inWord == false && currentChar != ' ')
        {
            inWord = true;
            if (65 <= numberOfChar && numberOfChar <= 90) {
                correctWord = true;
            }
            count++;
        }
        else if (inWord == true && currentChar == ' ')
        {
            if (correctWord) {
            }
            else {
                count--;
            }
            correctWord = false;
            inWord = false;
        }
        else if (inWord == true && currentChar != ' ') {
            if (numberOfChar < 97 || numberOfChar > 122)
            {
                correctWord = false;
            }

        }
        iteration++;
    }
    if (correctWord == false) {
        return count - 1;
    }
    return count;
}

unsigned int faStr3(const char *str) {
    int count = 0;
    float characters = 0;
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
        else if (inWord == true && currentChar == ' ')
        {
            inWord = false;
        }
        if (inWord == true) {
            characters++;
        }
        iteration++;
    }
    return round(characters / count);
}
