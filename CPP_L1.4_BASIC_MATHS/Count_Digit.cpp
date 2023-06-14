#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int count = 0;
    int a = N;
    int p=N;
    for (int i = N; i > 0; i = i / 10)
    {
        p =  p% 10;
        if (a % p == 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}