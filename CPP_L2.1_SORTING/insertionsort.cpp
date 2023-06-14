#include <iostream>
using namespace std;
void se_sort(int a[],int n){
    for (int i = 0; i <= n-2; i++)
    {
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j-1],a[j]);
            j--;
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
    se_sort(a,s);
     for(int i=0;i<s;i++){
        cout<<a[i]<<" ";

    }
return 0;
}