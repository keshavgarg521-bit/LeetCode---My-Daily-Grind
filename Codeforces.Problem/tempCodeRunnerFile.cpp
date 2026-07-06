#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i = 0 ; i<n ; i++){
          cin>>a[i];
        }
        unordered_map<int,int> freq;
        for(int i = 0 ; i<n ; i++){
            freq[a[i]]++;
        }
        multiset<int> st;
        for(auto i:freq){
            st.insert(i.second);
        }
        int ans = 0;
        int total = n;
        int offadd = 0;
        while(st.size() > 0){
            int add = 0;
           if(total > k){
                add--;
                offadd--;
                for (auto it = st.begin(); it != st.end(); ) {
                if ((*it + offadd) == 0) {
                    it = st.erase(it);
                } else {
                    ++it;
                } 
              }
           }
           else if(total == k){
            ans++;
            int data = *st.begin() + offadd;
            st.erase(st.begin());
            offadd -= data;
            add -= data;
           }
           else{
            if( (k-total)%(st.size()) == 0){
                offadd++;
                add++;
            }
            else{
                offadd--;
                add--;
                for (auto it = st.begin(); it != st.end(); ) {
                if ((*it + offadd) == 0) {
                    it = st.erase(it);
                } else {
                    ++it;
                } 
              }
            }
           }
           total = total + (st.size()*add);
        }
        cout<<ans<<endl;
    }
}