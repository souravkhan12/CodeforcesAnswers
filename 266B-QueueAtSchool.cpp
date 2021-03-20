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

/*
void seive(int *a,int n){
    memset(a,true,sizeof(a));
    for(int i =2 ;i<n;++i){
        if(a[i]==true){
            for(int p = i*i;i<n;p+=i){
                a[p]=false;
            }
        }
    }
}*/

void swapper(string&s){
    rep(i,0,(int)s.size()){
        if(s[i]=='G' && s[i-1]=='B'){
            swap(s[i],s[i-1]);
            i++;
        }
    }
}

void solve(){
    int n ; cin >> n;
    int t;cin >> t;
    string s;cin >> s;
    while (t--){
        swapper(s);
    }
    cout << s;nline;
}

signed main(){
    grub_efi();
    int _ = 1;
    while (_-->0)solve();
    return 0;
}

 
