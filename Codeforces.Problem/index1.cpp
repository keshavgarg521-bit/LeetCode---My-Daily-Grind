// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         unordered_map<int,set<int>> m;
//         for(int i = 0 ; i<n ; i++){
//             if(a[i]%k == 0){
//                 a[i] = k;
//             }
//             else{
//                 a[i] = a[i]%k;
//             }
//             m[a[i]].insert(i);
//         }
//         priority_queue<int> q;
//         for(auto i:m ){
//             q.push(i.first);
//         }
//         vector<int> ans;
//         while(!q.empty()){
//             int top = q.top();
//             q.pop();
//             for(auto j:m[top] ){
//                 ans.push_back(j+1);
//             }
//         }
//         for(int i = 0 ; i<n ; i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,k,q;
//         cin>>n>>k>>q;
//         long long a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         long long ans = 0;
//         int i = 0;
//         while(i<n){
//             if(a[i] <= q){
//                 int j = i+1;
//                 while(j<n){
//                     if(a[j] > q){
//                         break;
//                     }
//                     j++;
//                 }
//                if((j-i)-k >= 0){
//                 long long dig = j-i-k+1;
//                 ans = ans + (((dig)*(dig+1))/2);
//                }
//                i = j;
//             }
//                 i++;
//         }
//         cout<<ans<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         if(k == 4){
//             unordered_map<int,int> m;
//             unordered_map<int,int> m1;
//             int mini = 4;
//             for(int i = 0 ; i<n ; i++){
//                 if(a[i]%k == 0){
//                     m[0]++;
//                 }
//                 else{
//                     m[(4-(a[i]%k))]++;
//                     m1[(a[i]%2)]++;
//                 }
//             }
//             if(m[0] > 0 || m[2] >= 2){
//                 cout<<0<<endl;
//             }
//             else{
//                 if(m1[0] >= 1 ){
//                     cout<<1<<endl;
//                 }
//                 else if(m1[0] == 0 && m[1] >= 1){
//                     cout<<1<<endl;
//                 }
//                 else{
//                     cout<<2<<endl;
//                 }
//             }
//         }
//         else{
//             int mini = INT_MAX;
//             for(int i = 0 ; i<n ; i++){
//                 if(a[i]%k == 0){
//                     mini = 0;
//                     break;
//                 }
//                mini = min(mini,(k-(a[i]%k)) );
//             }
//             cout<<mini<<endl;
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         int cnt1 = 0;
//         int cnt2 = 0;
//         int pair1 = 0;
//         int pair2 = 0;
//         for(int i = 0 ; i<n-1 ; i++){

//             if(a[i] == 1 && a[i+1] == 1){
//                 pair1++;
//                 i++;
//             }
//             else if(a[i] == -1 && a[i+1] == -1){
//                 pair2++;
//                 i++;
//             }
//             else{
//                if(a[i] == -1){
//                 cnt2++;
//                }
//                else{
//                 cnt1++;
//                }
//             }
//         }
//         if(a[n-1] != a[n-2]){
//         if(a[n-1] == 1){
//             cnt1++;
//         }
//         else{
//             cnt2++;
//         }
//         }

//         if(cnt1 == cnt2 && abs(pair1 - pair2)%2 == 0){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     int b[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>b[i];
//     }
//     unordered_map<int,bool> m;
//     unordered_map<int,bool> m1;
//     unordered_map<int,int> p;
//     unordered_map<int,int> p1;
//     int i = 0;
//     while(i<n){
//         if(m[a[i]] == false){
//             m[a[i]] = true;
//         }
//         int j = i+1;
//         while(j<n){
//             if(a[i] != a[j]){
//                 break;
//             }
//             j++;
//         }
//         p[a[i]] = max(p[a[i]], (j-i) );
//         i = j;
//     }
//     i = 0;
//     while(i<n){
//         if(m1[b[i]] == false){
//             m1[b[i]] = true;
//         }
//         int j = i+1;
//         while(j<n){
//             if(b[i] != b[j]){
//                 break;
//             }
//             j++;
//         }
//         p1[b[i]] = max(p1[b[i]] ,(j-i) );
//         i = j;
//     }
//     int maxi = INT_MIN;
//     for(auto i:p ){
//        if(m[i.first] == m1[i.first]){
//         maxi = max(maxi,(i.second + p1[i.first]));
//        }
//        else{
//         maxi = max(maxi,i.second);
//        }
//     }
//     for(auto i:p1 ){
//        if(m[i.first] != m1[i.first]){
//         maxi = max(maxi,i.second);
//        }
//     }
//     cout<<maxi<<endl;  
//   }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,long> left;
        unordered_map<char,int> right;
        for(int i = 0 ; i<s.size() ; i++){
            right[s[i]]++;
        }
        int maxi = INT_MIN;
        for(int i = 0 ; i<s.size() ; i++){
            left[s[i]]++;
            right[s[i]]--;
            if(right[s[i]] == 0){
                right.erase(s[i]);
            }
            int sum = left.size() + right.size();
            maxi = max(maxi,sum);
        }
        cout<<maxi<<endl;
    }
}