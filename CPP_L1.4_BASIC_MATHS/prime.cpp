#include <iostream>
using namespace std;
int main(){
    int s,count=0;
        cin>>s;
    if(s==0 || s==1){
        cout<<"NEITHER PRIME NOR COMPOSITE";
    }
    for(int i =2;i<s;i++){
        if(s%i==0){
            cout<<"Composite";
            count=1;
            break;      
        }
        
       
    }
    if(count==0){
        cout<<"Prime";
    }
return 0;
}