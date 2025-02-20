#include<bits/stdc++.h>
#include<string.h>
#include<string>
#define endl '\n'
#define ll long long
using namespace std;

void solve()
{

    int n, root = -1; 
    cin >> n;
    vector<int> c(n+1),p(n+1);
    vector<vector<int>> graph(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> p[i] >> c[i];
        if(p[i]==-1) root = i;
        else graph[p[i]].push_back(i);
    }
    vector<int> del(n+1,1);
    del[root]=0;
    for(int i=1;i<=n;i++)
    {
        if(p[i] == -1) continue;
        if(c[i] == 0)
        {
            del[p[i]] = 0; 
            del[i] = 0;
        }
    }
    int f = 0;
    for(int i=1;i<=n;++i)
    {
        if(del[i]) 
        {
            f = 1;
            cout << i << " ";
        }
    }
    if(!f) cout << "-1" << endl;
}
int main()
{
    solve();
    return 0;
}