#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------*/
#define int int64_t
#define  grub_efi() ios_base::sync_with_stdio(false),cin.tie(nullptr);
/*---------------------------------------------------------------*/
int gcd(int a,int b){return ( b==0 ? a :gcd(b,a%b));}
/*---------------------------------------------------------------
void seive(int *a,int n){
    memset(a,true,sizeof(a));
    for(int i =2 ;i<n;++i){
        if(a[i]==true){
            for(int p = i*i;i<n;p+=i){
                a[p]=false;
            }
        }
    }
}
------------------------------------------------------------------*/
void solve(){
   int n,l; cin >> n >> l;
   auto mx = [&](int a,int b)->int{
      return a> b? a: b;
   };
   int a[n];
   for(int i = 0 ; i < n ; ++i){
      cin >> a[i];
   }
   sort(a,a+n);
   int start = 0;
   double ans = 2*max(a[0],l-a[n-1]);
   for(int i = 0 ; i < n;++i){
      ans = mx(a[i]-start,ans);
      start = a[i];
   }
   ans = ans / 2.0;
   // street get lightned
   cout << fixed << std::setprecision(10) << ans << "\n";
}

int32_t main(){
    grub_efi();
    int tests = 1;
   // cin >> tests;
    while (tests-->0)solve();
    return 0;
}


