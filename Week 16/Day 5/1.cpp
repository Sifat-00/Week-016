#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int max_value = 3e5+9;
vector<int> graph_arr[max_value],op(max_value);
string word;

void solve(int val)
{
    if(graph_arr[val][0] != 0)
    {
        int v = graph_arr[val][0];
        if(word[val-1] != 'L')
        {
            op[v] = op[val]+1;
        }
        else op[v] = op[val];
        solve(v);
    } 
    
    if(graph_arr[val][1] != 0)
    {
        int v = graph_arr[val][1];
        if(word[val-1] != 'R')
        {
            op[v] = op[val] + 1;
        }
        else op[v] = op[val];
        solve(v);  
    }   
}

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        for(int i=0;i<=N;i++)
        {
            graph_arr[i].clear();
            op[i] = 0;
        }

        cin >> word;

        for(int i=1;i<=N;i++)
        {
            int l,r;
            cin >> l >> r;
            graph_arr[i].push_back(l);
            graph_arr[i].push_back(r);
        }
        solve(1);

        int ans = INT_MAX;
        for(int i=1;i<=N;i++)
        {
            if(graph_arr[i][0] == 0 && graph_arr[i][1] == 0 )
            {
                ans = min(ans,op[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}