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

struct TwoLLogo{
long long countWays(vector <string> grid)
{
    long long ret;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"....",
 "...."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 1LL; verify_case(0, Arg1, countWays(Arg0)); }
	void test_case_1() { string Arr0[] = {".##..",
 "...#.",
 ".#.#.",
 "#...#"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 3LL; verify_case(1, Arg1, countWays(Arg0)); }
	void test_case_2() { string Arr0[] = {"..#.",
 "#.#.",
 "....",
 "..#."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 4LL; verify_case(2, Arg1, countWays(Arg0)); }
	void test_case_3() { string Arr0[] = {"..",
 ".."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 0LL; verify_case(3, Arg1, countWays(Arg0)); }
	void test_case_4() { string Arr0[] = {".#.#",
 "....",
 ".#.#",
 "...."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 34LL; verify_case(4, Arg1, countWays(Arg0)); }
	void test_case_5() { string Arr0[] = {"##############",
 "##############",
 "#.############",
 "#.############",
 "#.############",
 "#.############",
 "#.############",
 "#.############",
 "#.#####.######",
 "#.#####.######",
 "#.#####.######",
 "#....##.######",
 "#######.######",
 "#######.######",
 "#######.######",
 "#######.######",
 "#######.######",
 "#######.######",
 "#######......#",
 "##############"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 1350LL; verify_case(5, Arg1, countWays(Arg0)); }
	void test_case_6() { string Arr0[] = {"#......",
 ".#....#",
 ".#.#...",
 "#....#.",
 ".##..#.",
 ".#.....",
 ".....#.",
 ".#.#...",
 ".#...#.",
 "..##..."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 2386LL; verify_case(6, Arg1, countWays(Arg0)); }
	void test_case_7() { string Arr0[] = {"...#..........................",
 "..............................",
 "..............................",
 "..................#...#.......",
 "..................#...........",
 "..............................",
 "...........#..................",
 "..............................",
 ".....#..#.....................",
 ".......................#......",
 "..................#.....#.....",
 "..............................",
 "..............................",
 "..............................",
 "..............................",
 "..#...........................",
 "..............................",
 "..............................",
 "..............................",
 "#............................#",
 "..............................",
 ".....#.........#............#.",
 "..............................",
 ".........................#....",
 ".#............................",
 ".............#................",
 "..............................",
 "..............................",
 ".......................#......",
 ".............#................"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 5020791386LL; verify_case(7, Arg1, countWays(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
TwoLLogo ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
