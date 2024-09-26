#include<bits/stdc++.h>
using namespace std;
void dij(int src,vector<pair<int,int>>adj[],int n)
{  vector<int>dis(n,INT_MAX);
   //create a priority quque for the min heap value to be at the top 
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   pq.push({0,src});//{dis,src}
   dis[src]=0;
   while(!pq.empty())
   {
    int node=pq.top().second;
    int d=pq.top().first;
    pq.pop();
    //traverse the nodes 
    for(auto it:adj[node])
    {
      int adjWt=it.second;
      int adjNode=it.first;
      if(d+adjWt<dis[adjNode])
      {
        dis[adjNode]=d+adjWt;
        pq.push({dis[adjNode],adjNode});
      }
    }
   }
   cout<<"shortest dis from 0 to nth node is:"<<dis[n-1]<<endl;
}
int main()
{
  
   cout<<"enter the number of vertices"<<endl;
  int n;
  cin>>n;
 cout<<"enter the number of edges:"<<endl;
 int e;
 cin>>e;
//  create the adjacency list along with the weight
vector<pair<int,int>>adj[n];
cout<<"enter the values  for the edges and their weights"<<endl;
for(int i=0;i<e;i++)
{
  int u,v,w;
  cin>>u>>v>>w;
  adj[u].push_back({v,w});
  adj[v].push_back({u,w});
}
  dij(0,adj,n);
return 0;
}