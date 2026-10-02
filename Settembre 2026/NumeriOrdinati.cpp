#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n1,n2,n3;
    int max1, med1, min1 = 0;

    cin>>n1>>n2>>n3;

    max1 = max(n1, max(n2, n3));
    min1 = min(n1, min(n2, n3));
    med1 = n1 + n2 + n3 - min1 - max1;

    cout<<min1<<endl;
    cout<<med1<<endl;
    cout<<max1<<endl;

    return 0;
}