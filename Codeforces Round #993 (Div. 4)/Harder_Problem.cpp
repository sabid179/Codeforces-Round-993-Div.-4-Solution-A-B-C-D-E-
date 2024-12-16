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
	int N;
	cin >> N;
	int arr[N];

	vector<int> sol;
	map<int, int> mp;

	int temp_done = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (mp[arr[i]] == 0)
		{
			sol.push_back(arr[i]);
			temp_done++;
		}
		mp[arr[i]]++;
	}
	int temp = 1;

	while (temp_done != N)
	{
		if (mp[temp] != 0)
		{
			temp++;
			continue;
		}
		sol.push_back(temp);
		temp++;
		temp_done++;
	}

	for (auto x : sol)
	{
		cout << x << ' ';
	}
	cout << endl;
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