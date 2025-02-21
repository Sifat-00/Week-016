#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin >> n;
    int a[n+1],s[n+1]={0};
    a[1] = -1;
    for (int i = 2; i <= n; i++) 
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) 
    {
        char c;cin >> c;
        s[i] = c == 'W' ? 1 : -1;
    }
    for (int i = n ; i > 1; i--) 
    {
        s[a[i]] += s[i];
    }
    cout << count(s+1, s+n+1, 0) << endl;
}