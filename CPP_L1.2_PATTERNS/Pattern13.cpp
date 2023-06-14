#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int s=1;
    for(int i=0;i<=a;i++){
        for(int j=1;j<=i;j++){
            
            cout<<s<<" ";
            s=s+1; 
   
        }
        cout<<endl;
    }

return 0;
}