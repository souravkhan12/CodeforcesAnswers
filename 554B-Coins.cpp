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
    int N ; cin >> N;
    cout << N << " ";
    for(int i = N-1 ; i>= 1;i--){
        if(N%i==0){
            cout << i << " ";
            N = i;
        }
    }
}

signed main(){
    grub_efi();
    int _ = 1;
    while (_-->0)solve();
    return 0;
}

