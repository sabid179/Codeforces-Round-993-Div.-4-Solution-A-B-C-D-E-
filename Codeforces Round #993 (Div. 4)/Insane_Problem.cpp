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
	llint k, l1, r1, l2, r2;
	cin >> k >> l1 >> r1 >> l2 >> r2;

	llint pairs_cnt = 0;

	vector<llint> v;
	llint temp = 1;
	while (temp <= r2)
	{
		v.push_back(temp);
		temp *= k;
	}

	for (auto x : v)
	{
		llint lo = l1, hi = r1;
		llint left = INT_MAX, right = INT_MIN;
		while (lo <= hi)
		{
			llint mid = lo + (hi - lo) / 2;
			if ((x * mid) >= l2 && (x * mid) <= r2)
			{
				left = min(left, mid);
				hi = mid - 1;
			}
			else if ((x * mid) < l2)
			{
				lo = mid + 1;
			}
			else
			{
				hi = mid - 1;
			}
		}

		lo = l1;
		hi = r1;
		while (lo <= hi)
		{
			llint mid = lo + (hi - lo) / 2;
			if ((x * mid) >= l2 && (x * mid) <= r2)
			{
				right = max(right, mid);
				lo = mid + 1;
			}
			else if ((x * mid) < l2)
			{
				lo = mid + 1;
			}
			else
			{
				hi = mid - 1;
			}
		}
		if (left == INT_MAX || right == INT_MIN)
		{
			continue;
		}
		pairs_cnt += (right - left + 1);
	}

	cout << pairs_cnt << endl;
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