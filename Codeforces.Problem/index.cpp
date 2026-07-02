// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"mera laptop sahi chal raha ha kya"<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x,y,z;
//         cin>>n>>x>>y>>z;
//         int sumx = 0;
//         int sumy2 = 0;
//         int cnt1 = 0;
//         if(n%(x+y) == 0 ){
//             cnt1 = n/(x+y);
//         }
//         else{
//             cnt1 = (n/(x+y))+1;
//         }
//        int cnt2 = 0;
//        sumx = x*z;
//        cnt2 = z;
//        y = y * 10;
//        while((sumx+sumy2)<n){
//         sumx = sumx + x;
//         sumy2 = sumy2 + y;
//         cnt2++; 
//        }
//        int ans = min(cnt2,cnt1);
//        y = y/10;
//        if((x+y)>=n){
//         ans = 1;
//        }
//        cout<<ans<<endl;
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int s = 0;
//         if(n==2){
//             cout<<"1 2 1 1 2 2 1 2"<<endl;
//         }
//         else{
//           vector<int> v((n*4),-1);
//           for(int i = 1 ; i<n ; i++){
//             int dif = 1;
//             v[s] = i;
//             int cnt = 0;
//             int temp = 0;
//             int j = s;
//             while(j<=(n*4) || cnt <4 ){
//                 if((j+dif) < (n*4) && v[j+dif] == -1){
//                     v[j+dif] = i;
//                     j = j + dif;
//                     cnt++;
//                 }
//                 else if((j+dif) < (n*4) && v[j+dif] != -1){
//                    dif++;
//                    if(temp != 1){
//                     s = (j + dif);
//                     temp = 1;
//                    }
//                 }
//                 else{
//                     dif = 1;
//                 }
//             }
//           }
//           int dif = 1;
//             v[s] = n;
//             int cnt = 0;
//             int temp = 0;
//             int j = s;
//             while(j<=(n*4) || cnt <3 ){
//                 if((j+dif) < (n*4) && v[j+dif] == -1){
//                     v[j+dif] = n;
//                     j = j + dif;
//                     cnt++;
//                 }
//                 else if((j+dif) < (n*4) && v[j+dif] != -1){
//                    dif++;
//                    if(temp != 1){
//                      s = (j+dif);
//                      temp = 1;
//                    }
//                 }
//                 else{
//                     dif = 1;
//                 }
//             }
//             v[0] = n;
//             for(int i = 0 ; i<(n*4) ; i++){
//                 if(v[i] == -1){
//                     v[i] = 1;
//                 }
//             }
//             for(int i = 0 ; i<(n*4) ; j++){
//                 cout<<v[i]<<" "<<endl;
//             }
//         }
//     }
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;

//         cout<<n<<" ";
//         for(int i = 1 ; i<n ; i++){
//             cout<<i<<" ";
//         }
//         for(int i = 1 ; i<=n ; i++){
//             cout<<i<<" ";
//         }
//         for(int i = 1 ; i<=n ; i++){
//             cout<<i<<" ";
//         }
//         cout<<n<<" ";
//         for(int i = 1 ; i<n ; i++){
//             cout<<i<<" ";
//         }
//         cout << endl;
//     }

