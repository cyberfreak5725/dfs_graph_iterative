#include <bits/stdc++.h>
using namespace std;
 vector <int> adj[100005];
 bool visited[100005]={false};
 int ans=0;
 void dfs(int s)
 {
      stack <int> st;
      st.push(s);
        while(!st.empty())
        {
            s=st.top();
            st.pop();
            
            if(visited[s])
              continue;
              
              visited[s]=true;
              //cout<<v<<" ";
              ans++;int j;
              for( j=0;j<(adj[s].size());++j)
              {
                  if(visited[adj[s][j]]==false)
                  {
                    st.push(adj[s][j]);
                  }
              }
        }
 }
int main()
{
    int n,m;
    cin>>n>>m;
   
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int root;
    cin>>root;
    
    
    dfs(root);
    cout<<n-ans<<endl;
    return 0;
}
