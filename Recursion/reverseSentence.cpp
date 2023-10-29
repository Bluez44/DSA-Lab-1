#include<bits/stdc++.h>
using namespace std;



// void helper(string s, string& res, int index){
//     if (index < 0){
//         res += s;
//         return;
//     }
//     if (s[index] == ' '){
//         res+= s.substr(index+1, s.length()-index-1);
//         res+= " ";
//         s= s.substr(0, index);
//         helper (s, res, s.length()-1);
//     }
//     else {index--; helper(s, res, index);}
// }
// string reverseSentence(string s) {
//     string res = "";
//     helper(s, res, s.length()-1);
//     return res;
// }

string reverse_sentence(string &s) {
    int blank = s.rfind(' ');
    if(blank>0) {
        string sub_s = s.substr(0,blank);
        return s.substr(blank+1) + " " + reverse_sentence(sub_s);
    }
    else {
        return s;
    }
}

string reverseSentence(string s) {
    return reverse_sentence(s);
}

int main() {
    string s = "data structure and algorithm is scary";
    cout << reverseSentence("data structure and algorithm is scary").length() << " " << s.length();
    return 0;
}