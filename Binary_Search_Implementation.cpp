#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define N 1000000007

ll n, t;
int k[N];

///Binary Search Template
bool check(ll m){
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        cnt+=m/k[i];
    }

    if(cnt>=t)return true;
    else return false;
}
void BinarySearch(){
//First half ar jonno 0 return korbe and
//Last half ar jonno 1 return korbe

    ll lo=0, hi=1e18;
    while(lo<hi){

        ll mid = (lo+hi)/2;
        if(check(mid))hi=mid;
        else lo=mid+1;
    }

    cout<<lo<<endl;
}

