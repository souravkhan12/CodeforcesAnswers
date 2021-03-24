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
   int n,m; cin >> n >> m;
   map<string,string>A;
   while (m--){
      string s;cin >> s;
      string k; cin >> k;
      A[s] = k;
   }
   vector<string>last;
   for(int i = 0 ;i < n;++i){
      string s;cin >> s;
      if(s.size() <= A[s].size()){
         last.push_back(s);
      }else if(s.size() > A[s].size()){
         last.push_back(A[s]);
      }
   }
   for(auto & i : last){cout << i << " ";}
}

int32_t main(){
    grub_efi();
    int tests = 1;
   // cin >> tests;
    while (tests-->0)solve();
    return 0;
}


