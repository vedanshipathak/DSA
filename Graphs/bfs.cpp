#include<bits/stdc++.h>
using namespace std;
void bfs(int n,int m,vector<int>adj[])
{
   queue<int>q;
   int vis[n+1]={0};
   vis[1]=1;
   q.push(1);
   while(!q.empty())
   {
    int front=q.front();
    q.pop();
    cout<<front<<" ";
    //check for the neighbors and push it in queue
    for(auto it:adj[front])//checks for the elements in the vector at adj pos it
    {
      if(!vis[it])
      {
        q.push(it);
        vis[it]=1;
      }
    }
   }

}
int main()
{
  int n,m;
  cout<<"enter the node:"<<endl;
  cin>>n;
  cout<<"enter the edges:"<<endl;
  cin>>m;
  //adjacency list
  vector<int>adj[n+1];//n+1 because we need nodes starting from 1 
  for(int i=0;i<m;i++)//< m since obviousy we need m edges between the 2 nodes
  {
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  bfs(n,m,adj);
}