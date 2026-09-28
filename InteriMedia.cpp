#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n1,n2,n3,n4;
    double avg1 = 0;

    cin>>n1>>n2>>n3>>n4;

    avg1 = (n1 + n2 + n3 + n4)/4.00;

    if ((abs(n1 - avg1) <= abs(n2 - avg1)) && (abs(n1 - avg1) <= abs(n3 - avg1) && (abs(n1 - avg1) <= abs(n4 - avg1)))) cout<<n1<<endl;
    else if ((abs(n2 - avg1) <= abs(n1 - avg1)) && (abs(n2 - avg1) <= abs(n3 - avg1) && (abs(n2 - avg1) <= abs(n4 - avg1)))) cout<<n2<<endl;
    else if ((abs(n3 - avg1) <= abs(n2- avg1)) && (abs(n3 - avg1) <= abs(n1 - avg1) && (abs(n3 - avg1) <= abs(n4 - avg1)))) cout<<n3<<endl;
    else cout<<n4<<endl;

    return 0;
}