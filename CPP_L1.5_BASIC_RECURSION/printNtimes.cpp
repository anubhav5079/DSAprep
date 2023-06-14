#include <iostream>
using namespace std;
int s=1,sum=0;

void a(int n){
    if(s==n+1){
        return;
    }
    cout<<s<<endl;
    s++;
    a(n);
}

int main(){
    int n;
    cin>>n;
    a(n);

return 0;
}