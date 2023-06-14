#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int s=a+65;
    for(int i=65;i<=a+65;i++){
        for(int j=65;j<s;j++){
            cout<<char(j);
            

        }
            s--;
        cout<<endl;
    }

return 0;
}