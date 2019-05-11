#include <iostream>
#include <cstdlib>
#include <ctime>
#include "boyut.hpp"
using namespace std;
int main() {
    string input="";
    boyutlar boyut;
    cout <<"Bardak Boyutunu giriniz" <<endl;
    getline(cin,input);
    if(input=="kucuk" || input=="Kucuk" || input=="KUCUK"){
        boyut.kucukboy();
    }
    else if (input=="orta" || input=="Orta" || input=="ORTA"){
        boyut.ortaboy();
    }
    else if(input=="buyuk" || input=="Buyuk" || input=="BUYUK"){
        boyut.buyukboy();
    }
    else{
        cout << "Yanlis boyut girdiniz !!" << endl;
        return 0;
    }
    return 0;
}
