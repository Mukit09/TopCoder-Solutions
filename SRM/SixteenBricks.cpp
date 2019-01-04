//BISMILLAHIR RAHMANIR RAHIM
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<map>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
using namespace std;

// Define Some Variables
#define eps 1e-14
#define si 110
#define pi acos(-1.0)
#define inf (1<<30)-1
#define mod 1000000000 //10^9

//Define Some Functions
#define even(a) ((a)%2==0)
#define odd(a) ((a)%2==1)
#define max(a,b) (a>b ?a:b)
#define min(a,b) (a<b ?a:b)
#define sqr(a)((a)*(a))
#define area(x1,y1,x2,y2,x3,y3) (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)) //Area of a triangle
#define dist(x1,y1,x2,y2) (sqr(x1-x2)+sqr(y1-y2)) //Distance between two points
#define mem(a,v) memset(a,v,sizeof(a))
inline bool compare( double a, double b ) { return fabs( a-b ) < 1e-9 ; }
#define fr(i,a,b) for(i=a;i<=b;i++)
#define rep(i,a,b) for(i=a;i<b;i++)
#define rev(i,a,b)  for(i=a;i>=b;i--)

typedef long long i64;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int i,j,l,n,cs=1,cnt,sm,fg,a[6][6];

i64 bmod(i64 a,i64 b)
{
    if(b==0)
        return 1;
    i64 x=bmod(a,b/2);
    x=(x*x)%mod;
    if(b%2==1)
        x=(x*a)%mod;
    return x;
}

int gcd(int a,int b)
{
    while(b>0)
    {
        a%=b;
        a^=b;
        b^=a;
        a^=b;
    }
    return a;
}

i64 lcm(i64 a,i64 b)
{
	return ((a*b)/gcd(a,b));
}

struct SixteenBricks{

int maximumSurface(vector <int> h)
{
    int ret,k;
    sort(h.begin(),h.end());
    fg=1;
    cnt=0;
    i=1;
    while(1)
    {
        k=1;
        while(1)
        {
            if(fg)
            {
                fg=0;
                rev(j,15,0)
                {
                    if(h[j]>0)
                    {
                        a[i][k++]=h[j];
                        h[j]=-1;
                        break;
                    }
                }
            }
            else
            {
                fg=1;
                rep(j,0,15)
                {
                    if(h[j]>0)
                    {
                        a[i][k++]=h[j];
                        h[j]=-1;
                        break;
                    }
                }
            }
            if(k>4)
            {
                fg=1-fg;
                break;
            }
        }
        i++;
        if(i>4)
        break;
    }
    ret=16+a[1][1]+a[1][2]+a[1][3]+a[1][4];
    fr(i,2,4)
    {
        if(a[i][1]>a[i-1][1])
        ret+=a[i][1]-a[i-1][1];

        if(a[i][2]>a[i-1][2])
        ret+=a[i][2]-a[i-1][2];

        if(a[i][3]>a[i-1][3])
        ret+=a[i][3]-a[i-1][3];

        if(a[i][4]>a[i-1][4])
        ret+=a[i][4]-a[i-1][4];
    }
    ret+=a[1][1]+a[2][1]+a[3][1]+a[4][1];
    fr(i,2,4)
    {
        if(a[1][i]>a[1][i-1])
        ret+=a[1][i]-a[1][i-1];

        if(a[2][i]>a[2][i-1])
        ret+=a[2][i]-a[2][i-1];

        if(a[3][i]>a[3][i-1])
        ret+=a[3][i]-a[3][i-1];

        if(a[4][i]>a[4][i-1])
        ret+=a[4][i]-a[4][i-1];
    }
    ret+=a[4][1]+a[4][2]+a[4][3]+a[4][4];
    rev(i,3,1)
    {
        if(a[i][1]>a[i+1][1])
        ret+=a[i][1]-a[i+1][1];

        if(a[i][2]>a[i+1][2])
        ret+=a[i][2]-a[i+1][2];

        if(a[i][3]>a[i+1][3])
        ret+=a[i][3]-a[i+1][3];

        if(a[i][4]>a[i+1][4])
        ret+=a[i][4]-a[i+1][4];
    }
    ret+=a[1][4]+a[2][4]+a[3][4]+a[4][4];
    rev(i,3,1)
    {
        if(a[1][i]>a[1][i+1])
        ret+=a[1][i]-a[1][i+1];

        if(a[2][i]>a[2][i+1])
        ret+=a[2][i]-a[2][i+1];

        if(a[3][i]>a[3][i+1])
        ret+=a[3][i]-a[3][i+1];

        if(a[4][i]>a[4][i+1])
        ret+=a[4][i]-a[4][i+1];
    }

    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
//	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 32; verify_case(0, Arg1, maximumSurface(Arg0)); }
	void test_case_1() { int Arr0[] = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 64; verify_case(1, Arg1, maximumSurface(Arg0)); }
	void test_case_2() { int Arr0[] = {77, 78, 58, 34, 30, 20, 8, 71, 37, 74, 21, 45, 39, 16, 4, 59}
; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1798; verify_case(2, Arg1, maximumSurface(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
SixteenBricks ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
