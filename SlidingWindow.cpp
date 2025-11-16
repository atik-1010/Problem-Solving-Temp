//Sliding Windows

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int l=0, r=k-1;
    
    long long sum = 0;
    long long ans = LLONG_MIN;
    for(int i=l; i<r; i++){
        sum+=a[i];
    }
    
    while(r<n){
        ans = max(ans, sum);
        sum-=a[l];
        if(r+1<n) sum+=a[r+1];
        l++;
        r++;
        
    }
    cout<<ans<<endl;


    return 0;
}
