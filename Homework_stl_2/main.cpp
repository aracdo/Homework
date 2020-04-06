#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

struct man{
public:
string Familia ;
string Name;
int math;
int phis;
int it;
};
bool comp(const man &a, const man &b){
int tmp1 = a.math + a.phis + a.it;
int tmp2 = b.math + b.phis + b.it;
return tmp1 > tmp2 ? true : false;
}

int main()
{
int n;
cin>> n;
vector< man > A(n);
for (int i = 0; i < n; i++) {
cin >> A[i].Name>> A[i].Familia;
cin>> A[i].math >> A[i].phis >> A[i].it;
    }

    sort(A.begin(), A.end(), comp);
    for (int i = 0; i < n; i++) {
    cout<< A[i].Name << " " << A[i].Familia << endl;
    }
return 0;
}
