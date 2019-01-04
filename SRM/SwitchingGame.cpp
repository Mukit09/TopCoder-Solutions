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

int i,j,l,n,cs=1,cnt,sm,fg,p[61],m[61];

struct SwitchingGame{
int timeToWin(vector <string> st)
{
    int ret=0,k;
    l=st.size();
    int ll=st[0].size();
    string ch[60];

    mem(p,0);
    mem(m,0);

    rep(i,0,ll)
    {
        rep(j,0,l)
        {
            if(st[j][i]=='+')
            p[i]++;
            else if(st[j][i]=='-')
            m[i]++;
        }
        if(st[0][i]=='?')
        m[i]++;
    }

    rep(i,0,l)
    {
        rep(j,0,ll)
        ch[i]+='-';
    }
    char c;
    rep(i,0,l)
    {
        fg=1;
        int mi=0,pl=0,bfp=0,bfm=0;
        rep(j,0,ll)
        {
            if(ch[i][j]!=st[i][j])
            {
                if(st[i][j]=='-')
                {
                    if(!mi&&!bfm)
                    ret++,mi=1,bfm=1;
                    ch[i][j]=st[i][j];
                }
                else if(st[i][j]=='+')
                {
                    if(!pl&&!bfp)
                    ret++,pl=1,bfp=1;
                    ch[i][j]=st[i][j];
                }
                else
                {
                    if(p[j]>=m[j]&&ch[i][j]=='-'&&!bfp)
                    {
                        ch[i][j]='+';
                        bfp=1;
                        ret++;
                    }
                    else if(p[j]<m[j]&&ch[i][j]=='+'&&!bfm)
                    {
                        bfm=1;
                        ch[i][j]='-';
                        ret++;
                    }
                    else
                    {
                        if(p[j]>m[j])
                        ch[i][j]='+';
                        else
                        ch[i][j]='-';
                    }
                }
            }
        }
        rep(k,i+1,l)
        {
            rep(j,0,ll)
            ch[k][j]=ch[k-1][j];
        }
        ret++;
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"++--",
 "--++"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; verify_case(0, Arg1, timeToWin(Arg0)); }
	void test_case_1() { string Arr0[] = {"+-++",
 "+-++"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(1, Arg1, timeToWin(Arg0)); }
	void test_case_2() { string Arr0[] = {"++",
 "+?",
 "?+",
 "++"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; verify_case(2, Arg1, timeToWin(Arg0)); }
	void test_case_3() { string Arr0[] = {"+",
 "?",
 "?",
 "?",
 "-"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; verify_case(3, Arg1, timeToWin(Arg0)); }
	void test_case_4() { string Arr0[] = {"+??+++",
 "++??+-",
 "?++??+",
 "?-+-??",
 "??+?++",
 "++-?+?",
 "?++?-+",
 "?--+++",
 "-??-?+"}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 20; verify_case(4, Arg1, timeToWin(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
SwitchingGame ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
