// #include <iostream>
// using namespace std;
// int main(){
//     int n,m,t;
//     cin>>n>>m;
//     int l=min(m,n);
//     int q=max(m,n);
//     for(int i=2;i<=l;i++){
//         if(q%i==0){
//              t=i;
//         }
//     }
//     cout<<t;

// return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int n,m,q;
    cin>>n>>m;
    for(int i=1;i<=min(m,n);i++){
        if(m%i==0 && n%i==0){
            q=i;

        }
    }
        cout<<q;
return 0;
}