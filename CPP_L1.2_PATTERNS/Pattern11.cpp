#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=1;
    int r;
    
    for(int i=0;i<n;i++){
            r=s;
        for (int j = 0; j <= i; j++)
        {
            cout<<s;
            if(s==1){
                s--;
            }
            else
            s++;

        }
        if(r==0){
            s=1;
        }
        else{
            s=0;
        }
        
        
        
        
        
        cout<<endl;
    }

return 0;
}