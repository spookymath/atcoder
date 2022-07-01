#include <iostream>
using namespace std;

int main()
{
	string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int N, X; cin >> N >> X;

	int i = 1;
	while(true)
	{
		if((i*N) < X) i += 1;
		else break;
	}

	cout << s[i-1] << '\n';

	return 0;
}
