#include<bits/stdc++.h>
using namespace std;

void foo(){
    int a[3],m;
    cin >> a[0] >> a[1] >> a[2] >> m;
    if(a[0]-1+a[1]-1+a[2]-1<m){
        cout << "NO\n";
        return;
    }
    sort(begin(a),end(a));
    if(a[2]-a[1]-a[0]-1>m){
        cout << "NO\n";
        return;
    }
    cout << "YES\n" ;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        foo();
    return 0;
}