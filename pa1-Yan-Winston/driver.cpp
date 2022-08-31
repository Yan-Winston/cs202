// By: Winston Yan
// On: 5/26/2022
// For: CS 202 Programming Assignment 1

#include <iostream>
#include <fstream>
#include <string>
#include "word_analyzer.h"

#define BUFFSIZE 100


int getWords(int size, string strings[], string filename) {
    int counter = -1;

    ifstream fin;
    fin.open(filename);
    if (fin.is_open()) {
        counter += 1;
        string temp;
        while (fin.good()) {
            fin >> temp;
            strings[counter] = temp;
            counter++;
        }
        fin.close();
    } else {
        cout << "Sorry, could not open " << filename << " for reading" << endl;
    }
    return counter;
}

string findMaxWord(int size, string strings[]) {
    string last_word;
    for (int i=0; i < size; i++) {
        if (i>0) {
            if (toLower(last_word).compare(toLower(strings[i])) < 0) {
                last_word = strings[i];
            }
        } else {
            last_word = strings[i];
        }
    }
    return last_word;
}


int main (int argc, const char *argv[]) {
    string file_contents[BUFFSIZE];
    int size = 0;
    int number_of_letters = 0;
    if (argc != 1) {
        size = getWords(BUFFSIZE, file_contents, argv[1]);
        if (size != -1) {
            for (int i=0; i < size; i++) {
                number_of_letters += countLetters(file_contents[i]);
            }
            cout << "There are " << number_of_letters << " letters in your file." << endl;
            number_of_letters = 0;
            for (int i=0; i < size; i++) {
                number_of_letters += countLowerCase(file_contents[i]);
            }
            cout << "There are " << number_of_letters << " lower case letters in your file." << endl;
            number_of_letters = 0;
            for (int i=0; i < size; i++) {
                number_of_letters += countUpperCase(file_contents[i]);
            }
            cout << "There are " << number_of_letters << " upper case letters in your file." << endl;
            number_of_letters = 0;
            for (int i=0; i < size; i++) {
                number_of_letters += countVowels(file_contents[i]);
            }
            cout << "There are " << number_of_letters << " vowels in your file." << endl;
            cout << "The last word alphabetically is: " << findMaxWord(size, file_contents) << endl;
        }
    } else {
        cout << "Correct usage:" << endl << "./text_analyzer filename" << endl;
    }
    return 0;
}


