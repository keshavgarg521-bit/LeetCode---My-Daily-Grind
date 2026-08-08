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