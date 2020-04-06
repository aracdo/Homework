#include <iostream>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   int N,t;
   cin>>N;
    vector<int> A(N);
     for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());
    for (int i=0;i < N;i++){
        cout<<A[i]<<' ';
    }

}
