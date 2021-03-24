#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------*/
#define int long long
#define  grub_efi() ios_base::sync_with_stdio(false),cin.tie(nullptr);
/*---------------------------------------------------------------*/
int gcd(int a,int b){return ( b==0 ? a :gcd(b,a%b));}



void solve(){
   int n,m,k;cin >> n  >> m >> k;
   int ans = 0;
   int a[m+1];
   for(int i = 0 ; i <= m ;++i )cin >> a[i];
   for(int i = 0 ; i <= m ;++i ){
      if(__builtin_popcount(a[i]^a[m]) <= k){
         ans++;
      }
   }
   cout << --ans << "\n";
}

signed main(){
    grub_efi();
    int tests = 1;
   // cin >> tests;
    while (tests-->0)solve();
    return 0;
}


