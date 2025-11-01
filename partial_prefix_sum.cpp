#include <bits/stdc++.h>
using namespace std;

// akta array dewa ache, and kichu range dewa ache protita range ar sathe k jog last array ta output dite hobe
void fun(){
  int n;
  cin>>n;
  int q;
  cin>>q;
  std::vector<int>pre(n+2);
  while(q--){
    int l, r;
    cin>>l>>r;
    
    pre[l]++;
    pre[r+1]--;
    
  }
  for(int i=1; i<=n; i++){
    pre[i] +=pre[i-1];
  }
  for(int i=1; i<=n; i++){
    cout<<pre[i]<<" \n"[i==n];
  }
}
int main() 
{
    fun();
    return 0;
}
