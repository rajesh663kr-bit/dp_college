#include <bits/stdc++.h>
using namespace std;

int main() {
    char dir;
    string input_str;
    
    cin >> dir;
    cin >> input_str;
    
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    string original = "";
    
    for (char c : input_str) {
        int idx = keyboard.find(c);
        
        if (dir == 'R') {
            original += keyboard[idx - 1];
        } else { // dir == 'L'
            original += keyboard[idx + 1];
        }
    }
    
    cout << original << endl;
    return 0;
}
