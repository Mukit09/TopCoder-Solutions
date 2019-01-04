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
int i,j,l,n,cs=1;

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

struct SubstringReversal{
vector <int> solve(string S)
{
    vector <int> ret;
    l=S.size();
    int k;
    string res;
    rep(i,0,l)
    {
        res=127;
        k=-1;
        rep(j,i+1,l)
        {
            if(S[i]>S[j])
            {
                string ch=S;
                for(int x=j,y=i;x>=i;x--,y++)
                ch[y]=S[x];
                if(ch<res)
                res=ch,k=j;
            }
        }
        if(k>=0)
        {
            ret.push_back(i);
            ret.push_back(k);
            return ret;
        }
    }
    ret.push_back(0);
    ret.push_back(0);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arg0 = "abdc"; int Arr1[] = {2, 3 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, solve(Arg0)); }
	void test_case_1() { string Arg0 = "aabbcc"; int Arr1[] = {0, 0 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, solve(Arg0)); }
	void test_case_2() { string Arg0 = "misof"; int Arr1[] = {0, 4 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, solve(Arg0)); }
	void test_case_3() { string Arg0 = "ivan"; int Arr1[] = {0, 2 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, solve(Arg0)); }
	void test_case_4() { string Arg0 = "thisseemstobeaneasyproblem"; int Arr1[] = {0, 13 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, solve(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
SubstringReversal ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
//qqssssqsssqsqqqssssssqqssqqsqqssqsssqsqqssqsqssssqsqsqqqqsssqssssqqqsqqqsssssqqqsqqqqssqsqqqsqqqssqsqssqqssssqqssqqsqsssqqqsssssssqqssssqsqqssssqsqsqqsssqqsqsssssqsqsqsssssssqqqsqssqsssqssqsqqqsqqqqsqqqqssqqssqssqqqqqqqssqsssqqsqssqssqqqsssssqqssqssqqssssssqssssssqqqqsqssqsqqssqsqsqqssqsqqqqqsqqsqqssqqqqsssqqsqqqsqssqqqqqqqsqsqsssqssqsqqqsssqsqsqqqqsqsqqqssqsqssqqsqqqqqsqqqqqsqsqqqqssqsqqqsssssqsssssqsqsssqsssqqsqqsssqqsssqsssqssqsssqqsqsqqqsqsqsqsssqsqsqsqqqqqsssqsssssqqsqqqsssssqqsqsqsqqqsqsqssqsqqsqsqqqqqsqqsqssssqqsssqqsqsssqqssssqssqqsssqsqsqqsqqqssqssqqqqqsqqqqssqssssqqqqqssqssqqsssqqqqsqsqsssssqqqssqqqsssqqssqsqsqqsqqssssqqqqqsssqsssqqqsssqqqqqqssqqssqsqssqssqssqssqsssqqsqqqqssqsqqssqqqsqqssqssqqsqqqqssqqqssqqqssqssssqssqssssqqqqqsqqqqsssssqqqqsssssqqsqqssqssqssssqqsssssqqssqsqqsqssssqqsqsssqqqqqqqsssqsssssqqssqqqqqsqqssqssqssqqqsqqqqsqsqsqqqssqsqqsqqqsqsqqsqssqsssqsqqssssqqsqsssssqqqsqqsssqqssqqsqqsqsqsqsqssssssqsqsssqsqsssqsqsssqssqqqqsqssqsqqsqqsqqqqsssssqsqqsqssqsssqqsqsqsqssqqqqsqqsqsqsqsqqqqsqqqsqsqsssqqqsqqsqqqssqsqsqsqqqqqssqssqsqssssssqsqssqqsqssqqqsssqqqqssssqqsssqssqsqqqssssqssqqqsqsqqsqqqqqqsqssssqssqsqsqssssqqssqqqsqsqqqssqssssqqsqqqqsqsssqqqqqqsqsqqqqqqqssqqqqqsqqssqsqsssqsqqqsqqqqqqssqsqssqsqqsqqsssssqqqqqqsqqsqqqqqqsssqssqsqssqsssqqqssqqssssqqssqssqqqqssqsqsssqssqqqqsssssqqssqsqsssqsqqsqqsqqssqqqssqssssssqssssssqqssqssqqqqsqqssqsssssqqssqsqqqssqqqsssqssssqsqqsqqqsssqssqsqsqsssssqsssssqqqqsqqqssqsqqssqsssssqqqqqqsqqssqsqqsqssqqqqqqqssqqqsqqqqsqqssqsqqsssssssqqsqsqqsqssssssqsqsqssqssqsqqsqssssssqsqsssqqsqqqssssqsqqqqsqqssssqqsssqqsssqqqsqssqqqqqqsqsqssssqssqqsssqssqsqssqsqqqqqqqqqqssssqqqsqqqqqsqsqsqssqqsqssqsqsqsqsssssqqqqsqsqssqsssqsqqssqqqqsqsqqsqssssqsqqssqqsqqsqqqsqsqsqsqsqqsqssqqqsssssqssqqsqssqsssssqsqssqsqqsssssqqssqqqqsssqqsqssqqqqsqssqqqsqsssqqqqsqqsqqsqssqqssqssssssqqsqqssqsssqqssssqqsqqsqqsqqqssqqssqqsqsqqqssqqqqqqsqqsqssssqqqsqqsssqssqsqsssssqsqsssssqssssqqqqqqqqqssqqqsqqqqqsssssqqssssssqqqqssssqqsqqqssqqsssssqsqsqqqqssqqssqqqsssssqssqqssqqqssqqqsqqssssqqsssssqsqqqqsqsqqqqqssqqqssssqqqssqqqqqqsssqqsqqqqssqsqsqqssssssssqssqqssssqqsssqqsqsqqsqsqqssqqqsqsqqsqsqssqqqqsqqsssqsqqqsqqsssqssqsssqsqqsqsqsssqsqsqqssqqqssqqssqsssqsqqsssqsqsqssqssqqqqsqqssqqqqsqqssqqsqsssqqqsqsqqsqssqqsssqqqsqsqsqsssqqsssqqqqqssqqsqqqsqsqsssqsqqsqqsqqqqsqsssqqsssqqssqqqqqsssqqsqqqqqsqssqqqqqqqssqqssssqqqqsqqssqssssssqsqqsqsssssqqsssqssqqsssssqsqssqqqqqssssqqsqssssqqqqsqsqqqqsqsqsqqssqqsqsqqsssssssqsqqssqqqqqqqsqqsqqsqsqsssssqsqqqssssqssqqqsqqqqqssqqss

