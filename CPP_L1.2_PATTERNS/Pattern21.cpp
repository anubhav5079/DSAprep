#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int u=1;
    for(int i=0;i<n;i++){
            cout<<"*";
    }
    cout<<endl;
     for(int i=0;i<n-2;i++){
        for(int j=u;j<=n;j++){
            if(j==1){
                cout<<"*";
            }
            else if(j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        
        }
        cout<<endl;
     }
     for(int i=0;i<n;i++){
            cout<<"*";
    }
    cout<<endl;
return 0;
}