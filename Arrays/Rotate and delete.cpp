
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#define pb push_back
#define ll long long
#define fr(a,b) for(ll i=a;i<b;i++)
#define prDouble(x) cout << fixed << setprecision(10) <<x
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
void solve() {
  int n;
  cin >> n;
  int a[n];
  fr(0, n) {
    cin >> a[i];
  }
  if (n == 1) {
    cout << a[0] << "\n";
    return;
  }
  if (n % 2 == 0) {
    cout << a[((n - 2) / 4) + 1];
  }
  else {
    cout << a[((n - 3) / 4) + 2];
  }
  cout << "\n";
}
int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}