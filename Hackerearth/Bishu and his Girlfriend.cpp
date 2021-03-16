

#include <iostream>
#include<vector>
using namespace std;

void dfs(int node,int dist,int v[],vector<int> gr[],vector <std::pair<int,int> > &gal){
	int i;
	v[node]++;
	for(i=0;i<gal.size();i++){
		if(gal[i].first==node){
			
			if(gal[i].second==0)
			gal[i].second=dist;
			else
			gal[i].second=min(gal[i].second,dist);
			break;
		}
	}
	for(i=0;i<gr[node].size();i++){
		if(v[gr[node][i]]==0)
		dfs(gr[node][i],dist+1,v,gr,gal);
	}
}

int main() {
	vector<int> g[1000];
	vector<std::pair<int,int> > girls;
	int vis[1000],i,n,u,v,q;
	cin>>n;
	for(i=0;i<n-1;i++){
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	cin>>q;
	for(i=0;i<q;i++){
		cin>>u;
		girls.push_back(std::make_pair(u,0));
	}



	dfs(1,0,vis,g,girls);
	
	
	
	u=INT32_MAX;
	v=0;
	for(i=0;i<girls.size();i++){
		//cout<<girls[i].first<<"  "<<girls[i].second<<"\n";
		if(girls[i].second<u)
		{
			u=girls[i].second;
			v=girls[i].first;
		}
		if(girls[i].second==u){
			if(girls[i].first<v)
			v=girls[i].first;
		}
	}
	cout<<v;


}