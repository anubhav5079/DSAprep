#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    // int s=65;
    for(int i=65;i<a+65;i++){
        for(int j=65;j<=i;j++){
            cout<<char(j);
        }
            
        cout<<endl;
    }

return 0;
}