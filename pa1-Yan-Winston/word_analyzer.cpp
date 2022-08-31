// By: Winston Yan
// On: 5/26/2022
// For: CS 202 Programming Assignment 1

#include <iostream>
#include <string>
#include "word_analyzer.h"

const string LOWERCASE = "abcdefghijklmnopqrstuvwxyz"; 
const string UPPERCASE = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string VOWELS = "aeiouAEIOU";

int countLowerCase(string s) {
    int count = 0;
    for (int i=0; i < s.size(); i++) {
        char c = s.at(i);
        if (LOWERCASE.find(c) != string::npos) {
            count += 1;
        }
    }
    return count;
}

int countUpperCase(string s) {
    int count = 0;
    for (int i=0; i < s.size(); i++) {
        char c = s.at(i);
        if (UPPERCASE.find(c) != string::npos) {
            count += 1;
        }
    }
    return count;
}

int countVowels(string s) {
    int count = 0;
    for (int i=0; i < s.size(); i++) {
        char c = s.at(i);
        if (VOWELS.find(c) != string::npos) {
            count += 1;
        }
    }
    return count;
}

int countLetters(string s) {
    int count = 0;
    for (int i=0; i < s.size(); i++) {
        char c = s.at(i);
        if (UPPERCASE.find(c) != string::npos || LOWERCASE.find(c) != string::npos) {
            count += 1;
        }
    }
    return count;
}

//this is a function I used to make .compare work correctly, while also removing punctuation from the words (not permanently tho)
string toLower(string s) {
    string temp = "";
    for (int i=0; i<s.size(); i++) {
        char c = s[i];
        if (UPPERCASE.find(c) != string::npos || LOWERCASE.find(c) != string::npos) {
            if ((int(c) <= 90 && int(c) >= 65) && (UPPERCASE.find(c) || LOWERCASE.find(c))) {
                c += 32;
            }
            temp += c;
        }
    }
    return temp;
}