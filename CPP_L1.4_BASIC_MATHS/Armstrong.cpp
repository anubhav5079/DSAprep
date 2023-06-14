#include <iostream>
using namespace std;
int main(){
int s,l=0,t;
cin>>s;
for(int i=s;i>0;i=i/10){
    t=i%10;
    
    l=l+(t*t*t);
}

if(l==s){
    cout<<"ARMSTRONG NUMBER"<<endl;

}
else
cout<<"NOT ARMSTRONG NUMBER"<<endl;
return 0;
}