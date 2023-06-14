#include <iostream>
using namespace std;
void bu_sort(int a[],int n){
    for (int i = n-1; i >=1; i--)
    {
        int min=i;
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
        
    }
    
}

int main(){
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];

    }
    bu_sort(a,s);
     for(int i=0;i<s;i++){
        cout<<a[i]<<" ";

    }
return 0;
}