#include <iostream>
using namespace std;
int main(){
    int n,s,l=0;
    cout<<"Enter the value "<<endl;
    cin>>n;
    for(int i=n;i>0;i=i/10){
        s=i%10;
        l=(l*10)+s;
    }
        cout<<l<<endl;
    if(l==n){
        cout<<"Pallindrome"<<endl;
    }
    else{
        cout<<"Not Pallindrome"<<endl;
    }

return 0;
}   