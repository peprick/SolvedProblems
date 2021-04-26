#include<bits/stdc++.h>
#define vi vector<int>
#define vii vector<vector<int> >
#define vll vector<long long int>

#define pb push_back

#define pr std::pair
#define mp std::make_pair
#define ff first
#define ss second

#define ll long long

#define foc(i,st) for(i=0;i<st.size();i++)
#define fo(k,n) for(k=0;k<n;k++)

#define rem 1000000007

using namespace std;


void solve(){
  int n,i,k;
  ll r;
  vll ar;
  cin>>n;
  fo(i,n){
    cin>>r;
    if(ar.empty())
    ar.pb(r);
    else if(ar[ar.size()-1]<=r)
    ar.pb(r);

    else{
      int lt=0,rt=ar.size()-1,mid;
      if(ar[lt]>r)
      ar[lt]=r;
      else if(ar[rt]>r && ar[rt-1]<=r)
      ar[rt]=r;
      else{
      mid=(lt+rt)/2;
      while(lt<rt-1){
        if(ar[mid-1]>r)
        rt=mid;
        else if(ar[mid-1]<=r  && ar[mid]>r)
        {
          ar[mid]=r;
          break;
        }
        else if(ar[mid]<=r)
        lt=mid;
        mid=(lt+rt)/2;
      }
    }
    }
  }

  cout<<ar.size()<<" ";
  fo(i,ar.size())
  cout<<ar[i]<<" ";
  cout<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  int t;
  cin>>t;
  while(t){
  solve();
  t--;
}

}
