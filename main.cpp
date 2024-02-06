#include <bits/stdc++.h>
#define int long long
#define ld long double
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mod 1000000007
const int N = 1e5 + 10;
using namespace std;

bool isprime(int n)
{
    if(n <= 1)
        return true;
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    for(int i = 5; (i * i) <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}


void solve()
{
   int n;
   cin >> n;
   vector<int>v(n);
   for(int i = 0; i < n; i++)
      cin >> v[i];
  

   int ans = *max_element(v.begin(),v.end()) - *min_element(v.begin(),v.end()); 
   if(isprime(n))
   {
      cout << ans << endl;
      return;
   }

   
   vector<int>pref(n);
   pref[0] = v[0];
   for(int i = 1; i < n; i++)
      pref[i] = pref[i - 1] + v[i];
   

   vector<int>divisors; // 1 aur n nahi hai
   for(int i = 2; i < n; i++)
   {
      if(n % i == 0)
         divisors.pb(i);
   }
   
   for(int i = 0; i < (divisors.size()); i++)
   {
      int j = divisors[i];
      int jj = 0;
      int mini = LONG_LONG_MAX;
      int maxi = LONG_LONG_MIN;
      while(j <= n)
      {
         int sum = pref[j - 1] - ((j == divisors[i]) ? 0LL : pref[jj - 1]);
         maxi = max(maxi , sum);
         mini = min(mini , sum);
         jj = j;
         j += divisors[i];
      }
      ans = max(ans , (maxi - mini));
   }
   cout << ans << endl;
}




int32_t main()
{
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   //testcase
   int T; cin >> T; while(T--)
   solve();
   return 0;
   // shekhar_46
}