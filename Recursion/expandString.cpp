#include<iostream>
#include<string>
using namespace std;
// String s contains lowercase letters, digits, "(" and ")", satisfying the following rules:
// - Two digits cannot be adjacent.
// - Two "(" cannot be adjacent.
// - One "(" and one ")" cannot be adjacent.
// - After any digit, there must be "(".
// - The quantities of "(" and ")" are equal.
// Change string s until new string t created, t contains only lowercase letters. These are changing rules:
// - Sub-strings with form "n(p)", can change to "pp...p" (n times p), where n is a digit and p is a string.
// // - If p still contains "(", ")" or digits, continue to implement the above changing method.  
// Where s is a string with the above form; return the result is a string containing only lowercase letters.
// Example:

// - String "2(ab3(cde)x)" changes into "abcdecdecdexabcdecdecdex".
// - String "2(x)3(z)" changes into "xxzzz".

int find_Bracket_index(string &s, int index, int n_openBrackets) {
    if(s[index] == '(') {
        n_openBrackets++;
        return find_Bracket_index(s, index+1, n_openBrackets);
    }
    else if(s[index] == ')') {
        n_openBrackets--;
        return find_Bracket_index(s, index+1, n_openBrackets);
    }
    else if(n_openBrackets == 0) return index-1;
    else return find_Bracket_index(s, index+1, n_openBrackets);
}

string coppy_string(string &s, int times) {
    if(times == 0) return "";
    else {
        times--;
        return s.substr(2,s.size()-3) + coppy_string(s, times);
    }
}

void expand_string(string &s, int index) {
    if(s[index]>= '0' && s[index]<= '9') {
        int i = find_Bracket_index(s,index+2, 1);
        string sub_s = s.substr(index,i+1-index);
        //cout << i << " " << sub_s << endl << "s:" << s << endl;
        s = s.substr(0,index) + coppy_string(sub_s, sub_s[0] - '0') + s.substr(i+1);
        //cout << "s_after:" << s << endl;
        expand_string(s , index);
    }
    else if(s[index]>= 'a' && s[index]<='z') {
        expand_string(s, index+1);
    }
    else {
        return;
    }
}



string expand(string s) {
    string tmp = "";
    expand_string(s, 0);
    return s;
}



int main() {
    cout << expand("2(ab3(cde)x)") << "\n";
    // // (ab3(cde)x)(ab3(cde)x)
    // // ab3(cde)x)(ab3(cde)x)
    // cout << expand("2(x0(y))3(z)") << "\n";
    // // (x0(y))3(z)(x0(y))3(z)
    // // 
    // string s = "2(x0(y))3(z)";
    // int i = find_Bracket_index(s, 2, 1);
    // string sub_s = s.substr(0,i+1); cout << sub_s << endl;
    // s = coppy_string(sub_s, sub_s[0] - '0') + s.substr(i+1); cout << s << endl;
    // coppy_string(s,tmp,3);
    // cout << tmp;
    return 0;
}