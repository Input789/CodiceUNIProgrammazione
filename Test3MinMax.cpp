#include <iostream>

using namespace std;

int main(){
    int n = -1;
    int min = 100;
    int max = 0;
    int cont = 0;

    cin>>n;

    while (n >= 0){
        if (max < n)max = n;
        if (min > n)min = n;
        cin>>n;
        cont++;
    }

    if(cont != 0){
        cout<<"min: "<<min<<endl;
        cout<<"max: "<<max<<endl;
    }
    else  {
        cout<<"min: "<<-1<<endl;
        cout<<"max: "<<-1<<endl;
    }

    return 0;
}