#include <bits/stdc++.h>
#include <string>
using namespace std;

/*---------------------------------------------------------------*/
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

bool odddigits(int n){
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
   int k ; cin >> k;
   int freq[26];
   int mx_freq = 0;
   for(int i = 0; i < 26;++i){
      cin >> freq[i];
      mx_freq = max(freq[i],mx_freq);
   }
   int sum = 0;
   for(int i = 0 ; i < (int)s.size();++i){
      sum += freq[s[i]-'a']*(i+1);
   }
   int start = (int)s.size()+1;
   while (k > 0){
      sum += start*mx_freq;
      start++;
      k--;
   }
   cout << sum << "\n";
}

int32_t main(){
    grub_efi();
    int tests = 1;
   // cin >> tests;
    while (tests-->0)solve();
    return 0;
}


