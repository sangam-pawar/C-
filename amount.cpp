#include <iostream>
using namespace std;

int main(){

    int amount =1330;
    cout<<"Total amount "<<amount<<endl;
    int n1,n20,n50,n100;
    n1=n20=n50=n100=0;

    switch (amount>=100){
        case 1 : 
                n100 = amount/100;
                amount -= n100*100;
                cout<<"100:"<<n100<<endl;
                break;
    }

    switch (amount>=50){
        case 1 : 
                n50 = amount/50;
                amount -= n50*50;
                cout<<"50:"<<n50<<endl;
                break;
    }

    switch (amount>=20){
        case 1 : 
                n20 = amount/20;
                amount -= n20*20;
                cout<<"20:"<<n20<<endl;
                break;
    }

    switch (amount>=1){
        case 1 : 
                n1 = amount/1;
                amount -= n1*1;
                cout<<"1:"<<n1<<endl;
                break;
    }
   cout<<endl;
}