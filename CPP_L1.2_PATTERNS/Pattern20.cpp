#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=(2*n)-2;
     int u=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";

        }
        for(int i=s;i>0;i--){
            cout<<" ";
        }
            s=s-2;
        for(int j=0;j<=i;j++){
            cout<<"*";

        }   
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
       
        for(int j=n-1;j>i;j--){
            cout<<"*";
        }
         for(int j=0;j<u;j++){
            cout<<" ";
        }
        u=u+2;
        for(int j=n-1;j>i;j--){
            cout<<"*";
        }    
        
        cout<<endl;
    }

return 0;
}