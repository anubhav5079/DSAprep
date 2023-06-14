#include <iostream>
using namespace std;
void cp(int n){
    int s=0;
    int p=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        cout<<s<<" ";
        sum=s;
        s=p;
        p=sum+p;

    }
}

int main(){
int n;
cin>>n;
cp(n);
return 0;
}