#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    cin >> s;


    //pre compute
    int hash[26]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin>> c;
        //fetch

    }

    return 0;
}