#include <iostream> 
using namespace std;

int main()
{
    int n,m,a,b;
    int suma=0;
    cin >> n >> m;
    for (int i=0; i<n; i++)
       {
            for (int j=0; j<m; j++)

            {
                cin >> a >> b;
                if (a==1 || b==1)
                    suma=suma+1;

            }
       }     
    
    cout << suma << endl;

    return 0;
} 
