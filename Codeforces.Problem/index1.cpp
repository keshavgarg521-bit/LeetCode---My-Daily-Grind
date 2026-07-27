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

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         unordered_map<char,long> left;
//         unordered_map<char,int> right;
//         for(int i = 0 ; i<s.size() ; i++){
//             right[s[i]]++;
//         }
//         int maxi = INT_MIN;
//         for(int i = 0 ; i<s.size() ; i++){
//             left[s[i]]++;
//             right[s[i]]--;
//             if(right[s[i]] == 0){
//                 right.erase(s[i]);
//             }
//             int sum = left.size() + right.size();
//             maxi = max(maxi,sum);
//         }
//         cout<<maxi<<endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long long n;
//         cin >> n;

//         if (n % 2 == 0) {
//             cout << n / 2 << " " << n / 2 << "\n";
//             continue;
//         }

//         long long spf = -1;

//         for (long long i = 3; i * i <= n; i += 2) {
//             if (n % i == 0) {
//                 spf = i;
//                 break;
//             }
//         }

//         if (spf == -1) {
//             cout << 1 << " " << n - 1 << "\n";
//         } else {
//             long long d = n / spf;
//             cout << d << " " << n - d << "\n";
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         char c;
//         cin >> n >> c;

//         string s;
//         cin >> s;

//         if (c == 'g') {
//             cout << 0 << '\n';
//             continue;
//         }

//         string temp = s + s;

//         int lastGreen = -1;
//         int ans = 0;

//         for (int i = 2 * n - 1; i >= 0; i--) {

//             if (temp[i] == 'g')
//                 lastGreen = i;

//             if (i < n && temp[i] == c)
//                 ans = max(ans, lastGreen - i);
//         }

//         cout << ans << '\n';
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,d;
//     cin>>n>>d;
//     int p[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>p[i];
//     }
//     priority_queue<int> q;
//     for(int i = 0 ; i<n ; i++){
//         q.push(p[i]);
//     }
//     int rem = n;
//     int ans = 0;
//     while(rem > 0){
//       int front = q.top();
//       rem--;
//       q.pop();
//       int num = (d/front);
//       if(num <= rem ){
//         ans++;
//         rem = rem - num;
//       }
//     }
//     cout<<ans;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     unordered_map<int,list<int>> adj;
//     while(m--){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<int> parent(n+1,-1);
//     unordered_map<int,bool> visited;

//     queue<int> q;
//     q.push(1);
//     visited[1] = true;
//     while(!q.empty()){
//         int top = q.front();
//         q.pop();
//         for(auto i:adj[top]){
//             if(!visited[i]){
//                 visited[i] = true;
//                 q.push(i);
//                 parent[i] = top;
//             }
//         }
//     }
//     vector<int> ans;
//     int curr = n;
//     bool check = true;
//     while(curr != 1){
//         ans.push_back(curr);
//         curr = parent[curr];
//         if(curr == -1){
//             check = false;
//             break;
//         }
//     }
//     if(check){
//     ans.push_back(1);
//     reverse(ans.begin(),ans.end());
//     cout<<ans.size()<<endl;
//     for(int i = 0 ; i<ans.size() ; i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     }
//     else{
//         cout<<"IMPOSSIBLE"<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<vector<int>> adj(n + 1);

//     for (int i = 0; i < n - 1; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     vector<int> bfsOrder(n);
//     vector<int> pos(n + 1);

//     for (int i = 0; i < n; i++) {
//         cin >> bfsOrder[i];
//         pos[bfsOrder[i]] = i;
//     }

//     // BFS must start from node 1
//     if (bfsOrder[0] != 1) {
//         cout << "No";
//         return 0;
//     }

//     // Sort neighbours according to their position in given BFS
//     for (int i = 1; i <= n; i++) {
//         sort(adj[i].begin(), adj[i].end(), [&](int a, int b) {
//             return pos[a] < pos[b];
//         });
//     }

//     vector<int> result;
//     vector<bool> visited(n + 1, false);

//     queue<int> q;
//     q.push(1);
//     visited[1] = true;

//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();

//         result.push_back(node);

//         for (int child : adj[node]) {
//             if (!visited[child]) {
//                 visited[child] = true;
//                 q.push(child);
//             }
//         }
//     }

//     if (result == bfsOrder)
//         cout << "Yes";
//     else
//         cout << "No";

//     return 0;
// }