//     return 0;
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
//         int mini = INT_MAX;
//         int maxi = INT_MIN;
//         for(int i = 0 ; i<n ; i++){
//             maxi = max(maxi , a[i]);
//             mini = min(mini , a[i]);
//         }
//         int ans = (maxi+1)-mini;
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
//         string s;
//         cin>>s;
//         bool ans = true;
//         for(int i = 0 ; i<(n-k) ; i++){
//             if(s[i] == '1'){
//                 s[i] = '0';
//                 if(s[i+k] == '0'){
//                     s[i+k] = '1';
//                 }
//                 else{
//                     s[i+k] = '0';
//                 }
//             }
//         }
//         for(char c:s ){
//             if(c == '1'){
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
//         int a,b,x;
//         cin>>a>>b>>x;
//         int cnt = 0;
//         while(a != b){
//             if(a>b){
//             int data1 = b+1;
//             int data2 = a/x;
//             if(abs(a-data1) >= abs(b-data2)){
//                 a = a/x;
//                 cnt++;
//             }
//             else{
//                 b = b + 1;
//                 cnt++;
//             }
//             }
//             else{
//             int data1 = a+1;
//             int data2 = b/x;
//             if(abs(b-data1) >= abs(a-data2)){
//                 b = b/x;
//                 cnt++;
//             }
//             else{
//                 a = a + 1;
//                 cnt++;
//             }
//             }
//         }
//         cout<<cnt<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     int mini = INT_MAX;
//     for(int i = 0 ; i<n ; i++){
//         int data = abs(a[i]-0);
//         mini = min(mini , data);
//     }
//     cout<<mini;
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
//         int mini = INT_MAX;
//         for(int i = 0 ; i<n ; i++){
//             mini = min(mini , b[i]);
//         }
//         if(mini == 1){
//             cout<<n<<endl;
//             for(int i = 0 ; i<n ; i++){
//                 cout<<b[i]<<" ";
//             }
//         }
//         else{
//             cout<<(n+1)<<endl;
//             cout<<(mini-1)<<" ";
//             for(int i = 0 ; i<n ; i++){
//                 cout<<b[i]<<" ";
//             }
//         }
//         cout<<endl;
//    }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n , q;
//         cin>>n>>q;
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         vector<int> v(n+1,0);
//         for(int i = 0 ; i<n ; i++){
//             v[i+1] = v[i] + a[i];
//         }
//         while(q--){
//             int l,r,k;
//             cin>>l>>r>>k;
//             l--;
//             r--;
//             long long sum = (v[n]-v[r+1]+v[l])+((r-l+1)*k);
//            if(sum%2 != 0){
//             cout<<"YES"<<endl;
//            }
//            else{
//             cout<<"NO"<<endl;
//            }
//         }
//     }
// }

//prefix sum logic is great so here we could save our step if quesry type question gben from l to r so we could solve our question 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<long long> a(n);

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         long long ans = LLONG_MIN;

//         // Make a[i] the last element
//         for (int i = 1; i < n; i++) {
//             ans = max(ans, a[i] - a[0]);
//         }

//         // Make a[i] the first element
//         for (int i = 0; i < n - 1; i++) {
//             ans = max(ans, a[n - 1] - a[i]);
//         }

//         // Rotate the whole array
//         for (int i = 0; i < n - 1; i++) {
//             ans = max(ans, a[i] - a[i + 1]);
//         }
//         if(n == 1){
//             ans = 0;
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
//         int n;
//         cin>>n;
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         int cnt = 0;
//         int s = -1;
//         int e = 0;
//         for(int i = 0 ; i<n ; i++){
//             if(a[i] == 0){
//                 e = i;
//                 if(e-s != 1){
//                     cnt++;
//                 }
//                 s = e;
//             }
//         }
//         if(n-s != 1){
//           cnt++;
//         }
//         cnt = min(cnt,2);
//         cout<<cnt<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         if(n%2 != 0 || n == 2){
//             cout<<"-1"<<endl;
//         }
//         else{
//            long long mini = 0;
//            long long maxi = 0;
//            if(n%4 == 0 && n%6 == 0){
//               mini = n/6;
//               maxi = n/4;
//            }
//            else if(n%4 == 0 && n%6 != 0){
//                maxi = n/4;
//                mini = (n/6) + 1;
//            }
//            else if(n%6 == 0 && n%4 != 0){
//                mini = n/6;
//                maxi = (n/4); 
//            }
//            else if(n%4 != 0 && n%6 != 0){
//                mini = (n/6)+1;
//                maxi = (n/4); 
//            }
//            cout<<mini<<" "<<maxi<<endl;
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

//         for(int i = 0 ; i<n; i++){
//             if(a[i] == 1){
//               a[i]++;
//             }
//         }

//         for(int i = 1 ; i<n ; i++){
//             if(a[i]%a[i-1] == 0){
//                 a[i]++;
//             }
//         }

