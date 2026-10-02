#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int cont = 0;
    int res = 1;
    //int cont2 = 0;
    int n2 = 0;
    bool num = false;

    cin >> n;

    n++;

    n2 = n;

    while (!num){
        res = 1;
        while (n2 > 0){
            res *= (n2 % 10); 
            n2 /= 10;
        }
        cont ++;
        n2 = res;
        if (n2 < 10){
            if (cont>=3){
                num = true;
            }
            else{
                n++;
                cont = 0;
                n2 = n;
            } 
        } 
    }

    cout<<n<<endl;

    return 0;
}