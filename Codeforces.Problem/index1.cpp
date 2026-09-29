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

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n, m;
//     cin >> n >> m;

//     vector<vector<pair<int, int>>> adj(n + 1);

//     while (m--) {
//         int u, v, w;
//         cin >> u >> v >> w;

//         adj[u].push_back({v, w});
//         adj[v].push_back({u, w});
//     }

//     vector<long long> dist(n + 1, LLONG_MAX);
//     vector<int> parent(n + 1, -1);

//     priority_queue<
//         pair<long long, int>,
//         vector<pair<long long, int>>,
//         greater<pair<long long, int>>
//     > pq;

//     dist[1] = 0;
//     pq.push({0, 1});

//     while (!pq.empty()) {

//         auto [d, node] = pq.top();
//         pq.pop();

//         if (d > dist[node])
//             continue;

//         for (auto [next, weight] : adj[node]) {

//             if (d + weight < dist[next]) {

//                 dist[next] = d + weight;
//                 parent[next] = node;

//                 pq.push({dist[next], next});
//             }
//         }
//     }

//     if (dist[n] == LLONG_MAX) {
//         cout << -1;
//         return 0;
//     }

//     vector<int> path;

//     int curr = n;

//     while (curr != -1) {
//         path.push_back(curr);
//         curr = parent[curr];
//     }

//     reverse(path.begin(), path.end());

