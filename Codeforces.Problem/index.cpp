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

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//       string s;
//       cin>>s;
//       int cntab = 0;
//       int cntba = 0;
//       for(int i = 0 ; i<s.size()-1 && s.size() > 1 ; i++){
//         if(s[i] == 'a' && s[i+1] == 'b'){
//             cntab++;
//         }
//         else if(s[i] == 'b' && s[i+1] == 'a'){
//             cntba++;
//         }
//       }
//       if(cntab != cntba && s.size()>1){
//             if(s[s.size()-1] == 'a'){
//                 s[s.size()-1] = 'b';
//             }
//             else{
//                 s[s.size()-1] = 'a';
//             }
//         }
//         cout<<s<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//        long long n;
//        cin>>n;
//        int ans = INT_MAX;
//        //5 wale ke liye check karte ha 
//        long long num = n;
//        int cnt = 0;
//        while(num != 0){
//           if(num%10 == 5){
//             break;
//           }
//           else{
//             cnt++;
//             num = num/10;
//           }
//        }
//        num = num/10;
//        while(num != 0){
//         if(num%10 == 2 || num%10 == 7){
//             break;
//         }
//         else{
//             num = num/10;
//             cnt++;
//         }
//        }
//        ans = min(ans,cnt);
//        cnt = 0;

//        //0 ke liye check karte ha

//        while(n != 0){
//           if(n%10 == 0){
//             break;
//           }
//           else{
//             cnt++;
//             n = n/10;
//           }
//        }
//        n = n/10;
//        while(n != 0){
//         if(n%10 == 0 || n%10 == 5){
//             break;
//         }
//         else{
//             n = n/10;
//             cnt++;
//         }
//        }
//        ans = min(ans,cnt);
//        cout<<ans<<endl;
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
//         int a[n];
//         for(long long i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         long long cnt1 = 0;
//         long long cnt0 = 0;
//         for(long long i = 0 ; i<n ; i++){
//             if(a[i] == 0){
//                 cnt0++;
//             }
//             else if(a[i] == 1){
//                 cnt1++;
//             }
//         }
//         long long ans = 0;
//         if(cnt1 != 0){
//             if(cnt0 == 0){
//                 ans = 1;
//             }
//             else{
//                 ans = (pow(2,cnt0));
//             }
//             ans = ans*cnt1;
//         }
//         cout<<ans<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         long long a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         if(n%2 == 0){
//             cout<<2<<endl;
//             cout<<1<<" "<<n<<endl;
//             cout<<1<<" "<<n<<endl;
//         }
//         else{
//             cout<<4<<endl;
//             cout<<1<<" "<<n-1<<endl;
//             cout<<1<<" "<<n-1<<endl;
//             cout<<n-1<<" "<<n<<endl;
//             cout<<n-1<<" "<<n<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         long long i = 1;
//         while(1){
//             if(n%i == 0){
//                 i++;
//             }
//             else{
//                 break;
//             }
//         }
//         i--;
//         cout<<i<<endl;
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
//         vector<int> a(n);
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         sort(a.begin(),a.end());
//         int fans = INT_MAX;
//         int ans = 0;
//         int s = 0;
//         int e = 0;
//         int j = n-1;
//         while(j>0){
//             if(a[j]-a[j-1] <= k){
//                 e = j;
//                 s = j-1;
//                 break;
//             }
//             else{
//                 ans++;
//                 j--;
//             }
//         }
//         while(s>=0){
//             if(a[e]-a[s] <= k){
//                 e = s;
//                 s--;
//             }
//             else{
//                 break;
//             }
//         }
//         ans = ans + 1 + s;
//         fans = min(fans,ans);
//         ans = 0;
//         if(s >= 1){
//             e = s;
//             s--;
//             while(s>=0){
//              if(a[e]-a[s] <= k){
//                 ans++;
//                 e = s;
//                 s--;
//              }
//              else{
//                 fans = min(fans,(n-(ans+1)));
//                 ans = 0;
//                 e = s;
//                 if(s >= 1){
//                   s--;
//                 }
//                 else{
//                     break;
//                 }
//              }
//             }
//             fans = min(fans,(n-(ans+1)));
//         }
//         cout<<fans<<endl;
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
//     string s;
//     cin>>s;
//     int i = 0 ; 
//     int j = 1;
//     int cnt = 1;
//     while(j<n){
//         if(s[j] == s[i]){
//            j++;
//         }
//         else{
//             cnt = max(cnt,j-i);
//             i = j;
//             j++;
//         }
//     }
//     cnt = max(cnt,j-i);
//     cout<<cnt+1<<endl;
//   }
// }

