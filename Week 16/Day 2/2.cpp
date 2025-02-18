#include <bits/stdc++.h>
using namespace std;
const int N=200010,M=N*2;
typedef long long LL;
int h[N],e[M],ne[M],idx;
LL cnt[N];
void add(int a,int b)
{
	e[idx] = b,ne[idx] = h[a],h[a] = idx++;
}
void dfs(int u,int fa)
{
	cnt[u] = 0;
	int sum = 0;
	for(int i = h[u];i != -1;i = ne[i])
    {
		int j = e[i];
		if(j == fa)continue;
		sum++;
		dfs(j,u);
		cnt[u] += cnt[j];
	}
	if(!sum) cnt[u] = 1;
}
void solve()
{
	int n,q;
	cin >> n;
	for(int i=1;i<=n;i++) h[i]= -1;
	idx = 0;
	for(int i=1;i<n;i++)
    {
		int a,b;
		cin >> a >> b;
		add(a,b),add(b,a);
	}
	dfs(1,-1);
	cin >> q;
	while(q--)
    {
		int a,b;
		cin >> a >> b;
		cout << cnt[a]* cnt[b] << endl;
	}
}
int main()
{


    int t;
    cin >> t;

    while(t--)
    {
       solve(); 
    }
    

    return 0;
}