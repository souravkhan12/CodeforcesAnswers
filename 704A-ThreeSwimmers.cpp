#include <bits/stdc++.h>
using namespace::std;
using ll =int64_t;
#define int ll
int closestMultiple(int N, int K) 
{ 
    int rem = (N + K) % K; 
  
    if (rem == 0) 
        return N; 
    else
        return N + K - rem; 
} 
 
 
signed main(){
  ios_base::sync_with_stdio(false),cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        int p;cin >> p;
        int a[3];
        for(int i=0;i<3;i++){
            cin >> a[i];
        }
        sort(a,a+3);
        int first = closestMultiple(p,a[0]);
        int second = closestMultiple(p,a[1]);
        int third = closestMultiple(p,a[2]);
        cout << min(abs(p-first),min(abs(p-second),abs(p-third))) << endl;
    }
    return 0;
}
