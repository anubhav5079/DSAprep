#include <iostream>
using namespace std;
// int main(){
//       int a;
//     cin>>a;
//     int s=a;
//     for(int i=0;i<=a;i++){
//         for(int j=s;j>0;j--){
//             cout<<" ";
            
           
//         }
//         s--;
//           for(int k=0;k<2*i-1;k++){
//             cout<<"*";
            
//         }
        
//         cout<<endl;
//     }

// }

int main(){
    int n;
    cin>>n;
    int s=65;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
            char s ='A';
        for(float j=0;j<(2*i)+1;j++){
            cout<<s;
            if(j<= s){
                s++;

            }
            else 
            s--;
        }
         for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}