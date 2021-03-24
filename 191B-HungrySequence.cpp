#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------*/
#define  grub_efi() ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define rep(i,a,b) for(int i =a;i<b;++i)
#define srt(v) sort(v.begin(),v.end())
#define nline cout << "\n"

int MAX = 1e5;
void solve(){
    int N ; cin >> N;
    for(int i = N; i < 2*N;i++){
        cout << i << " ";
    }
    nline;
}

signed main(){
    grub_efi();
    int _ = 1;
    while (_-->0)solve();
    return 0;
}

// elements are in increasing order 
// ai < aj hold for any two (i < j )
// for any two indices ( i < j )  == ( aj % ai != 0 )
