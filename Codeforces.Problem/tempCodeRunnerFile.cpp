#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i = 0 ; i<n ; i++){
            cin>>p[i];
        }
        int rem = n%3;
        int d = n/3;
        int comp = n-3+1;
        vector<int> v(3);
        bool ans = true;
        int j = 0;
        while(j<n && v.size() != 3){
            int i = j;
            int temp1 = v.size();
            while(i<(i+d)){
                if(p[i] <= comp){
                    v.push_back(i);
                    break;
                }
                i++;
            }
            if(temp1 == v.size()){
                while(rem != 0){
                    i++;
                    if(p[i] <= comp){
                    v.push_back(i);
                    break;
                  }
                }
            }
            if(temp1 == v.size()){
                ans = false;
                break;
            }
          comp++;
           if( i < (j+3) ){
            i++;
            rem = rem + ((j+3)-i);
           }
           else{
            i++;
           }
        }
        if(ans){
            cout<<"YES"<<endl;
            for(int i = 0 ; i<3 ; i++){
                cout<<v[i]<<" ";
            }
        }
        else{
            cout<<"NO";
        }
    }
}