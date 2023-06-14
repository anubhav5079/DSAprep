#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char s= 'A'+n-1;
    
    for(int i=0;i<n;i++){
        char p=s;
        for(int j=0;j<=i;j++){
            cout<<p<<" ";
            p++;

        }
        s--;
        cout<<endl;
    }
return 0;
}