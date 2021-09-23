#include<bits/stdc++.h>
using namespace std;

void foo(){
    int n;
    cin >> n;
    vector<vector<int>> outedges(n);
    vector<int> indegree(n);
    for(int i=0;i<n;++i){
        int k; cin >> k;
        indegree[i]=k;
        for(int j=0;j<k;++j){
            int e; cin >> e; --e;
            outedges[e].push_back(i);
        }
    }
    set<int> begin;
    for(int i=0;i<n;++i)
        if(indegree[i]==0)
            begin.insert(i);
    int cnt=0,cur=n,res=0;
    while(cnt<n and begin.size()){
        auto it=begin.lower_bound(cur);
        // not found,return last
        if(it==begin.end()){
            ++res;
            it=begin.begin();
        }
        cur=*it;
        begin.erase(it);
        ++cnt;
        for(int e:outedges[cur]){
            if(--indegree[e]==0)
                begin.insert(e);
        }
    }
    if(cnt<n){
        cout << -1 <<"\n";
    }else{
        cout << res << "\n";
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