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
int i,j,l,n,cs=1,cnt;
char ch[3][si];

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

struct PathGameDiv2{

    int vis1[3][55],vis2[3][55];

    void bfs1()
    {
        int k;
        queue<int>q;
        q.push(0);
        q.push(0);
        vis1[0][0]=1;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            int v=q.front();
            q.pop();
            rep(k,0,4)
            {
                int uu=u+dx[k];
                int vv=v+dy[k];
                if(uu<0||vv<0||uu>=2||vv>=l)
                continue;
                if(ch[uu][vv]=='#')
                continue;
                if(vis1[uu][vv]==inf)
                {
                    vis1[uu][vv]=vis1[u][v]+1;
                    q.push(uu);
                    q.push(vv);
                }
            }
        }
    }

    void bfs2()
    {
        int k;
        queue<int>q;
        q.push(1);
        q.push(0);
        vis2[1][0]=1;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            int v=q.front();
            q.pop();
            rep(k,0,4)
            {
                int uu=u+dx[k];
                int vv=v+dy[k];
                if(uu<0||vv<0||uu>=2||vv>=l)
                continue;
                if(ch[uu][vv]=='#')
                continue;
                if(vis2[uu][vv]==inf)
                {
                    vis2[uu][vv]=vis2[u][v]+1;
                    q.push(uu);
                    q.push(vv);
                }
            }
        }
    }


int calc(vector <string> bo)
{
    int ret;
    cnt=0;
    l=bo[0].size();
    rep(i,0,2)
    {
        rep(j,0,l)
        {
            vis1[i][j]=vis2[i][j]=inf;
            ch[i][j]=bo[i][j];
            if(ch[i][j]=='#')
            cnt++;
        }
    }
    if(ch[0][0]=='.')
    bfs1();
    if(ch[1][0]=='.')
    bfs2();
    int mn=min(vis1[0][l-1],min(vis1[1][l-1],min(vis2[0][l-1],vis2[1][l-1])));
    ret=2*l-cnt-mn;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"#...."
,"...#."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(0, Arg1, calc(Arg0)); }
	void test_case_1() { string Arr0[] = {"#"
,"."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(1, Arg1, calc(Arg0)); }
	void test_case_2() { string Arr0[] = {"."
,"."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(2, Arg1, calc(Arg0)); }
	void test_case_3() { string Arr0[] = {"....#.##.....#..........."
,"..#......#.......#..#...."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 13; verify_case(3, Arg1, calc(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
PathGameDiv2 ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
