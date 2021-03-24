#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------*/
#define int long long
#define  grub_efi() ios_base::sync_with_stdio(false),cin.tie(nullptr);
/*---------------------------------------------------------------*/
int gcd(int a,int b){return ( b==0 ? a :gcd(b,a%b));}



int pairs(int a){
   return a*(a-1)/2;
}

void solve(){
   int a,b;cin >> a >> b;
   int l = pairs(a-b+1);
   if(a%b==0){
      cout << pairs(a/b)*b << " " << l << "\n";
   }else{
      // rem and we got the no of the divisibles 
      // no of divisbles mean the no of the people in the pair
      // a/b = no of people that means pair(a/b)
      // rem = a%b and they are the peoples remain left and they also can form pairs + others pair
      int sz = a/b;
      int ans2 = (a%b)*(sz+1)*(sz)/2 + (b - a%b)*(sz)*(sz-1)/2;
      cout << ans2 <<" " << l <<"\n";
   }
}

signed main(){
    grub_efi();
    int tests = 1;
   // cin >> tests;
    while (tests-->0)solve();
    return 0;
}


