#include<bits/stdc++.h>
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	unordered_map<int,list<int>> adj;
	for(int i=0;i<edges.size();i++)
	{
		int u=edges[i].first;
		int v=edges[i].second;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	unordered_map<int,bool> visited;
	unordered_map<int,int> parent;
	queue<int> q;
	q.push(s);
	parent[s]=-1;
	visited[s]=1;
	while(!q.empty())
	{
		int front=q.front();
		q.pop();
		for(auto neighbour:adj[front])
		{
			if(!visited[neighbour])
			{
				visited[neighbour]=1;
				parent[neighbour]=front;
				q.push(neighbour);
			}
		}
	}
	//prepare shortest path

vector<int> ans;
int currentNode=t;
ans.push_back(currentNode);
 while(currentNode!=s)
 {
	 ans.push_back(parent[currentNode]);
	 currentNode=parent[currentNode];
 }

	int i=0,j=ans.size()-1;
	while(i<j)
	{
		swap(ans[i],ans[j]);
		i++;
		j--;
	}
	return ans;
	
}
