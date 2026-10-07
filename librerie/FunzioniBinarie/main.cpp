#include <iostream>
#include "library.h"

using namespace std;

int main(){

    cout<<dec2bin(35)<<endl;
    cout<<bin2dec(1100)<<endl;
    cout<<bin_sum(1101, 1111)<<endl;
    cout<<bin_prod(1101, 1111);

    return 0;
}