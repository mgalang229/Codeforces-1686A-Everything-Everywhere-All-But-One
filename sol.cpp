#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
using namespace std;

#define ll long long
#define ld long double
#define uint unsigned int
#define ull unsigned long long

double a[51];
int n;

double getAve(int id) {
	double sum = 0;
	for (int i = 0; i < n; i++)
		if (i != id) sum += a[i];
	return (sum / (n - 1));
}

void solve() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	bool ok = false;
	for (int i = 0; i < n; i++)
		ok |= getAve(i) == a[i];
	printf(ok ? "YES\n" : "NO\n");
}

int main() {
	
	int t;
	scanf("%d", &t);
	while (t--) solve();
	
	return 0;
}
