// BT16: Pig Latin
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string pigLatinWord(const string& word) {
    if (isVowel(word[0])) {
        return word + "AY";
    } else {
        return word.substr(1) + word[0] + "AY";
    }
}

string pigLatinSentence(const string& sentence) {
    istringstream iss(sentence);
    vector<string> words;
    string word;

    while (iss >> word) {
        words.push_back(word);
    }

    string pigLatinResult;
    for (const string& word : words) {
        pigLatinResult += pigLatinWord(word) + " ";
    }

    return pigLatinResult;
}

int main() {
    string inputSentence;
    cout << "Enter a sentence: ";
    getline(cin, inputSentence);

    string pigLatinResult = pigLatinSentence(inputSentence);

    cout << "Pig Latin: " << pigLatinResult << endl;

    return 0;
}