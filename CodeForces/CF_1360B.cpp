#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
#define endl '\n'
#define pi acos(-1.0)
#define all(v) v.begin(),v.end()
#define rall(v) v.rend(),v.rend()
#define contains(a,b) (find(a.begin(),a.end(),b!=a.end()))
#define minimum(a) *min_element(a.begin(),a.end())
#define maximum(a) *max_element(a.begin(),a.end())
#define precision(n) cout<<fixed<<setprecision(n)
#define toUpper(str) transform(str.begin(),str.end(),str.begin(),::toupper);
#define toLower(str) transform(str.begin(),str.end(),str.begin(),::tolower);


template < class T > T gcd( T a, T b ) { if (b == 0)return a; return gcd(b, a % b);}
template < class T > T lcm( T a, T b ) { return (b / gcd(a, b)) * a;}
template < class T > T toInt( T n) { int v; stringstream stream; stream << n; stream >> v; return v;}
template < class T > T toStr( T str) { stringstream stream; stream << str; return stream.str();}


typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<char> vc;
typedef map<string, string> dic;
typedef pair<int, int> pii;
typedef stringstream ss;
typedef priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc;
    cin>>tc;
    int n;
    while(tc--){
    	cin>>n;
    	vi v;
    	int t;
    	for(int i=0; i<n; i++){
    		cin>>t;
    		v.pb(t);
    	}
    	sort(all(v),greater<int>());
    	// int m,mi;
    	// if(n%2==0){
    	// 	m = *min_element(v.begin(),v.begin()+n/2);
  			//  mi = *max_element(v.begin()+n/2,v.end());
    	// }else{
    	// 	m = *min_element(v.begin(),v.begin()+(n/2)+1);
    	// 	mi = *max_element(v.begin()+(n/2)+1,v.end());
    	// }

    	int min = INT_MAX,m;

    	for(int i=0; i<n-1; i++){
    		m = abs(v[i] - v[i+1]);
    		if(m<min){
    			min = m;
    		}
    	}

    	cout<<min<<endl;
    }




}