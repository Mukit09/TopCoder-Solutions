//BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
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
int i,j,l,n,cs=1,cnt,sm,fg,a[si];
char ch[si];

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

struct AddMultiply{
vector <int> makeExpression(int y)
{
    vector <int> ret;
    int k;
    fr(i,-1000,1000)
    {
        if(i==0||i==1)
        continue;
        fr(j,-1000,1000)
        {
            if(j==0||j==1)
            continue;
            {
                fr(k,-1000,1000)
                {
                    if(k==0||k==1)
                    continue;
                    if(i*j+k==y)
                    {
                        ret.push_back(i);
                        ret.push_back(j);
                        ret.push_back(k);
                        return ret;
                    }
                }
            }
        }
    }
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arg0 = 6; int Arr1[] = {2, 2, 2 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, makeExpression(Arg0)); }
	void test_case_1() { int Arg0 = 11; int Arr1[] = {2, 3, 5 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, makeExpression(Arg0)); }
	void test_case_2() { int Arg0 = 0; int Arr1[] = {7, 10, -70 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, makeExpression(Arg0)); }
	void test_case_3() { int Arg0 = 500; int Arr1[] = {-400, -3, -700 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, makeExpression(Arg0)); }
	void test_case_4() { int Arg0 = 2; int Arr1[] = {2, 2, -2 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, makeExpression(Arg0)); }
	void test_case_5() { int Arg0 = 5; int Arr1[] = {5, 2, -5 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(5, Arg1, makeExpression(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
AddMultiply ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
