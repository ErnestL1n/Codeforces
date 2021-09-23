#include<bits/stdc++.h>
using namespace std;

void foo(){
    int n;
    cin >> n;
    for(int i=0;i<n;++i){
        // 2*i+(n-i)+(n-i)=2n
        for(int j=0;j<i;++j)
            cout << "()";
        for(int j=0;j<n-i;++j)
            cout << "(";
        for(int j=0;j<n-i;++j)
            cout << ")";
        cout << "\n";
    }
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