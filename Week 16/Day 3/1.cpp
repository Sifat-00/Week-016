#include<bits/stdc++.h>
#include<string.h>
#include<string>
#define endl '\n'
#define ll long long
using namespace std;
int main()
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
    vector<int> track(n+1,1);
    track[root]=0;
    for(int i=1;i<=n;i++)
    {
        if(p[i] == -1) continue;
        if(c[i] == 0)
        {
            track[p[i]] = 0; 
            track[i] = 0;
        }
    }
    int ans = 0;
    for(int i=1;i<=n;++i)
    {
        if(track[i]) 
        {
            ans = 1;
            cout << i << " ";
        }
    }
    if(!ans) cout << "-1" << endl;
    return 0;
}
