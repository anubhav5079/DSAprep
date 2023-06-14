#include <iostream>
using namespace std;
int main(){
    int n,s;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=n;i>0;i=i/10){
        s=i%10;
        cout<<s;

    }

return 0;
}