#include <iostream>
using namespace std;
int main(){

int n,p=0,q=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int hash[13]={0};
for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
}

for(int i=0;i<n;i++){

    if(hash[arr[i]]>hash[arr[i+1]]){
        p=hash[arr[i]];
    }
    else{
        p=hash[arr[i+1]];
    }

}


return 0;
}