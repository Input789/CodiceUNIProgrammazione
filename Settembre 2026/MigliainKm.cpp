#include <iostream>
using namespace std;

#define KM_IN_MILES 1.60934 //Costante non modificabile (per quello in maiuscolo, BestPractice) che converte i miglia in km

int main(){
    const double KM_IN_MILESSS = 1.60934; //Alternatvia
    double miglia = 0.00;
    cin>>miglia;

    cout<<miglia*KM_IN_MILES<<endl;
    cout<<miglia*KM_IN_MILESSS<<endl; //Alternativa

    return 0;


}