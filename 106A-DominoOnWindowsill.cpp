#include <bits/stdc++.h>
 
int main(){
    using namespace std;
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n,k1,k2;cin >> n >> k1 >> k2;
        int w,b; cin >> w >> b;
      
        int w1 = k1;
        int w2 = k2;
        int b1 = n-k1;
        int b2 = n-k2;
        int white = w1 + w2;
        int black = b1 + b2;
        if(2*w <= white && 2*b <= black){
            puts("YES");
        }else{
            puts("NO");
        }
    }
    return 0;
}
 
