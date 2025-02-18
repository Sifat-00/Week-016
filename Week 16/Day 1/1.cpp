#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
       int n,m;
       cin >> n >> m;
       map<int,set<int>> mp;
       for(int i=0;i<m;i++)
       {
        int u,v;
        cin >> u >> v ;
        mp[u].insert(v);
        mp[v].insert(u);
       }
       int leaf = -1;

       for(int i=1;i<=n;i++)
       {
        if(mp[i].size() == 1)
        {
            leaf = i;
            break;
        }
       }
       int parent = -1;
        int x,y;
       for(int i=1;i<=n;i++)
       {
         if(mp[i].find(leaf) != mp[i].end())
         {
            y = mp[i].size()-1;
            parent = i;
         }
       }

       for(int i=1;i<=n;i++)
       {
            if(mp[i].find(parent) != mp[i].end() && mp[i].size()>1)
            {
                x=mp[i].size();
                break;
            }
       }
       cout << x <<" " << y << endl;
    }
    
    return 0;
}

