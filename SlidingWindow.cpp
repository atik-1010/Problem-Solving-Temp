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



// Another Code 
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  
  vector<int>a(n);
  for(int i=0; i<n; i++){
      cin>>a[i];
  }
  
  int l=0, r = 0;
  
  map<int, int>m;
  int ans = 0;
  
  while(r<n){
      m[a[r]]++;
      if(m[a[r]]>1){
          while(m[a[r]]>1){
              m[a[l]]--;
              l++;
          }
      }
      ans = max(ans, r-l+1);
      r++;
  }
  
    cout<<ans<<endl;

    return 0;
}
