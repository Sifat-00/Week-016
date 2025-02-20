#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int main()
{

    
	int t;
	cin >> t;
	while(t--)
        {
          int n;
    	
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)cin >> a[i];
    bool track = 0; 
    int cnt = 0;
    for(int k = 1;k < n;k  <<= 1)
    for(int i = 0;i < n;i += 2*k)
    {
        if(abs(a[i]-a[i+k])!=k) track = 1;
        if(a[i]>a[i+k])
        {
            swap(a[i],a[i+k]);
            cnt++;
        }
    }
    cout << (track?-1:cnt) << endl;
        }
    return 0;
}