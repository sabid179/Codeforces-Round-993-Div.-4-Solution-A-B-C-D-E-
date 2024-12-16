#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define using_fast_io                 \
	ios_base::sync_with_stdio(false); \
	cin.tie(nullptr);                 \
	cout.tie(nullptr);

typedef long long int llint;
typedef unsigned long long int ullint;

void soln()
{
	string str;
	cin >> str;
	string sol = "";

	for (int i = str.length() - 1; i >= 0; i--)
	{
		if (str[i] == 'p')
		{
			sol += 'q';
		}
		else if (str[i] == 'q')
		{
			sol += 'p';
		}
		else
		{
			sol += str[i];
		}
	}

	cout << sol << endl;
}

int main()
{
	using_fast_io;

	int t = 1;
	cin >> t;
	while (t--)
	{
		soln();
	}
	return 0;
}