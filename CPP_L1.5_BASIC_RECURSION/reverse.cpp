#include <iostream>
using namespace std;
void p(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}

void cp(int s[],int a){
        int ans[a];
    for(int i=a-1;i>=0;i--){
        ans[a-i-1]=s[i];

    }
    p(ans,a);
}
int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   cp(arr, n);
   return 0;
}