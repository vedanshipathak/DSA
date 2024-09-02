#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cout<<"enter n"<<endl;
  cin>>n;
  cout<<"enter m"<<endl;
  cin>>m;
  //for adjacency list
  vector<int>adj[n+1];
  for(int i=0;i<m;i++)
  {
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
 for(int i=0;i<m;i++)
 { cout<<i<<"->";
  for(int j=0;j<adj[i].size();j++)
  { 
    cout<<adj[i][j]<<" ";
  }
  cout<<endl;
 }
}