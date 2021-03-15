
#include <bits/stdc++.h>
using namespace::std;
 
#define rep(i,a,b) for(int i=a;i<b;i++)
 
const int N = 1e5+100;
int a[N];
int pos[N];
 
signed main(){
   ios_base::sync_with_stdio(false),cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int last = n;
        for(int i=0;i<n;++i){
            cin >> a[i];
            pos[a[i]] = i;
        }
        for(int x = n; x > 0; x--){
            if(pos[x] >= last)continue;
            for(int i = pos[x] ; i < last ; i++ ){
                cout << a[i] << " " ;
            }
            last = pos[x];
        }
        cout << endl;
    }
    return 0;
}
