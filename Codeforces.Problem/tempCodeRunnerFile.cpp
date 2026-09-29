#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    set<int> s;
    unordered_map<int,list<int>> m;
    for(int i = 0 ; i<n ; i++){
        s.insert(arr[i]);
        m[arr[i]].push_back(i+1);
    }
    vector<int> ans;
    auto it = s.begin();
    for(int i = 0; i < s.size(); i++) {
    if(i == 0){
        if(next(it) == s.end() || *next(it) - *it >= d){
            for(auto j:m[*it]){
                ans.push_back(j);
            }
        }
    }
    else if(i == s.size()-1){
        if(*it - *prev(it) >= d){
            for(auto j:m[*it]){
                ans.push_back(j);
            }
        }
    }
    else{
        if((*next(it) - *it >= d) && (*it - *prev(it) >= d)){
            for(auto j:m[*it]){
                ans.push_back(j);
            }
        }
    }
    it++;
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}