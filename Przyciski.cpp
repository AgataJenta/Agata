#include <iostream>
#include <vector>

using namespace std;

/*vector<int> V;

V.push_back(123);
for(int i = 0; i < V.size(); i++) {
	cout << V[i] << endl;
}
V.clear();

*/

int T[1000005];

int main()
{
	vector<int> V;
	int m,n,p,max = 0,tmax = 0;
	cin >> n >> m;
	for (int i=0; i < m; i++)
	{
		cin >> p;
		if (p <= n)
		{
			T[p]++;
			if ( T[p] > max )
				{ 
					max = T[p] ;
				}
			V.push_back(p);
		}
		else
		{ 
			tmax=tmax+max;
			max=0;
			for (int j=0; j < V.size(); j++)
			{
				T[ V[j] ] = 0;
			}
			V.clear();


		}	
	}


	//cout << max << endl; 
	for (int i=1; i <= n; i++)
		{
			cout << tmax+T[i] << " ";
		}
	cout << endl;
	return 0;	
}
