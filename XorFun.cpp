#include<bits/stdc++.h>
using namespace std;
int solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (auto &a : v)
		cin >> a;
	sort(v.begin(), v.end());
	for (int k = 1; k <= 1024; k++)
	{
		vector<int> newSet;
		for (auto a : v)
			newSet.push_back(a ^ k);
		sort(newSet.begin(),newSet.end());
		if (newSet == v) return k;
	}
	return -1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cout<<solve()<<'\n';
	}
}