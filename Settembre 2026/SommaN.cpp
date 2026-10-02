#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int result = 0;
    int i = 0;
    cin>>n;
    while (i < n){
        result += i;
        i++;
    }
    cout<<result<<endl;
    return 0;
}