#include <iostream>
using namespace std;
int s=1,sum=0;

void a(int n){
    if(s==n+1){
        return;
    }
    
    sum=sum+s;
    s++;
    a(n);
}

int main(){
    int n;
    cin>>n;
    a(n);
    cout<<sum<<endl;

return 0;
}