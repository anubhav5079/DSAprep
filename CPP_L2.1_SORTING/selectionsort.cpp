#include <iostream>
using namespace std;
void se_sort(int a[],int n){
    for (int i = 0; i <= n-2; i++)
    {
        int min=i;
        for(int j=0;j<=n-1;j++){
            if(a[j]<a[i]){
                min=j;
            }
        }
        swap(a[i],a[min]);
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