//         for(int i = 0 ; i<n ; i++){
//             cout<<a[i]<<" ";
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
//     long long n;
//     cin>>n;
//     string inp = to_string(n);
//     int cnt = 0;
//     char data1 = 0;
//     int ans = 0;
//     for(int i = inp.size()-1 ; i>=0 ; i--){
//         if( cnt == 0 && (inp[i] == '0' || inp[i] == '5') ){
//            cnt++;
//            data1 = inp[i];
//         }
//         else if( cnt == 0 && (inp[i] != '0' && inp[i] != '5') ){
//           ans++;
//         }
//         else if( cnt == 1 ){
//             if(data1 == '0' && (inp[i] == '0' || inp[i] == '5') ){
//                 cnt++;
//             }
//             else if(data1 == '5' && (inp[i] == '2' || inp[i] == '7')){
//                 cnt++;
//             }
//             else{
//                 ans++;
//             }
//         }
//         else if(cnt == 2){
//             break;
//         }
//     }
//     cout<<ans<<endl;
//   } 
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int a[(n*k)];
//         for(int i = 0 ; i<(n*k) ; i++){
//             cin>>a[i];
//         }
//         int dif = n/2;
//         int e = ((n*k)-1)-dif;
//         dif++;
//         int cnt = 0;
//         long long sum = 0;
//         while(cnt < k ){
//             sum = sum + a[e];
//             cnt++;
//             e = e - dif;
//         }
//         cout<<sum<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// void solve(string &s , string &temp , vector<string> &ans , int idx){
//     if(idx == s.size()){
//         ans.push_back(temp);
//         return ;
//     }

//     if(s[idx] == '?'){
//         temp.push_back('1');
//         solve(s,temp,ans,idx+1);
//         temp.pop_back();
//         temp.push_back('0');
//         solve(s,temp,ans,idx+1);
//         temp.pop_back();
//     }
//     else{
//         temp.push_back(s[idx]);
//         solve(s, temp, ans, idx + 1);
//         temp.pop_back();
//     }
// }
// int main(){
//     string s = "1??";
//     string temp;
//     vector<string> ans;
//     int idx = 0;
//     solve(s,temp,ans,idx);
//     for(int i = 0 ; i<ans.size() ; i++){
//         cout<<ans[i]<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool solve(int n , int &m){
//     if(n == m){
//         return true;
//     }
//     if (n < m)
//         return false;

//     if (n % 3 != 0)
//         return false;

//         return solve(n/3, m) || solve(2*n/3, m);
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     int n,m;
//     cin>>n>>m;
//     bool ans = solve(n,m);
//     if(ans){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
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
//         int cnt = 0;
//         if(n != 1){
//         for(int i = n-2 ; i>=0 ; i--){
//             while( a[i] >= a[i+1]){
//                 if(a[i] == 0) {
//                 cnt = -1;
//                 break;
//                 }
//                 a[i] = a[i]/2;
//                 cnt++;
//             }
//             if(i != 0 && a[i] == 0){
//                 cnt = -1;
//                 break;
//             }
//         }
//         }
//         cout<<cnt<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         string s;
//         cin>>s;
//         string t;
//         cin>>t;
//         unordered_map<char,int> m1;
//         unordered_map<char,int> m2;
//         for(int i = 0 ; i<s.size() ; i++){
//             m1[s[i]]++;
//         }
//         for(int i = 0 ; i<t.size() ; i++){
//             m2[t[i]]++;
//         }
//         string temp;
//         for(int i = 0 ; i<s.size() ; i++){
//             if(m2[s[i]] > 0){
//                if(m1[s[i]] > m2[s[i]]){
//                 m1[s[i]]--;
//                }
//                else{
//                 temp.push_back(s[i]);
//                }
//             }
//         }
//         if(temp == t){
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
//         long long a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         long long data = n;
//         map<long long,long long> m;
//         long long maxi = 0;
//         for(int i = 0 ; i<n ; i++){
//             m[a[i]]++;
//             maxi = max(maxi,m[a[i]]);
//         }
//         long long cnt = 0;
//         data = data - maxi;
//         while(data>0){
//             cnt++;
//             if(data - maxi > 0){
//                 data = data - maxi;
//                 cnt = cnt + maxi;
//                 maxi = maxi * 2;
//             }
//             else{
//                 cnt = cnt + data;
//                 data = 0;
//                 break;
//             }
//         }
//         cout<<cnt<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         bool ans = false;
//         if((2*b) < (a+c)){
//             if((a+c)%(2*b) == 0){
//                 ans = true;
//             }
//         }
//         else if((2*b) == (a+c)){
//             ans = true;
//         }
//         else{
//             if(a == 1 || c == 1){
//                 ans = true;
//             }
//             else if( ((2*b)-a)%c == 0 ||  ((2*b)-c)%a == 0){
//                 ans = true;
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

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long x,n;
//         cin>>x>>n;
//         if (x % 2 == 0) {
//             if (n % 4 == 1) x -= n;
//             else if (n % 4 == 2) x += 1;
//             else if (n % 4 == 3) x += n + 1;
//         } else {
//             if (n % 4 == 1) x += n;
//             else if (n % 4 == 2) x -= 1;
//             else if (n % 4 == 3) x -= (n + 1);
//         }
//         cout<<x<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,k,x;
//         cin>>n>>k>>x;
//         long long mini = k*(k+1) / 2;
//         long long maxi = k * (2 * n - k + 1) / 2;
//         if(x >= mini && x<= maxi){
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
//         long long a,b,n;
//         cin>>a>>b>>n;
//         vector<long long> v(n);
//         for(int i = 0 ; i < n ; i++){
//             cin>>v[i];
//         }
//        sort(v.begin(),v.end());
//        int i = 0;
//        long long sum = 0;
//        while(i<n){
//         if(v[i] < a){
//             sum = sum + v[i];
//         }
//         else{
//             break;
//         }
//         i++;
//        }
//        long long cnt = n-i;
//        sum = sum + b + ((a-1)*cnt);
//        cout<<sum<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n, k;
//         cin >> n >> k;
//         long long ans = 0;
//         long long cost = 1;
//         while (cost <= n) {
//             long long take = min(k, n / cost);
//             ans += take;
//             n -= take * cost;
//             cost *= 2;
//         }
//         cout << ans << '\n';
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// long long solve(long long n , long long r){
//     if (r > n) return 0;
//     if (r == 0 || r == n) return 1;

