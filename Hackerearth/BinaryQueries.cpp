#include <iostream>
#include<vector>
using namespace std;

int main() {
	int i,n,q,k,a,b;
    vector <int> arr;
    cin>>n>>q;
    for(i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
    }
    for(i=0;i<q;i++){
        cin>>k;
        if(k==1){
            cin>>a;
            arr[a-1]=1-arr[a-1];
        }
        else{
            cin>>a>>b;
            if(arr[b-1]==0)
            cout<<"EVEN\n";
            else
            cout<<"ODD\n";
        }
    }
}