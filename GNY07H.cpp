/*******************************************************************************
 * ************************     ADNAN OQUAISH     ******************************
 * *************************     BITS Pilani     *******************************
 *******************************************************************************/
    #include <bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp>
	#include <ext/pb_ds/tree_policy.hpp>
    
    using namespace __gnu_pbds;
    using namespace std;
     
    typedef long long int ll;
    typedef long int li;
    typedef unsigned int ui;
    typedef pair<int,int> pii;
    typedef pair<ll,int> pli;
    typedef pair<int,ll> pil;
    typedef pair<ll,ll> pll;
    typedef list<int> lsi;
	typedef vector<lsi> vls;
	typedef vector<bool> vb;
	typedef set<int> sti;
	typedef vector<int> vi;
	typedef vector<vi> vvi;
    typedef vector<li> vl;
    typedef vector<ll> vll;
    typedef queue<int> qi;
	template <class T> inline void smax(T &x,T y){ x = max((x), (y));}
	template <class T> inline void smin(T &x,T y){ x = min((x), (y));} 
     
     
    #define PB                           push_back
    #define pb 							 pop_back()
    #define MP                           make_pair
    #define LB                           lower_bound
    #define UB                           upper_bound
    #define B                            begin()
    #define E                            end()
    #define F                            first
    #define S                            second
    #define SZ                           size()
    #define sqr(a)						 (a*a)
    #define MIN(x,y)                     (x<y ? x : y)
    #define MAX(x,y)                     (x>y ? x : y)
    #define ABS(x)						 (x>0 ? x : -1*x)
    #define inp(x)						 cin>>x
    #define out(x)						 cout<<x
	#define scd(x)						 scanf("%d",&x)
	#define scu(x)						 scanf("%u",&x)
	#define scl(x)						 scanf("%ld",&x)
	#define scll(x)						 scanf("%lld",&x)
	#define scc(x)						 scanf("%c",&x)
	#define scs(x)						 scanf("%s",x)
	#define scf(x)						 scanf("%f",&x)
	#define sclf(x)						 scanf("%lf",&x)
	#define scllf(x)					 scanf("%llf",&x)
	#define sc2d(x,y)					 scanf("%d %d",&x,&y)
	#define sc2u(x,y)					 scanf("%u %u",&x,&y)
	#define sc3d(x,y,z)					 scanf("%d %d %d",&x,&y,&z)
	#define sc2l(x,y)					 scanf("%ld %ld",&x,&y)
	#define sc3l(x,y,z)					 scanf("%ld %ld %ld",&x,&y,&z)
	#define sc2ll(x,y)					 scanf("%lld %lld",&x,&y)
	#define sc3ll(x,y,z)				 scanf("%lld %lld %lld",&x,&y,&z)
	#define sc2f(x,y) 					 scanf("%f %f",&x,&y)
	#define sc3f(x,y,z) 				 scanf("%f %f %f",&x,&y,&z)
	#define sc2lf(x,y) 					 scanf("%lf %lf",&x,&y)
	#define sc3lf(x,y,z) 				 scanf("%lf %lf %lf",&x,&y,&z)
	#define sc2llf(x,y) 				 scanf("%llf %llf",&x,&y)
	#define sc3llf(x,y,z) 				 scanf("%llf %llf %llf",&x,&y,&z)
	#define prd(x) 						 printf("%d\n",x)
	#define prds(x) 					 printf("%d ",x)	
	#define prl(x) 						 printf("%ld\n",x)
	#define prll(x) 					 printf("%lld\n",x)
	#define prc(x) 						 printf("%c\n",x)
	#define prs(x)					     printf("%s\n",x)
	#define prf(x) 					     printf("%f\n",x)
	#define prlf(x)						 printf("%lf\n",x)
	#define prllf(x)					 printf("%llf\n",x)
	#define pr2d(x,y)					 printf("%d %d\n",x,y)
	#define pr2l(x,y)					 printf("%ld %ld\n",x,y)
	#define pr2ll(x,y)					 printf("%lld %lld\n",x,y)
	#define pr2c(x,y)				     printf("%c %c\n",x,y)
	#define pr2s(x,y)					 printf("%s %s\n",x,y)
	#define pr2f(x,y)					 printf("%f %f\n",x,y)
	#define pr2lf(x,y)					 printf("%lf %lf\n",x,y)
	#define pr2llf(x,y)					 printf("%llf %llf\n",x,y)
	#define pr3d(x,y,z)					 printf("%d %d %d\n",x,y)
	#define pr3l(x,y,z)					 printf("%ld %ld %ld\n",x,y)
	#define pr3ll(x,y,z)				 printf("%lld %lld %lld\n",x,y)
	#define pr3c(x,y,z)					 printf("%c %c %c\n",x,y)
	#define pr3s(x,y,z)					 printf("%s %s %s\n",x,y)
	#define pr3f(x,y,z)					 printf("%f %f %f\n",x,y)
	#define pr3lf(x,y,z)				 printf("%lf %lf %lf\n",x,y)
	#define pr3llf(x,y,z)				 printf("%llf %llf %llf\n",x,y)
	#define INF                          (int)1e9
    #define EPS                          1e-9
	#define bitcount                     __builtin_popcount
	#define gcd                          __gcd
	#define forall(i,a,b)                for(int i=a;i<b;i++)
	#define For(i,a,b) 					 for(int (i)=(a);(i) < (b); ++(i))
	#define rof(i,a,b) 					 for(int (i)=(a);(i) > (b); --(i))
	#define foreach(v, c)                for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
	#define all(a)                       a.begin(), a.end()
	#define rep(i, c) 					 for(auto &(i) : (c))
	#define in(a,b)                      ( (b).find(a) != (b).end())
	#define fill(a,v)                    memset(a, v, sizeof a)
	#define sz(a)                        ((int)(a.size()))
	#define mp                           make_pair
	#define maX(a,b)                     ((a)>(b) ? (a) : (b))
	#define miN(a,b)                     ((a)<(b) ? (a) : (b))
	#define checkbit(n,b)                ((n >> b) & 1)
	#define DREP(a)                      sort(all(a)); a.erase(unique(all(a)),a.end())
	#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())
    #define parr(a,n)                    for(int o=0;o<n;o++) printf("%d ",a[o]);printf("\n")
    #define parr1(a,n)                   for(int o=1;o<=n;o++) printf("%lld ",a[o]);printf("\n")
    #define error(x)					 cerr << #x << " = " << (x) <<endl
	#define Error(a,b)					 cerr<<"( "<<#a<<" , "<<#b<<" ) = ( "<<(a)<<" , "<<(b)<<" )\n";
	#define errop(a)					 cerr<<#a<<" = ( "<<((a).x)<<" , "<<((a).y)<<" )\n";
	#define coud(a,b)					 cout<<fixed << setprecision((b)) << (a)
	#define L(x)						 ((x)<<1)
	#define R(x)						 (((x)<<1)+1)
	#define umap						 unordered_map
	#define double 						 long double
    #define                              MOD 1000000007     
    
    ll f[105]={0};
    bool filled[105]={false};
    int main()
    {
    	ll n,w,i=0,j=0;
    	scll(n);
    	f[0]=1;filled[0]=true;
    	f[1]=1;filled[1]=true;
    	f[2]=5;filled[2]=true;
    	f[3]=11;filled[3]=true;
    	f[4]=36;filled[4]=true;
    	while(n--)
    	{
    		j++;
    		scll(w);
    		if(w>4)
    		For(i,5,w+1)
    		{
    			if(!filled[i])
    			{	
    				f[i]=(f[i-1]+5*(f[i-2])+f[i-3]-f[i-4]);
    				filled[i]=true;
    			}
    		}
    		printf("%lld %lld\n",j,f[w]);
    	}
    	return 0;
    }
