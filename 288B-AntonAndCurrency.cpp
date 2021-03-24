#include <bits/stdc++.h>
#include <string>
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

bool digits(int n){
   while (n){
      int rem = n%10;n /=10;
      if(!(rem&1)){
         return true;
      }
   }
   return false;
}

void solve(){
   string s; cin >> s;
   int n = (int)s.size();
   assert((s[n-1] - '0')%2 == 1);
   int res = -1;

   for(int i = 0 ; i < n; ++i){
      if((s[i]-'0')%2 == 0){
         res = i;
         if(s[i] < s[n-1]){
            break;
         }
      }
   }
   if(res == -1){
      puts("-1");
   }else{
      swap(s[res],s[n-1]);
      cout <<s << "\n";
   }
}

int32_t main(){
    grub_efi();
    int tests = 1;
   // cin >> tests;
    while (tests-->0)solve();
    return 0;
}