// https://codeforces.com/problemset/problem/1559/A

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         long long a[n];
//         for(long long i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         long long ans = a[0];
//         for(int i = 1 ; i<n ; i++){
//             ans = ans&a[i];
//         }
//         cout<<ans<<endl;
//     }
// }

// https://codeforces.com/problemset/problem/1543/A

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     while(t--){
//         long long a,b;
//         cin>>a>>b;
//         if(b<a){
//             swap(a,b);
//         }
//         long long dif = b-a;
//         if(dif == 0){
//             cout<<0<<" "<<0<<endl;
//         }
//         else{
//             if(b%dif == 0){
//                 cout<<dif<<" "<<0<<endl;
//             }
//             else{
//                 long long data = b%dif;
//                 long long temp = dif-data;
//                 cout<<dif<<" "<<min(data,temp)<<endl;
//             }
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// long long dist(long long x1,long long y1,long long x2,long long y2){
//     return abs(x1-x2)+abs(y1-y2);
// }

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         long long n,m,i,j;
//         cin>>n>>m>>i>>j;

//         long long d1 = dist(i,j,1,1)
//                      + dist(1,1,n,m)
//                      + dist(n,m,i,j);

//         long long d2 = dist(i,j,1,m)
//                      + dist(1,m,n,1)
//                      + dist(n,1,i,j);

//         if(d1 >= d2)
//             cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n";
//         else
//             cout<<1<<" "<<m<<" "<<n<<" "<<1<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         bool ans = false;
//         if(n%2 != 0){
//             ans = true;
//         }
//         else{
//             n = n/2;
//             while(n > 1){
//                 if(n%2 != 0){
//                     ans = true;
//                     break;
//                 }
//                 n = n/2;
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

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> p(n);

//         for (int i = 0; i < n; i++)
//             cin >> p[i];

//         bool ok = false;

//         for (int j = 1; j < n - 1 && !ok; j++) {

//             int left = -1, right = -1;

//             // Find smaller element on left
//             for (int i = 0; i < j; i++) {
//                 if (p[i] < p[j]) {
//                     left = i;
//                     break;
//                 }
//             }

//             // Find smaller element on right
//             for (int k = j + 1; k < n; k++) {
//                 if (p[k] < p[j]) {
//                     right = k;
//                     break;
//                 }
//             }

//             if (left != -1 && right != -1) {
//                 cout << "YES\n";
//                 cout << left + 1 << " " << j + 1 << " " << right + 1 << "\n";
//                 ok = true;
//             }
//         }

//         if (!ok)
//             cout << "NO\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     while(t--){
//       string s;
//       cin>>s;
//       long long n = 0;
//       long long cnt1 = 0;
//       long long cnt0 = 0;
//       long long i = 0;
//       while( i < s.size()){
//         if(s[i] == '1'){
//             cnt1++;
//         }
//         else{
//             cnt0++;
//         }
//         i++;
//       }
//       n = min(cnt1,cnt0);
//       if(n%2 == 0){
//         cout<<"NET"<<endl;
//       }
//       else{
//         cout<<"DA"<<endl;
//       }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     long long n;
//     cin>>n;
//     long long cnt = 0;
//     while(n != 1){
//        if(n%6 == 0){
//         n = n/6;
//        }
//        else{
//         if( (n*2)%6 == 0){
//             n = n * 2;
//         }
//         else{
//             break;
//         }
//        }
//        cnt++;
//     }
//     if(n == 1){
//         cout<<cnt<<endl;
//     }
//     else{
//         cout<<-1<<endl;
//     }
// }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long long n, x;
//         cin >> n >> x;

//         long long sum = 0;
//         long long mx = 0;

//         for (int i = 0; i < n; i++) {
//             long long a;
//             cin >> a;
//             sum += a;
//             mx += (a + x - 1) / x;
//         }

//         long long mn = (sum + x - 1) / x;

//         cout << mn << " " << mx << "\n";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> b(n);
//         for (int i = 0; i < n; i++)
//             cin >> b[i];

//         vector<int> ans;
//         ans.push_back(b[0]);

//         for (int i = 1; i < n; i++) {
//             if (b[i] >= b[i - 1]) {
//                 ans.push_back(b[i]);
//             } else {
//                 ans.push_back(1);
//                 ans.push_back(b[i]);
//             }
//         }

//         cout << ans.size() << "\n";
//         for (int x : ans)
//             cout << x << " ";
//         cout << "\n";
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int k;
//         cin>>k;
//         int c[k];
//         for(int i = 0 ; i<k ; i++){
//             cin>>c[i];
//         }
//         int cnt3 = 0;
//         int cnt2 = 0;
//         for(int i = 0 ; i<k ; i++){
//             if(c[i] > 2 ){
//                 cnt3++;
//             }
//             else if(c[i] == 2){
//                 cnt2++;
//             }
//         }
//         bool ans = false;
//         if(cnt3 > 0 || cnt2 > 1){
//             ans = true;
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
//         bool ans = false;
//         vector<vector<int>> v(n, vector<int>(3, 0));
//         int cnt1 = 0;
//         int cnt2 = 0;
//         int cnt3 = 0;
//         for(int i = 0 ; i<n ; i++){
//             if(a[i] == 1){
//                 cnt1++;
                
//             }
//             else if(a[i] == 2){
//                 cnt2++;
//             }
//             else if(a[i] == 3){
//                 cnt3++;
//             }
//             v[i][0] = cnt1;
//             v[i][1] = cnt2;
//             v[i][2] = cnt3;
//         }
//         int i = 0;
//         while(i<(n-2)){
//             if( (v[i][1] + v[i][2]) <= ((i+1)/2) ){
//                 break;
//             }
//             i++;
//         }
//         if(i == n-2){
//             cout<<"NO"<<endl;
//         }
//         else{
//             int j = i;
//             int k = n-2;
//             while(j<(n-2) && k>=(i+1)){
//                 int num1 = v[k][0] - v[j][0];
//                 int num2 = v[k][1] - v[j][1];
//                 int num3 = v[k][2] - v[j][2];
//                 if(num3 <= ((k-j)/2) ){
//                     ans = true;
//                     break;
//                 }
//                 else{
//                     if(v[j+1][1] + v[j+1][2] <= ((j+2)/2) ){
//                         j++;
//                     }
//                     else{
//                         int data = 0;
//                         if(a[k] == 3){
//                             data = 1;
//                         }
//                         if( (num3-data) <= ((k-1-j)/2) ){
//                             k--;
//                         }
//                         else{
//                             ans = false;
//                             break;
//                         }
//                     }
//                 }
//             }
//             if(ans){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
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
//         int n,k;
//         cin>>n>>k;
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//           cin>>a[i];
//         }
//         unordered_map<int,int> freq;
//         for(int i = 0 ; i<n ; i++){
//             freq[a[i]]++;
//         }
//         multiset<int> st;
//         for(auto i:freq){
//             st.insert(i.second);
//         }
//         int ans = 0;
//         int total = n;
//         int offadd = 0;
//         while(st.size() > 0){
//             int size = st.size();
//             int add = 0;
//            if(total > k){
//                 add--;
//                 offadd--;
//                 for (auto it = st.begin(); it != st.end(); ) {
//                 if ((*it + offadd) == 0) {
//                     it = st.erase(it);
//                 } else {
//                     ++it;
//                 } 
//               }
//            }
//            else if(total == k){
//             ans++;
//             int data = *st.begin() + offadd;
//             st.erase(st.begin());
//             offadd -= data;
//             add -= data;
//             for (auto it = st.begin(); it != st.end(); ) {
//                 if ((*it + offadd) == 0) {
//                     it = st.erase(it);
//                 } else {
//                     ++it;
//                 } 
//               }
//            }
//            else{
//             if( (k-total)%(st.size()) == 0){
//                 offadd++;
//                 add++;
//             }
//             else{
//                 offadd--;
//                 add--;
//                 for (auto it = st.begin(); it != st.end(); ) {
//                 if ((*it + offadd) == 0) {
//                     it = st.erase(it);
//                 } else {
//                     ++it;
//                 } 
//               }
//             }
//            }
//            total = total + (size*add);
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
//        int n;
//        cin>>n;
//        int a[n];
//        for(int i = 0 ; i<n ; i++){
//         cin>>a[i];
//        }
//        int part = 0;
//        int cnt1 = 0;
//        int cnt2 = 0;
//        int cnt3 = 0;
//        for(int i = 0 ; i<n ; i++){
//         if(part == 3){
//             break;
//         }
//         if(a[i] == 1) cnt1++;
//         else if(a[i] == 2) cnt2++;
//         else if(a[i] == 3) cnt3++;

//         if(part == 0 && cnt2 + cnt3 <= cnt1 ){
//             part++;
//             while(cnt2 + (cnt3+1) <= cnt1 && a[i+1] == 3){
//                 cnt3++;
//                 i++;
//             }
//             cnt1 = 0;
//             cnt2 = 0;
//             cnt3 = 0;
//         }
//         else if(part == 1 && cnt3 <= cnt1 + cnt2 ){
//             part++;
//             cnt1 = 0;
//             cnt2 = 0;
//             cnt3 = 0;
//         }
//         else if(part > 1){
//             part++;
//         }
//        }
//        if(part == 3){
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
//         int a,b,c;
//         cin>>a>>b>>c;
//         if(c%2 == 0){
//             a = a + (c/2);
//             b = b + (c/2);
//         }
//         else{
//             a = a + 1 + (c/2);
//             b = b + (c/2);
//         }

//         if(a<=b){
//             cout<<"Second"<<endl;
//         }
//         else{
//             cout<<"First"<<endl;
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
//         int odd = 0;
//         for(int i = 0 ; i<n ; i++){
//             if(a[i]%2 != 0){
//              odd++;
//             }
//         }
//         if(odd%2 == 0){
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
//         bool ans = false;
//         int mini = INT_MAX;
//         for(int i = 0 ; i<n-1 ; i++){
//             if(a[i+1] < a[i]){
//                 ans = true;
//                 break;
//             }
//             mini = min(mini,(a[i+1]-a[i]));
//         }
//         mini = mini/2 + 1;
//         if(ans){
//             cout<<0<<endl;
//         }
//         else{
//             cout<<mini<<endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k,x;
//         cin>>n>>k>>x;
        
//         if(x != 1){
//             cout<<"YES"<<endl;
//             cout<<n<<endl;
//             for(int i = 0 ; i<n ; i++){
//                 cout<<1<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             if(k == 1){
//                 cout<<"NO";
//             }
//             else if(k == 2){
//                 if(n%2 == 0){
//                     cout<<"YES"<<endl;
//                     cout<<(n/2)<<endl;
//                     for(int i = 0 ; i<(n/2) ; i++){
//                         cout<<2<<" ";
//                     }
//                 }
//                 else{
//                     cout<<"NO";
//                 }
//             }
//             else{
//                 if(n == 1){
//                     cout<<"NO";
//                 }
//                 else{
//                     if(n%2 == 0){
//                         cout<<"YES"<<endl;
//                         cout<<(n/2)<<endl;
//                         for(int i = 0 ; i<(n/2) ; i++){
//                         cout<<2<<" ";
//                       }
//                     }
//                     else{
//                         cout<<"YES"<<endl;
//                         cout<<(n/2)<<endl;
//                         for(int i = 0 ; i<((n/2)-1) ; i++){
//                         cout<<2<<" ";
//                         }
//                         cout<<3<<" ";
//                     }
//                 }
//             }
//             cout<<endl;
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
//         vector<int> a(n);
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         sort(a.begin(),a.end());
//         vector<int> b;
//         vector<int> c;
//         int i = 0;
//         while(i<n){
//             if(a[i] == a[0]){
//                 b.push_back(a[i]);
//                 i++;
//             }
//             else{
//                 break;
//             }
//         }
//         while(i<n){
//             c.push_back(a[i]);
//             i++;
//         }
//         if(c.size() == 0){
//             cout<<-1<<endl;
//         }
//         else{
//             cout<<b.size()<<" "<<c.size()<<endl;
//             for(int i = 0 ; i<b.size() ; i++){
//                 cout<<b[i]<<" ";
//             }
//             cout<<endl;
//             for(int i = 0 ; i<c.size() ; i++){
//                 cout<<c[i]<<" ";
//             }
//             cout<<endl;
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
//         int cnt1 = 0;
//         int cnt0 = 0;
//         for(int i = 0 ; i<n ; i++){
//             if(a[i] == 1){
//                 cnt1++;
//             }
//             else{
//                 cnt0++;
//             }
//         }
//         int ans = 0;
//         int size = 0;
//         if(n%2 == 0){
//          size = n/2;
//         }
//         else{
//             size = n/2 + 1;
//         }

//         if(cnt1 < size){
//           ans = size-cnt1;
//           cnt0 = cnt0-ans;
//         }
//         if(cnt0%2 != 0){
//             ans++;
//           }
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
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         int b[n];
//         for(int i = 0 ; i<n ; i++){
//             b[i] = n - a[i]+1;
//         }
//         for(int i = 0 ; i<n ; i++){
//             cout<<b[i]<<" ";
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
//         int n;
//         cin>>n;
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         int i = 0;
//         int j = 0;
//         int maxi = 0;
//         while(j<n){
//           if(a[j] == 0){
//             j++;
//             if(a[i] == 1){
//                 i = j;
//             }
//           }
//           else{
//             if(a[i] == 0){
//             maxi = max(maxi,(j-i));
//             }
//             j++;
//             i = j;
//           }
//         }
//         if(a[i] == 0){
//             maxi = max(maxi,(j-i));
//             }
//         cout<<maxi<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     while(t--){
//         long long n,k;
//         cin>>n>>k;
//         bool ans = false;
//         if(n%k == 0 || n%2 == 0){
//             ans = true;
//         }
//         else{
//             n = n-k;
//             if(n > 0){
//                 if(n%2 == 0){
//                     ans = true;
//                 }
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
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         int fans = 0;
//         bool ans = true;
//         if(d<b){
//             ans = false;
//         }
//         else{
//             fans = d-b;
//             if( (a+(d-b)) < c){
//                 ans = false;
//             }
//             else{
//                 fans = fans + (a+(d-b)) - c;
//             }
//         }
//         if(ans){
//            cout<<fans<<endl; 
//         }
//         else{
//             cout<<-1<<endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,k;
//         cin>>x>>k;
//         if(x%k != 0){
//             cout<<1<<endl;
//             cout<<x<<endl;
//         }
//         else{
//             cout<<2<<endl;
//             cout<<x-1<<" "<<1<<endl;
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
//         string s;
//         cin>>s;
//         int i = 0 ; 
//         int j = s.size()-1;
//         while(i<j){
//             if(s[i] == s[j]){
//                 break;
//             }
//             i++;
//             j--;
//         }
//         if(j>=i){
//            cout<<(j-i+1)<<endl;
//         }
//         else{
//             cout<<0<<endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     while (b != 0) {
//         int t = a % b;
//         a = b;
//         b = t;
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
//         bool ans = false;
//         for(int i = 0 ; i<n-1 ; i++){
//             for(int j = i+1 ; j<n ; j++){
//                 if(gcd(a[i],a[j]) <= 2){
//                     ans = true;
//                     break;
//                 }
//             }
//             if(ans){
//                 break;
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
//         vector<int> prefix(n);
//         int cnt2 = 0;
//         for(int i = 0 ; i<n ; i++){
//             if(a[i] == 2){
//                 cnt2++;
//                 prefix[i] = cnt2;
//             }
//         }
//         int total = cnt2;
//         if(total == 0){
//             cout<<1<<endl;
//         }
//         else{
//             int index = -1;
//             for(int i = 0 ; i<n ; i++){
//                 if((total-prefix[i]) == prefix[i]){
//                     index = i+1;
//                     break;
//                 }
//             }
//             cout<<index<<endl;
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
//         vector<long long> a(n);
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         if(a[0] == a[n-1]){
//             cout<<"NO"<<endl;
//         }
//         else{
//             reverse(a.begin(),a.end());
//             cout<<"YES"<<endl;
//             if(a[1] == a[0]){
//                 cout<<a[0]<<" ";
//                 int j = 2;
//                 while(j<n){
//                     if(a[j] == a[1]){
//                         j++;
//                     }
//                     else{
//                         break;
//                     }
//                 }
//                 for(int i = j ; i<n ; i++){
//                     cout<<a[i]<<" ";
//                 }
//                 for(int i = 1 ; i<j ; i++){
//                 cout<<a[i]<<" ";
//                 }
//             }
//             else{
//                 for(int i = 0 ; i<n ; i++){
//                     cout<<a[i]<<" ";
//                 }
//             }
//             cout<<endl;
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
//         int ans = 0;
//         int i = 0;
//         while(i<n-1){
//             if( (a[i]%2 == 0 && a[i+1]%2 != 0) || (a[i]%2 != 0 && a[i+1]%2 == 0) ){
//                 i++;
//             }
//             else{
//                 i++;
//                 ans++;
//             } 
//         }
//         cout<<ans<<endl;
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
//         long long ans = 0;
//         if(n < 10){
//             ans = n;
//         }
//         else{
//             ans = ans + 9;
//             long long i = 1;
//             long long mult = 10;
//             long long num = 10;
//             while(num <= n){
//                 num = mult*i;
//                 ans++;
//                 i++;
//                 if(i == 10){
//                     mult = mult*10;
//                     i = 1;
//                 }
//             }
//             ans--;
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
//         int n,a,b;
//         cin>>n>>a>>b;
//         if(n == a && n == b){
//             cout<<"YES"<<endl;
//         }
//         else{
//             if( (a+b) > n ){
//                 cout<<"NO"<<endl;
//             }
//             else{
//                 if(abs(a-(n-b)) >= 2){
//                     cout<<"YES"<<endl;
//                 }
//                 else{
//                     cout<<"NO"<<endl;
//                 }
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
//         int a[n];
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         int digit = a[0];
//         for(int i = 1 ; i<n ; i++){
//             digit = digit^a[i];
//         }
//         int dig = digit^a[0];
//         for(int i = 1 ; i<n ; i++){
//             dig = dig ^ (a[i]^digit);
//         }
//         if(n == 1){
//             cout<<a[0]<<endl;
//         }
//         else{
//         if(dig == 0 && n != 1){
//             cout<<digit<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }
//       }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         string temp;
//         temp = s;
//         vector<int> cnt1;
//         vector<int> cnt0;
//         for(int i = 0 ; i<s.size() ; i++){
//             if(s[i] == '1'){
//                 cnt1.push_back(i);
//             }
//             else{
//                 cnt0.push_back(i);
//             }
//         }
//         int j = 0;
//         if(cnt1.size()>cnt0.size()){
//             for(int i = 0 ; i<cnt1.size() ; i++){
//                 if(j<cnt0.size()){
//                     swap(s[cnt0[j]],s[cnt1[i]]);
//                     j++;
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         else{
//             for(int i = 0 ; i<cnt0.size() ; i++){
//                 if(j<cnt1.size()){
//                     swap(s[cnt1[j]],s[cnt0[i]]);
//                     j++;
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         int index = s.size();
//         for(int i = 0 ; i<s.size() ; i++){
//             if(s[i] == temp[i]){
//                 index = i;
//                 break;
//             }
//         }
//         cout<<(s.size()-index)<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,p;
//         cin>>n>>p;
//         vector<int> a(n);
//         for(int i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         vector<int> b(n);
//         for(int i = 0 ; i<n ; i++){
//             cin>>b[i];
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
//         string s;
//         cin>>s;
//         int i = 0;
//         int j = 0;
//         int maxi = 0;
//         while(j<n){
//             if(s[j] == '#'){
//                 j++;
//                 if(s[i] == '*'){
//                     i = j;
//                 }
//             }
//             else{
//                 if(s[i] == '#'){
//                maxi = max(maxi,(j-i));
//                }
//                j++;
//                i = j;
//             }
//         }
//         if(s[i] == '#'){
//             maxi = max(maxi,(j-i));
//         }
//         cout<<((maxi+2-1)/2)<<endl;
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
//         long long a[n];
//         for(long long i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         long long rem = 0;
//         long long i = 0;
//         while(i < n){
//             a[i] = a[i] + rem;
//             rem = 0;
//             if(a[i] >= i+1 ){
//                 rem = a[i] - (i + 1);
//                 a[i] = (i+1);
//             }
//             else{
//                 break;
//             }
//             i++;
//         }
//         if( i != n){
//             cout<<"NO"<<endl;
//         }
//         else {
//             cout<<"YES"<<endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// void dfs(unordered_map<int,list<int>> &m,
//          vector<int> &comp,
//          unordered_map<int,bool> &visited,
//          int node,
//          int id){

//     visited[node] = true;
//     comp[node] = id;

//     for(auto i : m[node]){
//         if(!visited[i]){
//             dfs(m, comp, visited, i, id);
//         }
//     }
// }

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n, x, y;
//         cin >> n >> x >> y;

//         vector<int> p(n);
//         for(int i = 0; i < n; i++)
//             cin >> p[i];

//         unordered_map<int,list<int>> m;

//         // Build graph
//         for(int i = 1; i + x <= n; i++){
//             m[i].push_back(i + x);
//             m[i + x].push_back(i);
//         }

//         for(int i = 1; i + y <= n; i++){
//             m[i].push_back(i + y);
//             m[i + y].push_back(i);
//         }

//         unordered_map<int,bool> visited;
//         vector<int> comp(n + 1, 0);

//         int id = 1;
//         for(int i = 1; i <= n; i++){
//             if(!visited[i]){
//                 dfs(m, comp, visited, i, id);
//                 id++;
//             }
//         }

//         bool ans = true;

//         for(int i = 1; i <= n; i++){
//             if(comp[i] != comp[p[i-1]]){
//                 ans = false;
//                 break;
//             }
//         }

//         if(ans)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     while(t--){
//         long long n,p;
//         cin>>n>>p;
//         long long a[n];
//         for(long long i = 0 ; i<n ; i++){
//             cin>>a[i];
//         }
//         long long b[n];
//         for(long long i = 0 ; i<n ; i++){
//             cin>>b[i];
//         }
//         vector<pair<long long,long long>> v;
//         for(int i = 0  ; i<n ; i++){
//             if(b[i] < p){
//                 v.push_back({b[i],a[i]});
//             }
//         }
//         sort(v.begin(),v.end());
//         long long ans = p;
//         long long rem = n-1;
//         for(auto i:v){
//             if(i.second <= rem){
//                 ans = ans + (i.second * i.first);
//                 rem = rem-i.second;
//             }
//             else{
//                 ans = ans + (rem * i.first);
//                 rem = 0;
//             }
            
//             if(rem == 0){
//                 break;
//             }
//         }
//         if(rem > 0){
//             ans = ans + (rem * p);
//         }
//         cout<<ans<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;

//     while (t--) {
//       int n;
//       cin >> n;
//       long long sum = 0;
//       long long mini1 = INT_MAX;
//       long long mini2 = INT_MAX;

//       for (int i = 0; i < n; i++) {
//         int m;
//         cin >> m;

//         vector<long long> a(m);

//         for (int j = 0; j < m; j++) {
//             cin >> a[j];
//         }
   
//         sort(a.begin(),a.end());
//         mini1 = min(mini1 , a[0]);
//         mini2 = min(mini2 , a[1]);
//         sum = sum + a[1];
//     }
//     cout<<(sum-mini2+mini1)<<endl;
//   }
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