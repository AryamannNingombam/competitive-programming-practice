// class Solution {
// public:
//      bool checkForCycle(int s, int V, vector<vector<int>>& adj, vector<int> &visited)
//     {
//         // Create a queue for BFS
//         queue<pair<int, int>> q;
//         visited[s] = true;
//         q.push({s, -1});
//         while (!q.empty())
//         {
//             int node = q.front().first;
//             int par = q.front().second;
//             q.pop();
 
//             for (auto it : adj[node])
//             {
//                 if (!visited[it])
//                 {
//                     visited[it] = true;
//                     q.push({it, node});
//                 }
//                 else if (par != it)
//                     return true;
//             }
//         }
//         return false;
//     }
//     bool canFinish(int V, vector<vector<int>>& adj) {
//         vector<int> vis(V - 1, 0);
//         for (int i = 1; i <= V; i++)
//         {
//             if (!vis[i])
//             {
//                 if (checkForCycle(i, V, adj, vis))
//                     return true;
//             }
//         }
//         return false;
//     }
// };

//yeh nahi chal raha lmao


class Solution {
public:
void create(vector<int>graph[],int i,int j)
{
    graph[j].push_back(i);
}
bool detectCycle(vector<int>graph[],vector<int>&visited,vector<int>&sttrack,int i)
{
    visited[i]=1;
    sttrack[i]=1;
    for(auto it:graph[i])
    {
        if(visited[it]==0 && detectCycle(graph,visited,sttrack,it))
            return true;
        else if(visited[it]==1 && sttrack[it]==1)
            return true;
    }
    sttrack[i]=0;
    return false;
}
bool canFinish(int n, vector<vector<int>>& prerequisites) {
    vector<int>visited(n,0);
    vector<int>sttrack(n,0);
    vector<int>graph[n];
    for(int i=0;i<prerequisites.size();i++)
    {
        create(graph,prerequisites[i][0],prerequisites[i][1]);
    }
    for(int i=0;i<n;i++)
      {
        if(visited[i]==0)
        {
          bool s=detectCycle(graph,visited,sttrack,i);
          if(s==true)
             return false;
        }
      }
    return true;
}
};

//same logic but this one works somehow