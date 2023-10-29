#include<bits/stdc++.h>
using namespace std;

// int longestSublist(vector<string>& words) {
//     int longestLength = 0;
//     int currentLength = 0;
//     char currentLetter = '\0'; // initialize with null character
    
//     for (const string& word : words) {
//         if (word.empty()) continue; // skip empty strings
        
//         if (currentLetter == '\0') {
//             currentLetter = word[0];
//             currentLength = 1;
//         } else if (currentLetter == word[0]) {
//             currentLength++;
//         } else {
//             currentLetter = word[0];
//             currentLength = 1;
//         }
        
//         if (currentLength > longestLength) {
//             longestLength = currentLength;
//         }
//     }
    
//     return longestLength;
// }

int longestSublist(vector<string>&words) {
    int longestLength = 0, currentLength = 0;
    char c = '\0';
    for(int i = 0; i < (int) words.size(); i++) {
        string s = words[i];
        if(c == s[0]) {
            currentLength++;
        }
        else {
            c = s[0];
            currentLength = 1;
        }
        if(currentLength > longestLength) longestLength = currentLength;
    }
    return longestLength;
}

int main() {
    vector<string> words {"faction", "fight", "and", "are", "attitude"};
    cout << longestSublist(words);
    return 0;
}