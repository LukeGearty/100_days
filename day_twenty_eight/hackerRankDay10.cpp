#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    string binaryConvert = "";
    int x = n;
    while (x > 0) {
        int curr = x % 2;
        binaryConvert =  to_string(curr) + binaryConvert;
        x /= 2;
    }
    
    int consecutiveOnes = 0;
    int maximum = 0;
    
    for (int i = 0; i < binaryConvert.length(); i++) {
        if (binaryConvert[i] == '1') {
            consecutiveOnes = consecutiveOnes + 1;
        }
        else {
            if (maximum < consecutiveOnes) {
                maximum = consecutiveOnes;
            }
            consecutiveOnes = 0;
        }
    }
    
    if (maximum > consecutiveOnes) {
        cout << maximum << endl;
    }
    else {
        cout << consecutiveOnes << endl;
    }
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
