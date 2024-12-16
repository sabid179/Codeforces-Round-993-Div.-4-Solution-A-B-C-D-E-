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
	int m, a, b, c;
	cin >> m >> a >> b >> c;
	int seats_left = m * 2;
	seats_left -= min(a, m);
	seats_left -= min(b, m);
	seats_left -= min(seats_left, c);

	cout << ((m * 2) - seats_left) << endl;
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