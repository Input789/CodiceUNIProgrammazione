#include <iostream>

using namespace std;

int main(){
    int n = 4;

    int *p1;
    int *p2;

    p1 = &n;
    p2 = &n;

    (*p1)++;
    (*p2)++;

    cout<<n<<endl;




    return 0;
}