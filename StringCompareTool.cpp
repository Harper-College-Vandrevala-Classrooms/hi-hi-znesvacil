#include <iostream>
using namespace std;

void strcmp_case_insensitive(string str1, string str2) {
   
    string lstr1, lstr2; // Our strings, set to be in lowercase
    int result; // The end result of our comparison
    
    for (int i = 0; i < str1.size(); i++) {
        lstr1 += static_cast<char>(tolower(str1[i]));
    } // Sets str1 to be equal to our first string, but in lowercase
   
    for (int i = 0; i < str2.size(); i++) {
        lstr2 += static_cast<char>(tolower(str2[i]));
    } // Sets str2 to be equal to our second string, but in lowercase
    
    const char* lstr1_char = lstr1.c_str(); // Copies our lstr variables to the variable that strcmp uses
    const char* lstr2_char = lstr2.c_str();
    
    result = strcmp(lstr1_char, lstr2_char); // Compares our new lowercase string values
    
    cout << "The comparison of " << str1 << " and " << str2 << " returns "<< result << ".\n";
    
}

int main() {
    string inputstr1, inputstr2;
    strcmp_case_insensitive("STRING ONE", "STRING TWO"); // These two are the same,
    strcmp_case_insensitive("STRING ONE", "string two"); // but different cases. They should output the same thing.
    strcmp_case_insensitive("string one", "STRING ONE"); // Despite being different cases, this'll give an output of zero.
    strcmp_case_insensitive("string two", "string one");
    
    cout << "\nInput your first string here: ";
    cin >> inputstr1;
    cout << "Input your second string here: ";
    cin >> inputstr2;
    cout << "\n";
    strcmp_case_insensitive(inputstr1, inputstr2);
    
    return 0;
    
}