//     for (int x : path) {
//         cout << x << " ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         int ans = 0;
//         while(1){
//             if(a == b || b == c || c == a){
//                 break;
//             }
//             int maxi = max(a,b);
//             maxi = max(maxi,c);
//             int mini = min(a,b);
//             mini = min(mini,c);
//            if(maxi == a){
//             if(mini == b){
//                b++;
//                a--;
//             }
//             else{
//                 c++;
//                 a--;
//             }
//            }
//            else if(maxi == b){
//             if(mini == a){
//                 b--;
//                 a++;
//             }
//             else{
//                 b--;
//                 c++;
//             }
//            }
//            else{
//             if(b == mini){
//                 b++;
//                 c--;
//             }
//             else{
//                 a++;
//                 c--;
//             }
//            }
//            ans++;
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
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int index = n-2;
//         int maxi = 0;
//         for(int i = 1 ; i<n-1 ; i++){
//             if(s[i] != s[i-1] && s[i] != s[i+1] && s[i+1] != s[i-1]){
//                 if(maxi < 1){
//                     maxi = 1;
//                     index = i;
//                 }
//             }
//             else if(s[i] != s[i-1] && s[i] != s[i+1] && s[i+1] == s[i-1]){
//                 int cnt1 = 1;
//                 int cnt2 = 1;
//                 int j = i-2;
//                 int k = i+2;
//                 while(j--){
//                     if(s[i-1] == s[j]){
//                         cnt1++;
//                     }
//                     else{
//                         break;
//                     }
//                 }
//                 while(k<n){
//                     if(s[i+1] == s[j]){
//                         cnt2++;
//                     }
//                     else{
//                         break;
//                     }
//                     k++;
//                 }
//                 int sum = cnt1 + cnt2;
//                 if(maxi < sum){
//                     maxi = sum;
//                     index = i;
//                 }
//             }
//         }
//         string ans;
//         int i = 0;
//         while(i<n){
//             if(i != index){
//                 ans.push_back(s[i]);
//             }
//             int j = i+1;
//             while(j<n){
//                 if(j == index){
//                     j++;
//                 }
//                 else{
//                 if(s[i] == s[j]){
//                     j++;
//                 }
//                 else{
//                     break;
//                 }
//                }
//             }
//             i = j;
//         }
//         cout<<ans.size()<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string a;
//         cin>>a;
//         string b;
//         cin>>b;
//         int acnt1 = 0;
//         int acnt2 = 0;
//         int bcnt2 = 0;
//         int bcnt1 = 0;
//         for(int i = 0 ; i<n ; i += 2){
//             if(a[i] == '1'){
//                 acnt1++;
//             }
//             if(b[i] == '1'){
//                 bcnt2++;
//             }
//         }
//         for(int i = 1 ; i<n; i+=2 ){
//             if(a[i] == '1'){
//                 acnt2++;
//             }
//             if(b[i] == '1'){
//                 bcnt1++;
//             }
//         }
//         if(acnt1 == bcnt2 && acnt2 == bcnt1){
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
//         int n;
//         cin>>n;
//         int b[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>b[i];
//         }
//         unordered_map<int,list<int>> m;
//         for(int i = 0 ; i<n ; i++){
//             m[b[i]].push_back(i);
//         }
//         if(m[0].size() == 0){
//            cout<<-1<<endl;
//         }
//         else if(m[0].size() == n){
//             for(int i = 0 ; i<n ; i++){
//                 cout<<1<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             priority_queue<int, vector<int>, greater<int>> pq;
//             for(auto i:m){
//                 pq.push(i.first);
//             }
//             vector<int> ans(n);
//             bool ch = true;
//             int sum = 0;
//             int maxi = 0;
//             while(!pq.empty()){
//                 int top1 = pq.top();
//                 pq.pop();
//                 if(pq.empty()){
//                    for(auto j:m[top1]){
//                     ans[j] = maxi + 1;
//                    }
//                 }
//                 else{
//                     int top2 = pq.top();
//                     int req = top2 - sum;
//                     if( ( (req)%(m[top1].size()) ) != 0 ){
//                         ch = false;
//                         break;
//                     }
//                     else{
//                         int num = (req)/(m[top1].size());
//                         if(num <= maxi){
//                            ch = false;
//                            break;
//                         }
//                         for(auto k:m[top1]){
//                             ans[k] = num;
//                             maxi = max(maxi,ans[k]);
//                             sum = sum + num;
//                         }
//                     }
//                 }
//             }
//             if(ch == false){
//                cout<<-1<<endl;
//             }
//             else{
//                 for(int i = 0 ; i<n ; i++){
//                     cout<<ans[i]<<" ";
//                 }
//                 cout<<endl;
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int e = sqrt(n+1);
//         bool ans = true;
//         for(int i = 2 ; i<=e ; i++){
//             if( (n+1)%i == 0 ){
//                 ans = false;
//             }
//         }
//         if(ans){
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
//         int n;
//         cin>>n;
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         vector<int> temp;
//         temp.push_back(a[0]);
//         int i = 1;
//         while(i<n){
//             temp.push_back(a[i]);
//             if(a[i] == a[i-1]){
//                 int j = i+1;
//                 while(j<n){
//                     if(a[j] == a[i]){
//                         j++;
//                     }
//                     else{
//                         break;
//                     }
//                 }
//                 i = j;
//             }
//             else{
//                 i++;
//             }
//         }
//         if(temp.size() == 1){
//             cout<<1<<endl;
//         }
//         else if(temp.size() == 2){
//             if(temp[0] == temp[1]){
//                 cout<<1<<endl;
//             }
//             else{
//                 cout<<2<<endl;
//             }
//         }
//         else{
//             int maxi = 0;
//             int ab = 0;
//             int mp = 0;
//             while(ab+1<temp.size()){
//                 if(temp[ab] == temp[ab+1]){
//                     mp++;
//                     ab++;
//                 }
//                 ab++;
//             }
//             int j = 0;
//             while(j<temp.size()){
//                 vector<int> cut;
//                 vector<int> man;
//                 if(j+1 < temp.size() && temp[j] == temp[j+1]){
//                     cut.push_back(temp[j+1]);
//                     man.push_back(temp[j+1]);
//                     if(j-1>=0){
//                         cut.push_back(temp[j-1]);
//                         cut.push_back(temp[j]);
//                         man.push_back(temp[j]);
//                         man.push_back(temp[j-1]);
//                         if(j-2>=0){
//                             cut.push_back(temp[j-2]);
//                             man.push_back(temp[j-2]);
//                         }
//                     }
//                     else{
//                         cut.push_back(temp[j]);
//                         man.push_back(temp[j]);
//                     }
//                 }
//                 else if(j-1 >= 0 && temp[j-1] == temp[j]){
//                     cut.push_back(temp[j-1]);
//                     man.push_back(temp[j-1]);
//                     if(j+1<temp.size()){
//                         cut.push_back(temp[j+1]);
//                         cut.push_back(temp[j]);
//                         man.push_back(temp[j]);
//                         man.push_back(temp[j+1]);
//                         if(j+2<temp.size()){
//                             cut.push_back(temp[j+2]);
//                             man.push_back(temp[j+2]);
//                         }
//                     }
//                     else{
//                         cut.push_back(temp[j]);
//                         man.push_back(temp[j]);
//                     }
//                 }
//                 int pairs = 0;
//                 int k = 0;
//                 while(k+1<cut.size()){
//                     if(cut[k] == cut[k+1]){
//                         pairs++;
//                         k++;
//                     }
//                     k++;
//                 }
//                 k = 0;
//                 int pairs1 = 0;
//                 while(k+1<cut.size()){
//                     if(man[k] == man[k+1]){
//                         pairs1++;
//                         k++;
//                     }
//                     k++;
//                 }
//                 maxi = max(maxi,(pairs1-pairs));
//                 j++;
//             }
//             mp = mp - maxi;
//             cout<<temp.size()-mp<<endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     int n,m;
//     cin>>n>>m;
//     vector<string> inp;
//     for(int i = 0 ; i<n ; i++){
//         string s;
//         cin>>s;
//         inp.push_back(s);
//     }
//     vector<string> st;
//     for(int i = 0 ; i<m ; i++){
//         string s;
//         cin>>s;
//         st.push_back(s);
//     }
//     unordered_map<char,bool> mp;
//     for(int i = 0 ; i<n ; i++){
//         char c = toupper(inp[i][0]);
//         mp[c] = true; 
//     }
//     bool flag = true;
//     for(int i = 0; i<m ; i++){
//     for(int j = 0 ; j<st[i].size() ; j++){
//         char c = toupper(st[i][j]);

