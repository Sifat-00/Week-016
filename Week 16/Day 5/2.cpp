#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int main()
{

    ll n;
    cin >> n;
    ll ax,ay,bx,by,cx,cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
 
    if((bx-ax)*(cx-ax)<0) cout << "NO" << endl;
    else if((by-ay)*(cy-ay)<0) cout << "NO" << endl;
    else cout << "YES" << endl;
    

    return 0;
}