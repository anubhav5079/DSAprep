#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s=n/2;
    int count=0;
    for (int i = 0; i < n/2; i++)
    {
        for(int j=0;j<(n/2)-i-1;j++){
            cout<<" ";

        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
         for(int j=0;j<(n/2)-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
     for (int i = n/2; i < n; i++)
    {
       int l=i-(n/2);
        for(int j=1;j<=l;j++){
            cout<<" ";

        }
        
        for(int j=0;j<2*s-1;j++){
            cout<<"*";
         }
         s--;
        for(int j=1;j<=i;j++){
            cout<<" ";

        }
        cout<<endl;
    }

    
}

