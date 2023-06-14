#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void cp(string s){
    string t;
    int temp;
    int p=0;
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        t+=s[i];
    }
        if(t==s){
            cout<<"yes";
        }
        else{
            cout <<"No";
        }
}
int main(){
string s;
cin>>s;
cp(s);

return 0;
}