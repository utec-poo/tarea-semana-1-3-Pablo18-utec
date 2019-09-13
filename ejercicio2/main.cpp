#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {int monto,zona,claro=0,a,b;

        cout<<"de que zona del evento es  1:super vip  2 vip 3 preferencial 4 general"<<zona;

        if(zona==1){{
            cout<<"usted es cliente claro a=si soy b= no soy";
        cin>>claro;}
        if(claro=a){
        cout<<"pagaras 168";}
        else(claro=b){
        cout<<"pagaras 212";}}

        if((zona==2){{
            cout<<"usted es cliente claro a=si soy  b= no soy";
        cin<<claro;}
        if(claro=a){
        cout<<"pagaras 136";}
        else(claro=b){
        cout<<"pagaras 170";}}

        if(zona==3){{
            cout<<"usted es cliente claro a=si soy b= no soy";
        cin>>claro;}
        if(claro=a){
        cout<<"pagaras 108.8";}
        else(claro=b){
            cout<<"pagaras 136";
        }}

        if((zona==4){{
        cout<<"usted es cliente claro   a=si soy b= no soy";
        cin>>claro;}

        if(claro=a)){
        cout<<"pagaras 55.2";}
        else(claro=b){
        cout<<"pagaras 60";}}

        // ToDO

        return 0;
    }
