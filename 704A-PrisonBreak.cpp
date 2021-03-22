#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------*/
#define int long long
#define  grub_efi() ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define rep(i,a,b) for(int i =a;i<b;++i)
#define srt(v) sort(v.begin(),v.end())
#define nline cout << "\n"
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
   int a,b;cin >> a >> b;
   cout << a * b;
   nline;
}

signed main(){
    grub_efi();
    int tests = 1;
    cin >> tests;
    while (tests-->0)solve();
    return 0;
}

 
