
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

struct man{
public:
string Familia ;
string Name;
int score;

};
bool comp(const man &a, const man &b){
int tmp1 = a.score;
int tmp2 = b.score;
return tmp1 > tmp2 ? true : false;
}

int main()
{
int n,a,b,c;
cin>> n;
vector< man > A(n);
for (int i = 0; i < n; i++) {
cin >> A[i].Name>> A[i].Familia;
cin>> a >> b >> c;
A[i].score = a+b+c;
    }

    sort(A.begin(), A.end(), comp);
    for (int i = 0; i < n; i++) {
    cout<< A[i].Name << " " << A[i].Familia << endl;
    }
return 0;
}
