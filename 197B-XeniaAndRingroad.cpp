#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------*/
#define int long long
#define  grub_efi() ios_base::sync_with_stdio(false),cin.tie(nullptr);
/*---------------------------------------------------------------*/
int gcd(int a,int b){return ( b==0 ? a :gcd(b,a%b));}



void solve(){
   int n,m;cin >> n >> m;
   int a[m];
   for(int i = 0;i < m;++i)cin >> a[i];
   int start = a[0];
   int sum = a[0]-1;
   for(int i = 1;i < m;++i){
      if(a[i] < a[i-1]){
         sum += n-a[i-1] +a[i];
      }else{
         sum += a[i]-start;
      }
      start = a[i];
   }
   cout << sum << '\n';
}

signed main(){
    grub_efi();
    int tests = 1;
   // cin >> tests;
    while (tests-->0)solve();
    return 0;
}


