#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	int N, K, Q; cin >> N >> K >> Q;
	
	vector<int> v(N+1, 0);
	unordered_map<int, int> ump;

	for(int i=1; i<=K; i++)
	{
		int X; cin >> X;
		v[X] = 1;
		ump[i] = X;
	}

	for(int i=1; i<=Q; i++)
	{
		int J; cin >> J;

		if((ump[J] != v.size()-1) && (v[ump[J] + 1] != 1))
		{
			v[ump[J]] = 0;
			ump[J] += 1;
			v[ump[J]] = 1; 
		}
	}

	for(int i=0; i<v.size(); i++)
		if(v[i] == 1)
			cout << i << " ";
	cout << '\n';

	return 0;
}
