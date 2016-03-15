#include <iostream> 
using namespace std;

bool V[1000005];
int main()
{
    long long n, k;
    long long c;
    cin >> n >> k;
    for(int i=0; i < n; i++ ) 
    {
        cin >> c;
        if (c <= n * k && c % k == 0) 
        {    
            V[c/k] = true;
        }
    }

    for(int i=1; i <= n+1; i++) 
    {
        if (V[i] == false)
        {
            cout << i*k << endl;
            break;
        } 

    }   
    return 0;
} 