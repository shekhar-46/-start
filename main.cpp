#include <bits/stdc++.h>
#define int long long
#define ld long double
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mod 1000000007
const int N = 1e5 + 10;
using namespace std;




void solve()
{
   int n;
   cin >> n;
   vector<int>a(n),b(n);
   for(int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   for(int i = 0; i < n; i++)
   {
      cin >> b[i];
   }
   vector<pair<int,int>>vec;
   for(int i = 0; i < n; i++)
   {
      vec.pb({a[i] , b[i]});
   }
   sort(vec.begin(),vec.end());
   for(auto it : vec)
      cout << it.first << " ";
   cout << endl;
   for(auto it : vec)
      cout << it.second << " ";
   cout << endl;
}




int32_t main()
{
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   int T;
   cin >> T;
   while(T--)
   {
      solve(); // shekhar_46
   }
}