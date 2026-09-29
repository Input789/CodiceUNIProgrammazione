#include <iostream>

using namespace std;

int main(){
    int n, res, val = 0;
    cin>>n;
    while (n > 0){
        cin>>val;
        res += val;
        n--;
    }
    cout<<res<<endl;
    return 0;
}