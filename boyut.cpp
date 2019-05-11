//
//  boyut.cpp
//  bardakkirma
//
//  Created by Huseyin on 7.05.2019.
//  Copyright © 2019 nesneyeyonelikprogramlama2. All rights reserved.
//

#include "boyut.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*----------- ORTA BOY ----------*/
void boyutlar::ortaboy(){
    class Player{
    public:
        int puan;
    };
    int i,j,a,k=0,m=0,y=0,x=0;
    char d[3][10]={};
    Player player1;
    Player player2;
    player1.puan=0;
    player2.puan=0;
    srand( static_cast<unsigned int>(time(NULL)));
    for(i=1;i<4;i++)
    {
        for(j=1;j<11;j++)
        {
            a = rand()%4+0; //Random sayı atayarak d dizisinin içine bardakları rastgele diziyor.
            if(a==0 && k!=4){
                d[i][j]={'K'};
                k++;
            }
            else if(a==1 && m!=5){
                d[i][j]={'M'};
                m++;
            }
            else if(a==2 && y!=8){
                d[i][j]={'Y'};
                y++;
            }
            else if(a==0 || a==1 || a==2 || a==3){
                d[i][j]={'x'};
                x++;
            }
            
        }
    }
    cout<<"----------";
    for(i=1;i<4;i++)
    {
        cout<<"\n";
        for(j=1;j<11;j++)
        {
            cout << d[i][j] ;
        }
    }
    cout<<endl;
    cout<<"----------"<<endl;
    cout<<endl;
    int s=rand(),sira=0,a1,a2;
    if(s%2==0){ //Random sayı ile 1. veya 2. kullanıcının başlayacağını belirliyoruz.
        cout << "1.Kullanici basliyor" << endl;
        sira=1;
    }
    else if (s%2==1){
        cout << "2.Kullanici basliyor" << endl;
        sira=2;
    }
    cout <<"Oyun Basliyor !!" << endl;
jump:
    if(x<=30){ //Eğer x 45 se demektir ki matrisin elemanlarının hepsi x olmuş yani bardak kalmamış
        int ates=rand()%3+0; //Bu random sayı ile atılan koordinatın sağa mı sola mı yoksa tam girilen koordinata mı ateş edilecek belli ediliyor
        if(sira==1){
            cout << "Sira 1.Oyuncuda" << endl;
            cout << "Atis yapmak istediginiz koordinatlari secin.Cikis yapmak icin 9 giriniz." << endl;
            cin >> a1;
            if(a1 == 9){
                goto jump1;
            }
            cin >> a2;
                if(ates==1){
                    if(d[a1][a2]=='Y'){
                        cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                        player1.puan+=1;
                        d[a1][a2]='x';
                        x++;
                        sira=2;
                        goto jump;
                    }
                    else if(d[a1][a2]=='M'){
                        cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                        player1.puan+=2;
                        d[a1][a2]='x';
                        x++;
                        sira=2;
                        goto jump;
                    }
                    else if(d[a1][a2]=='K'){
                        cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                        player1.puan+=3;
                        d[a1][a2]='x';
                        x++;
                        sira=2;
                        goto jump;
                        
                    }
                    else{
                        cout<<"Puan kazanamadiniz."<<endl;
                        sira=2;
                        goto jump;
                        
                    }
                }
                else if(ates==0){
                    if(d[a1][a2-1]=='Y'){
                        cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                        player1.puan+=1;
                        d[a1][a2-1]='x';
                        x++;
                        sira=2;
                        goto jump;
                    }
                    else if(d[a1][a2-1]=='M'){
                        cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                        player1.puan+=2;
                        d[a1][a2-1]='x';
                        x++;
                        sira=2;
                        goto jump;
                        
                    }
                    else if(d[a1][a2-1]=='K'){
                        cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                        player1.puan+=3;
                        d[a1][a2-1]='x';
                        x++;
                        sira=2;
                        goto jump;
                        
                    }
                    else{
                        cout<<"Puan kazanamadiniz."<<endl;
                        sira=2;
                        goto jump;
                        
                    }
                }
                else if(ates==2){
                    if(d[a1][a2+1]=='Y'){
                        cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                        player1.puan+=1;
                        d[a1][a2+1]='x';
                        x++;
                        sira=2;
                        goto jump;
                        
                    }
                    else if(d[a1][a2+1]=='M'){
                        cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                        player1.puan+=2;
                        d[a1][a2+1]='x';
                        x++;
                        sira=2;
                        goto jump;
                        
                    }
                    else if(d[a1][a2+1]=='K'){
                        cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                        player1.puan+=3;
                        d[a1][a2+1]='x';
                        x++;
                        sira=2;
                        goto jump;
                        
                    }
                    else{
                        cout<<"Puan kazanamadiniz."<<endl;
                        sira=2;
                        goto jump;
                        
                    }
                }
            }
        if(sira==2){
                cout << "Sira 2.Oyuncuda" << endl;
                cout << "Atis yapmak istediginiz koordinatlari secin.Cikis yapmak icin 9 secin." << endl;
                cin >> a1;
            if(a1 == 9){
                goto jump1;
            }
                cin >> a2;
                if(ates==1){
                    if(d[a1][a2]=='Y'){
                        cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                        player2.puan+=1;
                        d[a1][a2]='x';
                        x++;
                        sira=1;
                        goto jump;
                        
                    }
                    else if(d[a1][a2]=='M'){
                        cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                        player2.puan+=2;
                        d[a1][a2]='x';
                        x++;
                        sira=1;
                        goto jump;
                        
                    }
                    else if(d[a1][a2]=='K'){
                        cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                        player2.puan+=3;
                        d[a1][a2]='x';
                        x++;
                        sira=1;
                        goto jump;
                        
                    }
                    else{
                        cout<<"Puan kazanamadiniz."<<endl;
                        sira=1;
                        goto jump;
                        
                    }
                }
                else if(ates==0){
                    if(d[a1][a2-1]=='Y'){
                        cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                        player2.puan+=1;
                        d[a1][a2-1]='x';
                        x++;
                        sira=1;
                        goto jump;
                        
                    }
                    else if(d[a1][a2-1]=='M'){
                        cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                        player2.puan+=2;
                        d[a1][a2-1]='x';
                        x++;
                        sira=1;
                        goto jump;
                        
                    }
                    else if(d[a1][a2-1]=='K'){
                        cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                        player2.puan+=3;
                        d[a1][a2-1]='x';
                        x++;
                        sira=1;
                        goto jump;
                        
                    }
                    else{
                        cout<<"Puan kazanamadiniz."<<endl;
                        sira=1;
                        goto jump;
                        
                    }
                }
                else if(ates==2){
                    if(d[a1][a2+1]=='Y'){
                        cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                        player2.puan+=1;
                        d[a1][a2+1]='x';
                        x++;
                        sira=1;
                        goto jump;
                        
                    }
                    else if(d[a1][a2+1]=='M'){
                        cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                        player2.puan+=2;
                        d[a1][a2+1]='x';
                        x++;
                        sira=1;
                        goto jump;
                        
                    }
                    else if(d[a1][a2+1]=='K'){
                        cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                        player2.puan+=3;
                        d[a1][a2+1]='x';
                        x++;
                        sira=1;
                        goto jump;
                        
                    }
                    else{
                        cout<<"Puan kazanamadiniz."<<endl;
                        sira=1;
                        goto jump;
                    }
                }
        }
    }
    else{
    jump1:
        cout << "Oyun bitti !" << endl << "1. Kullanicinin puani = "<< player1.puan << endl << "2. Kullanicinin puani = " << player2.puan << endl;
        if(player1.puan > player2.puan){
            cout << "1.Oyuncu oyunu kazandi" << endl;
            exit(0);
        }
        else if(player1.puan == player2.puan){
            cout << "Oyun berabere bitti" << endl;
            exit(0);
        }
        else if(player2.puan > player1.puan){
            cout << "2.Oyuncu oyunu kazandi" << endl;
            exit(0);
        }
        else{
            cout << "Bir seyler yanlis gitti galiba :( " << endl;
            exit(0);
        }
    }
}
/*---------- BUYUK BOY ----------*/
void boyutlar :: buyukboy(){
    class Player{
    public:
        int puan;
    };
    int i,j,a,k=0,m=0,y=0,x=0;
    char d[3][15]={};
    Player player1;
    Player player2;
    player1.puan=0;
    player2.puan=0;
    srand( static_cast<unsigned int>(time(NULL)));
    for(i=0;i<3;i++)
    {
        for(j=0;j<15;j++)
        {
            a = rand()%5+0; //Random sayı atayarak d dizisinin içine bardakları rastgele diziyor.
            if(a==0 && k!=4){
                d[i][j]={'K'};
                k++;
            }
            else if(a==1 && m!=5){
                d[i][j]={'M'};
                m++;
            }
            else if(a==2 && y!=8){
                d[i][j]={'Y'};
                y++;
            }
            else if(a==0 || a==1 || a==2 || a==3 || a==4){
                if(x<=28){
                    d[i][j]={'x'};
                    x++;}
            }
            
        }
    }
    cout<<"---------------";
    for(i=0;i<3;i++)
    {
        cout<<"\n";
        for(j=0;j<15;j++)
        {
            cout << d[i][j] ;
        }
    }
    cout<<endl;
    cout<<"---------------" <<endl;
    int s=rand(),sira=0,a1,a2;
    if(s%2==0){ //Random sayı ile 1. veya 2. kullanıcının başlayacağını belirliyoruz.
        cout << "1.Kullanici basliyor" << endl;
        sira=1;
    }
    else if (s%2==1){
        cout << "2.Kullanici basliyor" << endl;
        sira=2;
    }
    cout <<"Oyun Basliyor !!" << endl;
jump:
    if(x<=45){ //Eğer x 45 se demektir ki matrisin elemanlarının hepsi x olmuş yani bardak kalmamış
        int ates=rand()%3+0; //Bu random sayı ile atılan koordinatın sağa mı sola mı yoksa tam girilen koordinata mı ateş edilecek belli ediliyor
        if(sira==1){
            cout << "Sira 1.Oyuncuda" << endl;
            cout << "Atis yapmak istediginiz koordinatlari secin.Cikis yapmak icin 9 secin." << endl;
            cin >> a1;
            if(a1 == 9){
                goto jump1;
            }
            cin >> a2;
            if(ates==1){
                if(d[a1][a2]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player1.puan+=1;
                    d[a1][a2]='x';
                    x++;
                    sira=2;
                    goto jump;
                }
                else if(d[a1][a2]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player1.puan+=2;
                    d[a1][a2]='x';
                    x++;
                    sira=2;
                    goto jump;
                }
                else if(d[a1][a2]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player1.puan+=3;
                    d[a1][a2]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=2;
                    goto jump;
                    
                }
            }
            else if(ates==0){
                if(d[a1][a2-1]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player1.puan+=1;
                    d[a1][a2-1]='x';
                    x++;
                    sira=2;
                    goto jump;
                }
                else if(d[a1][a2-1]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player1.puan+=2;
                    d[a1][a2-1]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else if(d[a1][a2-1]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player1.puan+=3;
                    d[a1][a2-1]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=2;
                    goto jump;
                    
                }
            }
            else if(ates==2){
                if(d[a1][a2+1]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player1.puan+=1;
                    d[a1][a2+1]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else if(d[a1][a2+1]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player1.puan+=2;
                    d[a1][a2+1]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else if(d[a1][a2+1]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player1.puan+=3;
                    d[a1][a2+1]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=2;
                    goto jump;
                    
                }
            }
        }
        if(sira==2){
            cout << "Sira 2.Oyuncuda" << endl;
            cout << "Atis yapmak istediginiz koordinatlari secin.Cikis yapmak icin 9 secin." << endl;
            cin >> a1;
            if(a1 == 9){
                goto jump1;
            }
            cin >> a2;
            if(ates==1){
                if(d[a1][a2]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player2.puan+=1;
                    d[a1][a2]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player2.puan+=2;
                    d[a1][a2]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player2.puan+=3;
                    d[a1][a2]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=1;
                    goto jump;
                    
                }
            }
            else if(ates==0){
                if(d[a1][a2-1]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player2.puan+=1;
                    d[a1][a2-1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2-1]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player2.puan+=2;
                    d[a1][a2-1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2-1]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player2.puan+=3;
                    d[a1][a2-1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=1;
                    goto jump;
                    
                }
            }
            else if(ates==2){
                if(d[a1][a2+1]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player2.puan+=1;
                    d[a1][a2+1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2+1]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player2.puan+=2;
                    d[a1][a2+1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2+1]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player2.puan+=3;
                    d[a1][a2+1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=1;
                    goto jump;
                }
            }
        }
    }
    else{
    jump1:
        cout << "Oyun bitti !" << endl;
        if(player1.puan > player2.puan){
            cout << "1.Oyuncu oyunu kazandi" << endl;
            exit(0);
        }
        else if(player1.puan == player2.puan){
            cout << "Oyun berabere bitti" << endl;
            exit(0);
        }
        else if(player2.puan > player1.puan){
            cout << "2.Oyuncu oyunu kazandi" << endl;
            exit(0);
        }
        else{
            cout << "Bir seyler yanlis gitti galiba :( " << endl;
            exit(0);
        }
    }
}

/*---------- KUCUK BOY ----------*/

void boyutlar :: kucukboy(){
    class Player{
    public:
        int puan;
    };
    int i,j,a,k=0,m=0,y=0,x=0;
    char d[3][8]={};
    Player player1;
    Player player2;
    player1.puan=0;
    player2.puan=0;
    srand( static_cast<unsigned int>(time(NULL)));
    for(i=0;i<3;i++)
    {
        for(j=0;j<8;j++)
        {
            a = rand()%4+0;
            if(a==0 && k!=4){
                d[i][j]={'K'};
                k++;
            }
            else if(a==1 && m!=5){
                d[i][j]={'M'};
                m++;
            }
            else if(a==2 && y!=8){
                d[i][j]={'Y'};
                y++;
            }
            else if(a==0 || a==1 || a==2 || a==3){
                d[i][j]={'x'};
                x++;
            }
            
        }
    }
    cout<<"--------";
    for(i=0;i<3;i++)
    {
        cout<<"\n";
        for(j=0;j<8;j++)
        {
            cout << d[i][j] ;
        }
    }
    cout<<endl;
    cout<<"--------" <<endl;
    int s=rand(),sira=0;
    int a1,a2;
    if(s%2==0){
        cout << "1.Kullanici basliyor" << endl;
        sira=1;
    }
    else if (s%2==1){
        cout << "2.Kullanici basliyor" << endl;
        sira=2;
    }
    cout <<"Oyun Basliyor !!" << endl;
jump:
    if(x<=24){
        int ates=rand()%3+0;
        if(sira==1){
            cout << "Sira 1.Oyuncuda" << endl;
            cout << "Atis yapmak istediginiz koordinatlari secin.Cikis yapmak icin 9 secin." << endl;
            cin >> a1;
            if(a1 == 9){
                goto jump1;
            }
            cin >> a2;
            if(ates==1){
                if(d[a1][a2]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player1.puan+=1;
                    d[a1][a2]='x';
                    x++;
                    sira=2;
                    goto jump;
                }
                else if(d[a1][a2]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player1.puan+=2;
                    d[a1][a2]='x';
                    x++;
                    sira=2;
                    goto jump;
                }
                else if(d[a1][a2]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player1.puan+=3;
                    d[a1][a2]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=2;
                    goto jump;
                    
                }
            }
            else if(ates==0){
                if(d[a1][a2-1]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player1.puan+=1;
                    d[a1][a2-1]='x';
                    x++;
                    sira=2;
                    goto jump;
                }
                else if(d[a1][a2-1]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player1.puan+=2;
                    d[a1][a2-1]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else if(d[a1][a2-1]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player1.puan+=3;
                    d[a1][a2-1]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=2;
                    goto jump;
                    
                }
            }
            else if(ates==2){
                if(d[a1][a2+1]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player1.puan+=1;
                    d[a1][a2+1]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else if(d[a1][a2+1]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player1.puan+=2;
                    d[a1][a2+1]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else if(d[a1][a2+1]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player1.puan+=3;
                    d[a1][a2+1]='x';
                    x++;
                    sira=2;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=2;
                    goto jump;
                    
                }
            }
        }
        if(sira==2){
            cout << "Sira 2.Oyuncuda" << endl;
            cout << "Atis yapmak istediginiz koordinatlari secin.Cikis yapmak icin 9 secin." << endl;
            cin >> a1;
            if(a1 == 9){
                goto jump1;
            }
            cin >> a2;
            if(ates==1){
                if(d[a1][a2]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player2.puan+=1;
                    d[a1][a2]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player2.puan+=2;
                    d[a1][a2]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player2.puan+=3;
                    d[a1][a2]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=1;
                    goto jump;
                    
                }
            }
            else if(ates==0){
                if(d[a1][a2-1]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player2.puan+=1;
                    d[a1][a2-1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2-1]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player2.puan+=2;
                    d[a1][a2-1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2-1]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player2.puan+=3;
                    d[a1][a2-1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=1;
                    goto jump;
                    
                }
            }
            else if(ates==2){
                if(d[a1][a2+1]=='Y'){
                    cout << "Yesil bardagi vurdunuz 1 puan kazandiniz." ;
                    player2.puan+=1;
                    d[a1][a2+1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2+1]=='M'){
                    cout << "Mavi bardagi vurdunuz 2 puan kazandiniz." ;
                    player2.puan+=2;
                    d[a1][a2+1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else if(d[a1][a2+1]=='K'){
                    cout << "Kirmizi bardagi vurdunuz 3 puan kazandiniz." ;
                    player2.puan+=3;
                    d[a1][a2+1]='x';
                    x++;
                    sira=1;
                    goto jump;
                    
                }
                else{
                    cout<<"Puan kazanamadiniz."<<endl;
                    sira=1;
                    goto jump;
                }
            }
        }
    }
    else{
    jump1:
        cout << "Oyun bitti !" << endl;
        if(player1.puan > player2.puan){
            cout << "1.Oyuncu oyunu kazandi" << endl;
            exit(0);
        }
        else if(player1.puan == player2.puan){
            cout << "Oyun berabere bitti" << endl;
            exit(0);
        }
        else if(player2.puan > player1.puan){
            cout << "2.Oyuncu oyunu kazandi" << endl;
            exit(0);
        }
        else{
            cout << "Bir seyler yanlis gitti galiba :( " << endl;
            exit(0);
        }
    }
}

