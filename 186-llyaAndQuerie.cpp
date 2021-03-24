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


void solve(){
    string s; cin >> s;
    int a[100000];
    rep(i,1,s.size()){
        a[i] = a[i-1];
        if(s[i] == s[i-1])a[i]++;
    }
    int q; cin >> q;
    while (q--){
        int l , r;cin >> l >> r;
        --l, --r;
        cout << a[r]-a[l];
        nline;
    }
}

signed main(){
    grub_efi();
    int _ = 1;
    while (_-->0)solve();
    return 0;
}

/*the thing is that first she can read any book and we have to maximise the books she can read 
 */
