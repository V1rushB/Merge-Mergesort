#include <iostream>
#include <algorithm>
#include <vector>
//wanted file

#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define pls  {cout.tie(0);}
#define all(vec) vec.begin(),vec.end()
#define endl '\n'

typedef long long int ll;

using namespace std;

int32_t main() {
	send help pls
    ll a; cin >> a;
    vector<ll> d(a);
    for(int o =0; o < a;o++)
        cin >> d[o];
    sort(all(d));
    mergeSort(arr,0,arrSize-1);
    for(ll &el : d)
        cout << el << ' ';
    cout << endl;
	return 0;
}