#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{

	ll int n;
	cin >> n;

	vector<ll int> a(n);
	vector<ll int> shellpos(3);
	for (ll int i = 0; i < 3; i++)
	{
		shellpos[i] = i;
	}

	vector<ll int> counter(3);
	for (ll int i = 0; i < n; i++)
	{
		ll int a, b, g;
		cin >> a >> b >> g;
		a--, b--, g--;

		swap(shellpos[a], shellpos[b]);
		counter[shellpos[g]]++;
	}

	cout << *max_element(counter.begin(), counter.end()) << endl;
}
int main()
{
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// int t;
	// cin>>t;
	// while(t--){
	solve();
	// }
	return 0;
}