#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int N; cin >> N;
	string S; cin >> S;

	int x, y, ans;

	vector<pair<int, char>> v;

	x = 0;
	y = 0;
	ans = 0;
	for (int i = 0; i < N; i++) 
	{
		int t; cin >> t;
		v.push_back({t, S[i]});
		
		if(S[i] == '1') y += 1;
	}

	ans = x + y;
	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) 
	{
		if (v[i].second == '1') y -= 1;
		else x += 1;

		if(i < (N - 1))
		{
			if(v[i].first != v[i + 1].first)
			{
				ans = max(ans, x+y);
			}
		}

		else ans = max(ans, x+y);
	}
	
	cout << ans << '\n';
	return 0;
}