//     r = min(r, n - r);

//     long long ans = 1;
//     for (int i = 1; i <= r; i++) {
//         ans = ans * (n - r + i) / i;
//     }

//     return ans;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m,r,c;
//         cin>>n>>m>>r>>c;
//         long long mult = (n-r+1)*(m-c+1);
//         long long num = r*c;
//         long long ans = 1;
//         if(num%2 == 0){
//             ans++;
//         }
//         for(long long i = 2 ; i<num ; i = i+2 ){
//            ans = ans + solve(num,i);
//         }
//         ans = ans * mult;
//         cout<<ans<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y;
//         cin>>x>>y;
//         bool ans = false;
//         if(x>=y){
//             if(x%y == 0){
//                 ans = true;
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
//         int b[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>b[i];
//         }
//         bool ans = true;
//         int i = 0;
//         int j = 0;
//         while(i<n){
//          if(a[i] == b[i]){
//             i++;
//          }
//          else{
//             break;
//          }
//         }
//         j = i;
//         while(j<n && i<n){
//             if(a[j] != b[j]){
//                 int d1 = b[j]-a[j];
//                 int d2 = b[i]-a[i];
//                 d1 = d1 * (-1);
//                 if(d1 != d2 && d1>0 && d2<0 ){
//                     ans = false;
//                     break;
//                 }
//                 i = j;
//                 j++;
//             }
//             else{
//                 j++;
//             }
//         }
//         if(n == 1){
//             if(b[0] - a[0] < 0){
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

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int cnt1 = 0;
//         int cnt0 = 0;
//         for(int i = 0 ; i<n ; i++){
//             if(s[i] == '0'){
//                 cnt0++;
//             }
//             else{
//                 cnt1++;
//             }
//         }
//         int ans = 1;
//         int j = n-1;
//         if(cnt0 == 0 || cnt1 == 0){
//             ans = 1;
//         }
//         else{
//         if(s[n-1] == '0'){
//             while(j>=0){
//                 if(s[j] == '1'){
//                     break;
//                 }
//                 cnt0--;
//                 j--;
//             }
//             if(cnt0 == 0){
//                 ans = 2;
//             }
//         }
//         else{
//          while(j>=0){
//                 if(s[j] == '0'){
//                     break;
//                 }
//                 cnt1--;
//                 j--;
//             }
//             if(cnt1 == 0){
//                 ans = 2;
//             }
//         }
//         }
//         cout<<ans<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      string s;
      int cntab = 0;
      int cntba = 0;
      for(int i = 0 ; i<s.size()-1 && s.size() > 1 ; i++){
        if(s[i] == 'a' && s[i+1] == 'b'){
            cntab++;
        }
        else if(s[i] == 'b' && s[i+1] == 'a'){
            cntba++;
        }
      }
      if(cntab != cntba && s.size()>1){
            if(s[s.size()-1] == 'a'){
                s[s.size()-1] = 'b';
            }
            else{
                s[s.size()-1] == 'a';
            }
        }
        cout<<s<<endl;
    }
}