//         if(!mp[c]){
//             flag = false;
//             break;
//         }
//     }

//     if(!flag){
//         break;
//     }
// }
//     if(flag){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m;
//         cin >> n >> m;

//         vector<long long> a(n);
//         vector<long long> b(m);

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         for (int i = 0; i < m; i++) {
//             cin >> b[i];
//         }
//         long long bea = a[0] + n - 1;
//         long long ver = b[0] + m - 1;
//         if (ver <= bea) {
//             cout << 1 << '\n'; 
//         }
//         else {
//             cout << 2 << '\n';  
//         }
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void solve(vector <int> &ans , int inp , unordered_map<int,list<int>> &adj , unordered_map<int,bool> &vis , int root){
//     if(adj[root].size() == 0){
//         if(inp != -1){
//             ans.push_back(inp);
//         }
//         return ;
//        }   
//         for(auto i:adj[root]){
//             int newinp = inp;
//           if(vis[i]){
//             newinp = i;
//           }
//           solve(ans,newinp,adj,vis,i);
//         }
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> p(n-1);
//         for(int i = 0 ; i<n-1 ; i++){
//             cin>>p[i];
//         }
//         int m;
//         cin>>m;
//         vector<int> a(m);
//         for(int i = 0 ; i<m ; i++){
//             cin>>a[i];
//         }
//         unordered_map<int,list<int>> adj;
//         for(int i = 0 ; i<n-1 ; i++){
//             int v = i+2;
//             int u = p[i];
//             adj[u].push_back(v);
//         }
//         unordered_map<int,bool> vis;
//         for(int i = 0 ; i<m ; i++){
//             vis[a[i]] = true;
//         }
//         int inp = -1;
//         vector<int> ans;
//         solve(ans,inp,adj,vis,1);
//         cout<<ans.size()<<" ";
//         for(int i = 0 ; i<ans.size() ; i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// long long solve(long long a1,long long a2,long long h){
//     long long ans = 0;
//     ans = (a2-a1)*h;
//     return ans;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long w,h;
//         cin>>w>>h;
//         long long k;
//         cin>>k;
//         vector<long long> a(k);
//         for(long long i = 0 ; i<k ; i++){
//             cin>>a[i];
//         }
//         long long k1;
//         cin>>k1;
//         vector<long long> b(k1);
//         for(long long i = 0 ; i<k1 ; i++){
//             cin>>b[i];
//         }
//         long long k2;
//         cin>>k2;   
//         vector<long long> c(k2);
//         for(long long i = 0 ; i<k2 ; i++){
//             cin>>c[i];
//         }
//         long long k3;
//         cin>>k3;    
//         vector<long long> d(k3);
//         for(long long i = 0 ; i<k3 ; i++){
//             cin>>d[i];
//         }
//         long long maxi = 0;
//         //1st case
//         long long a1 = a[0];
//         long long a2 = a[k-1];
//         maxi = max(maxi,solve(a1,a2,h));

//         a1 = b[0];
//         a2 = b[k1-1];
//         maxi = max(maxi,solve(a1,a2,h));

//         a1 = c[0];
//         a2 = c[k2-1];   
//         maxi = max(maxi,solve(a1,a2,w));

//         a1 = d[0];
//         a2 = d[k3-1];   
//         maxi = max(maxi,solve(a1,a2,w));
//         cout<<maxi<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         vector<long long> a(n);
//         for(long long i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         priority_queue<pair<long long,long long>> pq;
//         for(long long i = 0 ; i<n ; i++){
//             pq.push({a[i],i+1});
//         }
//         vector<long long> ans(n+1);
//         ans[0] = 0;
//         long long temp = 1;
//         while(!pq.empty()){
//             auto top = pq.top();
//             pq.pop();
//             long long ind1 = top.second;
//             ans[ind1] = temp;
//             if(!pq.empty()){
//                 auto top1 = pq.top();
//                 pq.pop();
//                 ans[top1.second] = -1 * temp;
//             }
//             temp++;
//         }
//         long long ini = ans[0];
//         long long sum = 0;
//         for(long long i = 1 ; i<=n ; i++){
//             long long dis = 2 * abs(ini-ans[i]) * a[i-1];
//             sum = sum + dis;
//         }
//         cout<<sum<<endl;
//         for(long long i = 0 ; i<=n ; i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int remainder = a % b;
//         a = b;
//         b = remainder;
//     }

//     return a;
// }
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
//         cout<<gcd(a[0],a[n-1])<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;

//         vector<int> freq(m + 1, 0);

//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             freq[x]++;
//         }

//         // suffix[x] = number of carrots having size >= x
//         vector<int> suffix(m + 2, 0);

//         for (int x = m; x >= 1; x--)
//         {
//             suffix[x] = suffix[x + 1] + freq[x];
//         }

//         int ans = 0;

//         for (int x = 1; x <= m; x++)
//         {
//             // All carrots >= x give one carrot of size x
//             int current = suffix[x];

//             // A carrot of size 2*x gives TWO x's,
//             // so we need one additional x
//             if (2 * x <= m)
//             {
//                 current += freq[2 * x];
//             }

//             ans = max(ans, current);
//         }

//         cout << ans << '\n';
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int r,b,p;
//         cin>>r>>b>>p;
//         if(r+b >= p){
//             cout<<"Yes"<<"\n";
//         }
//         else{
//             cout<<"No"<<"\n";
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
//         int cnt = 0;
//         for(int i = 1 ; i<n-1 ; i++){
//             if(a[i] > a[i-1] && a[i] > a[i+1]){
//                 cnt++;
//             }
//         }
//         cout<<cnt<<"\n";
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
//         string s;
//         cin>>s;
//         string temp;
//         for(int i = 0 ; i<n ; i++){
//             if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
//                 temp.push_back(s[i]);
//             }
//         }
//         bool ans = true;
//         for(int i = 0 ; i<(temp.size()/2) ; i++){
//             if(temp[i] != temp[temp.size()-1-i]){
//                 ans = false;
//                 break;
//             }
//         }
//         if(temp.size() == 0){
//             cout<<"EMPTY"<<"\n";
//         }
//         else if(ans){
//             cout<<"PURGED"<<"\n";
//         }
//         else{
//             cout<<"CORRUPTED"<<"\n";
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,s;
//         cin>>n>>s;
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         int cnt = 0;
//         unordered_map<int,int> m;
//         for(int i = 0 ; i<n ; i++){
//             int need = s-a[i];
//             if(m[need] > 0){
//                 cnt++;
//                 m[need]--;
//             }
//             else{
//                 m[a[i]]++;
//             }
//         }
//         cout<<cnt<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,T;
//         cin>>n>>T;
//         int c[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>c[i];
//         }
//         priority_queue<int, vector<int>, greater<int>> minHeap;
//         for(int i = 0 ; i<n ; i++){
//             minHeap.push(c[i]);
//         }
//         int sum = 0;
//         int cnt = 0;
//         int i = 0;
//         while(cnt <= n && sum <= T ){
//             sum = sum + minHeap.top();
//             minHeap.pop();
//             cnt++;
//         }
//         cout<<cnt-1<<"\n";
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
//         vector<long long> a(n);
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         if(n<k){
//             cout<<0<<endl;
//         }
//         else{
//             long long sum = 0;
//             for(int i = 0 ; i<k ; i++){
//                 sum += a[i];
//             }
//             long long maxi = sum;
//             for(int i = k ; i<n ; i++){
//                 sum -= a[i-k];
//                 sum += a[i];
//                 maxi = max(maxi,sum);
//             }
//             cout<<maxi<<"\n";
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,s;
//         cin>>n>>s;
//         vector<long long> v(n);
//         for(long long i = 0 ; i<n ; i++){
//             cin>>v[i];
//         }
//         long long cnt = 0;
//         for(long long i = 0 ; i<n ; i++){
//             long long sum = 0;
//             for(long long j = i ; j<n ; j++){
//                sum += v[j];
//                if(sum == s){
//                 cnt++;
//                }
//             }
//         }
//         cout<<cnt<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n,k;
//         cin >> n >> k;
//         vector<long long> a(n);
//         for(long long i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         long long i = 0;
//         long long j = 0;
//         long long maxi = 0;
//         unordered_map<long long,long long> m;
//         while(i < n && j < n){
//             m[a[j]]++;
//             if(m.size() <= k){
//                 maxi = max(maxi, j-i+1);
//                 j++;
//             }
//             else{
//                 m[a[j]]--;
//                 if(m[a[j]] == 0){
//                     m.erase(a[j]);
//                 }
//                 m[a[i]]--;
//                 if(m[a[i]] == 0){
//                     m.erase(a[i]);
//                 }
//                 i++;
//             }
//         }
//         cout<<maxi<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     string t;
//     for(int i = 0 ; i<s.size()-1 ; i++){
//         t.push_back(s[i]);
//     }
//     if(s[s.size()-1] == 'e'){
//         t.push_back('e');
//         t.push_back('r');
//     }
//     else{
//         t.push_back(s[s.size()-1]);
//         t.push_back('e');
//         t.push_back('r');
//     }
//     cout<<t;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     string t;
//     cin>>t;
//     bool ans = true;
//     for(int i = 0 ; i<n ; i++){
//         if(t[i] != '*'){
//             if(t[i] != s[i]){
//                 ans = false;
//                 break;
//             }
//         }
//     }
//     if(ans){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     long long a[n];
//     for(long long i = 0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     vector<long long> ans;
//     priority_queue<long long, vector<long long>, greater<long long>> pq;
//     for(long long i = 0 ; i<3 ; i++){
//         pq.push(a[i]);
//     }
//     ans.push_back(pq.top());
//     for(long long i = 3 ; i<n ; i++){
//         pq.push(a[i]);
//         if(pq.size()>3){
//             pq.pop();
//         }
//         ans.push_back(pq.top());
//     }
//     for(long long i = 0 ; i<ans.size() ; i++){
//         cout<<ans[i]<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n,m,k;
//     cin>>n>>m>>k;
//     long long x,y;
//     cin>>x>>y;
//     vector<long long> a(n);
//     for(long long i = 0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     vector<long long> b(m);
//     for(long long i = 0 ; i<m ; i++){
//         cin>>b[i];
//     }
//     sort(a.begin(),a.end());
//     sort(b.begin(),b.end());
//     long long cnt = 0;
//     for(long long i = 0 ; i<m ; i++){
//         if(ceil((double)b[i] / k) <= y){
//             y = y - ceil((double)b[i] / k);
//             x = x + ((ceil((double)b[i] / k)*k)-b[i]);
//             cnt++;
//         }
//     }
//     for(long long i = 0 ; i<n ; i++){
//         if( (a[i]/k) <= y ){
//             y = y - (a[i]/k);
//             a[i] = a[i]%k;
//         }
//         if(a[i] <= x){
//             x = x - a[i];
//             cnt++;
//         }
//     }
//     cout<<cnt;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         char c;
//         cin>>c;
//         string s;
//         cin>>s;
//         bool ans = true;
//         int i = 0;
//         int cnt = 0;
//         while(i<n/2){
//             if(s[i] != s[n-i-1]){
//                 if(s[i] == c || s[n-i-1] == c){
//                     cnt++;
//                 }
//                 else{
//                     cnt += 2;
//                 }
//             }
//             i++;
//         }
//         cout<<cnt<<"\n";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         map<int, int, greater<int> > m;

//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             m[x]++;
//         }

//         vector<int> ans;

//         while (!m.empty()) {
//             vector<int> remove;

//             for (auto it = m.begin(); it != m.end(); ++it) {
//                 int x = it->first;

//                 ans.push_back(x);
//                 it->second--;

//                 if (it->second == 0) {
//                     remove.push_back(x);
//                 }
//             }

//             for (int x : remove) {
//                 m.erase(x);
//             }
//         }

//         for (int x : ans) {
//             cout << x << " ";
//         }

//         cout << "\n";
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char c;
//     cin>>c;
//     if(c == 'B'){
//         cout<<"Y";
//     }
//     else if(c == 'Y'){
//         cout<<"R";
//     }
//     else{
//         cout<<"B";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,d;
//     cin>>n>>d;

//     int arr[n];

//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i];
//     }

//     set<int> s;
//     unordered_map<int,list<int>> m;

//     for(int i = 0 ; i<n ; i++){
//         s.insert(arr[i]);
//         m[arr[i]].push_back(i+1);
//     }

//     vector<int> ans;

//     auto it = s.begin();

//     for(int i = 0; i < s.size(); i++) {

//         // Duplicate coordinate -> nobody at this coordinate can stand apart
//         if(m[*it].size() > 1){
//             it++;
//             continue;
//         }

//         if(i == 0){
//             if(next(it) == s.end() || *next(it) - *it >= d){
//                 for(auto j : m[*it]){
//                     ans.push_back(j);
//                 }
//             }
//         }

//         else if(i == s.size()-1){
//             if(*it - *prev(it) >= d){
//                 for(auto j : m[*it]){
//                     ans.push_back(j);
//                 }
//             }
//         }

//         else{
//             if((*next(it) - *it >= d) &&
//                (*it - *prev(it) >= d)){
//                 for(auto j : m[*it]){
//                     ans.push_back(j);
//                 }
//             }
//         }

//         it++;
//     }

//     sort(ans.begin(),ans.end());

//     cout<<ans.size()<<endl;

//     for(int i = 0 ; i<ans.size() ; i++){
//         cout<<ans[i]<<" ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long q;
//     cin>>q;
//     string s;
//     cin>>s;
//     string t;
//     cin>>t;
//     vector<vector<long long>> temp;
//        long long i = 0;
//        while(i <= (s.size()-t.size()) ){
//         if(s[i] == t[0]){
//             bool check = true;
//             for(long long j = 1 ; j<t.size() ; j++){
//                 if(s[i+j] != t[j]){
//                     check = false;
//                 }
//             }
//             if(check){
//                 vector<long long> tem;
//                 tem.push_back(i);
//                 tem.push_back(i+t.size()-1);
//                 temp.push_back(tem);
//             }
//         }
//         i++;
//        }
//     while(q--){
//        long long l,r;
//        cin>>l>>r;
//        bool check = false;
//        for(long long j = 0 ; j<temp.size() ; j++){
//           if(temp[j][0] >= (l-1) && temp[j][1] <= (r-1)){
//             check = true;
//             break;
//           }
//        }
//        if(check){
//         cout<<"YES"<<endl;
//        }
//        else{
//         cout<<"NO"<<endl;
//        }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         int b[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//             cin>>b[i];
//         }
//         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
//         for(int i = 0 ; i<n ; i++){
//             pq.push({a[i],b[i]});
//         }
//         int tim = 0;
//         int cnt = 0;
//         while(!pq.empty()){
//             tim += pq.top().first;
//             if(tim > pq.top().second){
//                 break;
//             }
//             cnt++;
//             pq.pop();
//         }
//         cout<<cnt<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         int b = 0, g = 0;
//         for (char c : s) {
//             if (c == 'B')
//                 b++;
//             else
//                 g++;
//         }
//         if (b == g)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<long long> v(2 * n);
//         for (int i = 0; i < 2 * n; i++)
//             cin >> v[i];
//         sort(v.begin(), v.end());
//         vector<long long> ans;
//         long long sum = 0;
//         // Make array using first half
//         for (int i = 0; i < n; i++) {
//             long long x = v[i] - sum;
//             if (x <= 0) {
//                 ans.clear();
//                 break;
//             }
//             ans.push_back(x);
//             sum += x;
//         }
//         if (ans.empty()) {
//             cout << -1 << endl;
//             continue;
//         }
//         // Check prefix sums
//         vector<long long> check;
//         sum = 0;
//         for (int x : ans) {
//             sum += x;
//             check.push_back(sum);
//         }
//         // Check suffix sums
//         sum = 0;
//         for (int i = n - 1; i >= 0; i--) {
//             sum += ans[i];
//             check.push_back(sum);
//         }
//         sort(check.begin(), check.end());
//         if (check == v) {
//             for (int x : ans)
//                 cout << x << " ";
//             cout << endl;
//         } else {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         string s;
//         cin >> s;

//         int white = 0;

//         // First window
//         for (int i = 0; i < k; i++) {
//             if (s[i] == 'W')
//                 white++;
//         }

//         int ans = white;

//         // Sliding window
//         for (int i = k; i < n; i++) {

//             // New character added
//             if (s[i] == 'W')
//                 white++;

//             // Old character removed
//             if (s[i - k] == 'W')
//                 white--;

//             ans = min(ans, white);
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long long a, b, k;
//         cin >> a >> b >> k;

//         long long posts = (a + k - 1) / k + (b + k - 1) / k;

//         cout << posts << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> a(n);

//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         for (int i = 0; i < n - 1; i++) {

//             if (a[i] % 2 != a[i + 1] % 2 && a[i + 1] < a[i]) {
//                 swap(a[i], a[i + 1]);

//                 if (i >= 2)
//                     i -= 2;
//                 else
//                     i = -1;
//             }
//         }

//         for (int x : a)
//             cout << x << " ";

//         cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         // If whole row is empty
//         if (s.find('1') == string::npos) {
//             cout << n << endl;
//             continue;
//         }

//         int ans = -1;

//         for (int i = 0; i < n - 1; i++) {

//             if (s[i] == '0' && s[i + 1] == '0') {

//                 int left = n;
//                 int right = n;

//                 // Go left from first empty seat
//                 for (int j = i - 1; j >= 0; j--) {
//                     if (s[j] == '1') {
//                         left = i - j;
//                         break;
//                     }
//                 }

//                 // Go right from second empty seat
//                 for (int j = i + 2; j < n; j++) {
//                     if (s[j] == '1') {
//                         right = j - (i + 1);
//                         break;
//                     }
//                 }

//                 int dist = min(left, right);

//                 ans = max(ans, dist);
//             }
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> a(n), b(n);

//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         for (int i = 0; i < n; i++)
//             cin >> b[i];

//         int ans = 0;

//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {

//                 if (a[i] + a[j] > b[i] + b[j])
//                     ans++;
//             }
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<long long> v(2 * n);

//         for (int i = 0; i < 2 * n; i++)
//             cin >> v[i];

//         sort(v.begin(), v.end());

//         vector<long long> ans;

//         long long sum = 0;

//         // Create original array
//         for (int i = 0; i < n; i++) {
//             long long x = v[i] - sum;

//             if (x <= 0) {
//                 ans.clear();
//                 break;
//             }

//             ans.push_back(x);
//             sum += x;
//         }

//         if (ans.empty()) {
//             cout << -1 << endl;
//             continue;
//         }

//         // Check suffix sums
//         sum = 0;
//         bool ok = true;

//         for (int i = n - 1; i >= 0; i--) {
//             sum += ans[i];

//             if (sum != v[n + (n - 1 - i)]) {
//                 ok = false;
//                 break;
//             }
//         }

//         if (ok) {
//             for (long long x : ans)
//                 cout << x << " ";

//             cout << endl;
//         }
//         else {
//             cout << -1 << endl;
//         }
//     }

//     return 0;
// }