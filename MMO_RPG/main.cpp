#include <iostream>
#include <stdlib.h>
#include <fstream>

#include <string.h>
#include <stdio.h>
#include <time.h>

#include "accessdata.h"

using namespace std;

int CalculaDano(int vidaOponente,int DanoFis,int DanoMag,int Armadura,int ResMag ,int Agilidade,int dano_arma,int MagiaDano){
    
    dano_arma=(dano_arma/(float)100)*DanoFis+dano_arma-Armadura; 
    MagiaDano=(MagiaDano/(float)100)*DanoMag+MagiaDano-ResMag;
    
    int numA;
    
    srand(time(NULL));
    numA=rand()%100; 
    
    if(dano_arma<0){
        dano_arma=0;
    }
    if(MagiaDano<0){
        MagiaDano=0;
    }
    
    if(numA>Agilidade){
        vidaOponente=vidaOponente - dano_arma - MagiaDano;
    }
    return vidaOponente;
   
}
int Arma (int personagem, int personagem_2, int dano_arma, int arma,int arma2, int jogador, int* tipo_arma)
{
    srand(time(NULL));
    if(jogador==1)
    {
        switch(personagem)
        {
            case 1:
            
                
                if(arma==1)
                {
                    dano_arma=180+rand() %200;                 //Porrete//
                    *tipo_arma=1;
                }
                else if(arma==2)
                {
                    dano_arma=300+rand() %200;              //Espada Barroca//
                    *tipo_arma=2;
                }
            break;
            case 2:
            
                if(arma==1)
                {
                    dano_arma=50+rand() %150;                //Cajado//
                    *tipo_arma=3;
                }
                else if(arma==2)
                {
                    dano_arma=180+rand() %200;              //Porrete//
                    *tipo_arma=1;
                }
                else if(arma==3)
                {
                    dano_arma=200+rand() %200;          //Esfera de ataque//
                    *tipo_arma=4;
                }
                else if(arma==4)
                {
                    dano_arma=220+rand() %200;             //Besta//
                    *tipo_arma=5;
                }
            break;
            case 3:
               
                if(arma==1)
                {
                    dano_arma=50+rand() %150;                //Cajado//
                    *tipo_arma=3;
                }
                else if(arma==2)
                {
                    dano_arma=220+rand() %200;          //Tridente sagrado//
                    *tipo_arma=6;
                }
            break;
            case 4:
                
                if(arma==1)
                {
                    dano_arma=220+rand() %200;          //Tridente sagrado//
                    *tipo_arma=6;
                }
                else if(arma==2)
                {
                    dano_arma=220+rand() %200;             //Besta//
                    *tipo_arma=5;
                }
            break;
        }
    }
    else if(jogador==2)
    {
        switch(personagem_2)
        {
            case 1:
                dano_arma=100+rand() %200;              //Garra letal//
                *tipo_arma=7;
            break;
            case 2:
                
                if(arma2==1)
                {
                    dano_arma=50+rand() %150;                //Cajado//
                    *tipo_arma=3;
                }
                else if(arma2==2)
                {
                    dano_arma=180+rand() %200;              //Porrete//
                    *tipo_arma=1;
                }
            break;
            case 3:
                dano_arma=100+rand() %200;              //Garra letal//
                *tipo_arma=7;
            break;
            case 4:
               
                if(arma2==1)
                {
                    dano_arma=50+rand() %150;                //Cajado//
                    *tipo_arma=3;
                }
                else if(arma2==2)
                {
                    dano_arma=100+rand() %200;              //Garra letal//
                    *tipo_arma=7;
                }
                else if(arma2==3)
                {
                    dano_arma=180+rand() %200;              //Porrete//
                    *tipo_arma=1;
                }
            break;
        }
    }
    return dano_arma;
}
void interface(int jogador, int vida_j1, int vida_j2, int tipo_arma, int Mana1, int Mana2)
{
    cout <<"  Jogador 1  "<<"  Jogador 2"<<"\n";
    cout <<"  Vida:  " <<vida_j1<<"  Vida:  "<<vida_j2<<"\n";
    cout <<"  Mana:  " <<Mana1<<"  Mana:  "<<Mana2;
    if(jogador==1)
    {
        cout<<"\n  ----Roud do jogador 1----";
    }
    else if(jogador==2)
    {
        cout<<"\n  ----Roud do jogador 2----";
    }
    if(tipo_arma==1)
    {
        cout<<"\nArma: Porrete";
    }
    else if(tipo_arma==2)
    {
        cout<<"\nArma: Espada Barroca";
    }
    else if(tipo_arma==3)
    {
        cout<<"\nArma: Cajado";
    }
    else if(tipo_arma==4)
    {
        cout<<"\nArma: Esfera de Ataque";
    }
    else if(tipo_arma==5)
    {
        cout<<"\nArma: Besta";
    }
    else if(tipo_arma==6)
    {
        cout<<"\nArma: Tridente Sagrado";
    }
    else if(tipo_arma==7)
    {
        cout<<"\nArma: Garra Letal";
    }
    
    cout<<"\n---Qual ação deseja realizar---";
}
int Magia (int personagem, int personagem_2, int MagiaDano,int magia1,int magia2, int Mana1,int Mana2,int jogador)
{
    srand(time(NULL));
    if(jogador==1)
    {
        switch(personagem)
        {
            case 1:
                
                    MagiaDano=200;              //Tempestade//
                
            break;
            case 2:
            
                if(magia1==1)
                {
                    MagiaDano=200;            //Tempestade//
                }
                else if(magia1==2)
                {
                    MagiaDano=280;             //Intoxicação//
                }
               
            break;
            case 3:
                
                if(magia1==1)
                {
                    MagiaDano=-200;                //Poção de cura//
                }
                else if(magia1==2)
                {
                    MagiaDano=360;          //Bio//
                }
                else if(magia1==3)
                {
                    MagiaDano=-400;          //Cura//
                }
                else if(magia1==4)
                {
                    MagiaDano=320;          //Flama gelada//
                }
                else if(magia1==5)
                {
                    MagiaDano=280;             //Intoxicação//
                }
                else if(magia1==6)
                {
                    MagiaDano=200;            //Tempestade//
                }
            break;
            case 4:
                
                if(magia1==1)
                {
                    MagiaDano=-200;                //Poção de cura//
                }
                else if(magia1==2)
                {
                    MagiaDano=320;          //Flama gelada//
                }
                else if(magia1==3)
                {
                    MagiaDano=200;            //Tempestade//
                }
            break;
        }
    }
    else if(jogador==2)
    {
        switch(personagem_2)
        {
            case 1:
                MagiaDano=360;          //Bio//
            break;
            case 2:
                MagiaDano=280;             //Intoxicação//
            break;
            case 3:
                MagiaDano=400;             //Hálito de fogo//
            break;
            case 4:
                MagiaDano=280;             //Intoxicação//
            break;
        }
    }
    return MagiaDano;
}
int main()
{
    int qtdAtributos = 7;
    int dano_arma;
    int att1[7], att2[7];
    int arma=1, arma2=1;
    int MagiaDano;
    int tipo_arma;
    int magia1, magia2;
    int Mana1, Mana2;
    int armaLendaria;
    int chance;
       
    Accessdata * a = new Accessdata(qtdAtributos);

    int * atributos;
    int jogador=1, escolha, atacar, personagem;                               //Variáveis auxiliares de controle de ação.//
    int personagem_2;
    cout<<"Pressione qualquer tecla para começar.";
    
    cout<<"\nJogador 1-> Escolha seu personagem.\n(1)-Guerreiro  (2)-Ladrão (3)-Mago  (4)-Paladino\nDigite:";
    cin>>personagem;
    switch(personagem)
    {
        case 1:
        atributos = a->obtemAtributos ("guerreiro.txt");
        break;
        case 2:
        atributos = a->obtemAtributos ("ladrao.txt");
        break;
        case 3:
        atributos = a->obtemAtributos ("mago.txt");
        break;
        case 4:
        atributos = a->obtemAtributos ("paladino.txt");
        break;
    }
    for(int repet=0;repet<7;repet++)
    {
        att1[repet]=atributos[repet];
    }
    Mana1=att1[1];
    cout<<"\nJogador 2-> Escolha seu personagem.\n(1)-Animal  (2)-Troll (3)-Dragão  (4)-Zumbi\nDigite:";
    cin>>personagem_2;
    switch(personagem_2)
    {
        case 1:
        atributos = a->obtemAtributos ("animal.txt");
        break;
        case 2:
        atributos = a->obtemAtributos ("troll.txt");
        break;
        case 3:
        atributos = a->obtemAtributos ("dragao.txt");
        break;
        case 4:
        atributos = a->obtemAtributos ("zumbi.txt");
        break;
    }
    for(int repet=0;repet<7;repet++)
    {
        att2[repet]=atributos[repet];
    }
   Mana2= att2[1];
   system("clear");
    do
    {
        if(jogador==1)
        {   
            Mana1 += 10;
            armaLendaria=0;
            srand(time(NULL));
            armaLendaria=rand() %100;
            
            if(Mana1>att1[1]){
                Mana1=att1[1];
            }
            dano_arma=Arma(personagem,personagem_2,dano_arma,arma,arma2,jogador,&tipo_arma);
            interface(jogador,att1[0],att2[0],tipo_arma,Mana1,Mana2);
            if(armaLendaria<=20){
                cout << "\nVocê recebeu a benção de Bul-Kathos e pode usar espada lendária Voto Solene de Bul-Kathos caso opte por Atacar fisicamente\n";
                
            }
            do
            {
                
                cout<<"\n||(1)-Ataque||(2)-Magia||(3)-Trocar Arma||\nDigite:";
                cin>>escolha;
                if((escolha>3)||(escolha<1))
                {
                    cout<<"\n*ESSA AÇÃO NÃO EXISTE*";
                }
            }while((escolha>3)||(escolha<1));
            switch(escolha)
            {
                case 1:
                if(armaLendaria<=20){
                    srand(time(NULL));

                        dano_arma=500+rand()%400;
                        chance=rand()%100;
                        if(chance<=30)
                        {
                           dano_arma+=dano_arma;
                        }
                        
                    
                }
                if(armaLendaria>20){
                    dano_arma=Arma(personagem,personagem_2,dano_arma,arma,arma2,jogador,&tipo_arma);
                }
                    att2[0] = CalculaDano(att2[0],att1[2],0,att2[4],0,att2[6],dano_arma,0);//vidaOponente, DanoFis, DanoMag, ArmaduraOp, ResMagOp, Agilidade,Dano da Arma,Dano da Magia
                
                break;
                case 2:
               
                if(personagem==2){
                    cout<< "\nQual Magia deseja usar?\n"<<"1-Tempestade\n"<<"2-Intoxicação\n";
                    cin >> magia1;
                    
                }
                if(personagem==3){
                    cout<< "\nQual Magia deseja usar?\n"<<"1-Poção de vida\n"<<"2-Bio\n"<<"3-Cura\n"<<"4-Flama Gelada\n"<<"5-intoxicação\n"<<"6-Tempestade\n";
                    cin >> magia1;
                    
                }
                if(personagem==4){
                    cout<< "\nQual Magia deseja usar?\n"<<"1-Poção de vida\n"<<"2-Flama Gelada\n"<<"3-Tempestade\n";
                    cin >> magia1;
                    
                }
                MagiaDano = Magia(personagem,personagem_2,MagiaDano,magia1,magia2,Mana1,Mana2,jogador);
                if(MagiaDano==-200){
                    Mana1 -= 12;
                    if(Mana1>=12){
                    att1[0]+=200;
                    }
                }
                if(MagiaDano==400){
                    Mana1= Mana1-12;
                }
                if(MagiaDano==360){
                    Mana1= Mana1-14;
                }
                if(MagiaDano==-400){
                    Mana1 -= 16;
                    if(Mana1>=16){
                    att1[0]+=400;
                    }
                }
                if(MagiaDano==320){
                    Mana1= Mana1-14;
                }
                if(MagiaDano==280){
                    Mana1= Mana1-12;
                }
                if(MagiaDano==200){
                    Mana1= Mana1-12;
                }
                if(MagiaDano>0 && Mana1>0){
                att2[0] = CalculaDano(att2[0],0,att1[3],0,att2[5],att2[6],0,MagiaDano);//vidaOponente, DanoFis, DanoMag, ArmaduraOp, ResMagOp, Agilidade,Dano da Arma,Dano da Magia
                }
                if(Mana1<0){
                    Mana1=0;
                }
                
                break;
                case 3:
                arma++;
                    switch(personagem)
                    {
                        case 1:
                        cout << arma;
                            if(arma<1||arma>2)
                            {
                                arma=1;
                            }
                            if(arma==1)
                            {
                                dano_arma=180+rand() %200;                 //Porrete//
                                tipo_arma=1;
                            }
                            else if(arma==2)
                            {
                                dano_arma=300+rand() %200;              //Espada Barroca//
                                tipo_arma=2;
                            }
                        break;
                        case 2:
                        if(arma<1||arma>4)
                            {
                                arma=1;
                            }
                            if(arma==1)
                            {
                                dano_arma=50+rand() %150;                //Cajado//
                                tipo_arma=3;
                            }
                            else if(arma==2)
                            {
                                dano_arma=180+rand() %200;              //Porrete//
                                tipo_arma=1;
                            }
                            else if(arma==3)
                            {
                                dano_arma=200+rand() %200;          //Esfera de ataque//
                                tipo_arma=4;
                            }
                            else if(arma==4)
                            {
                                dano_arma=220+rand() %200;             //Besta//
                                tipo_arma=5;
                            }
                        break;
                        case 3:
                            if(arma<1||arma>2)
                            {
                                arma=1;
                            }
                            if(arma==1)
                            {
                                dano_arma=50+rand() %150;                //Cajado//
                                tipo_arma=3;
                            }
                            else if(arma==2)
                            {
                                dano_arma=220+rand() %200;          //Tridente sagrado//
                                tipo_arma=6;
                            }
                        break;
                        case 4:
                            if(arma<1||arma>2)
                            {
                                arma=1;
                            }
                            if(arma==1)
                            {
                                dano_arma=220+rand() %200;          //Tridente sagrado//
                                tipo_arma=6;
                            }
                            else if(arma==2)
                            {
                                dano_arma=220+rand() %200;             //Besta//
                                tipo_arma=5;
                            }
                        break;
                    }
                   
                break;
            }
            jogador=2;
        }
        else if(jogador==2)
        {
            Mana2 += 10;
            armaLendaria=0;
            srand(time(NULL));
            armaLendaria=rand() %100;
            
            if(Mana2>att2[1]){
                Mana2=att2[1];
            }
            dano_arma=Arma(personagem,personagem_2,dano_arma,arma,arma2,jogador,&tipo_arma);
            interface(jogador,att1[0],att2[0],tipo_arma,Mana1,Mana2);
            if(armaLendaria<=20){
                cout << "\nVocê recebeu a benção de Bul-Kathos e pode usar espada lendária Voto Solene de Bul-Kathos caso opte por Atacar fisicamente\n";
                
            }
            do
            {
                cout<<"\n||(1)-Ataque||(2)-Magia||(3)-Trocar Arma||\nDigite:";
                cin>>escolha;
                if((escolha>3)||(escolha<1))
                {
                    cout<<"\n*ESSA AÇÃO NÃO EXISTE*";
                }
            }while((escolha>3)||(escolha<1));
            switch(escolha)
            {
                case 1:
                
                    if(armaLendaria<=20){
                    srand(time(NULL));

                        dano_arma=500+rand()%400;
                        chance=rand()%100;
                        if(chance<=30)
                        {
                           dano_arma+=dano_arma;
                        }
                        
                    
                }
                    
                
                if(armaLendaria>20){
                    dano_arma=Arma(personagem,personagem_2,dano_arma,arma,arma2,jogador,&tipo_arma);
                }
                    att1[0] = CalculaDano(att1[0],att2[2],0,att1[4],0,att1[6],dano_arma,0);//vidaOponente, DanoFis, DanoMag, ArmaduraOp, ResMagOp, Agilidade,Dano da Arma,Dano da Magia
                
                break;
                case 2:
                    
                MagiaDano = Magia(personagem,personagem_2,MagiaDano,magia1,magia2,Mana1,Mana2,jogador);
                if(MagiaDano==-200){
                    Mana2= Mana2-12;
                    if(Mana2>=12){
                    att2[0]+=200;
                    }
                }
                if(MagiaDano==400){
                    Mana2= Mana2-12;
                }
                if(MagiaDano==360){
                    Mana2= Mana2-14;
                }
                if(MagiaDano==-400){
                    Mana2= Mana2-16;
                    if(Mana2>=16){
                    att2[0]+=400;
                    }
                }
                if(MagiaDano==320){
                    Mana2= Mana2-14;
                
                }
                if(MagiaDano==280){
                    Mana2= Mana2-12;
                }
                if(MagiaDano==200){
                    Mana2= Mana2-12;
                }
                if(MagiaDano>0&& Mana2>0){
                    att1[0] = CalculaDano(att1[0],0,att2[3],0,att1[5],att1[6],0,MagiaDano);//vidaOponente, DanoFis, DanoMag, ArmaduraOp, ResMagOp, Agilidade,Dano da Arma,Dano da Magia
                }
               if(Mana2<0){
                    Mana2=0;
                }
                break;
               case 3:
               arma2++;
                switch(personagem_2)
                    {
                        case 1:
                            dano_arma=100+rand() %200;              //Garra letal//
                            tipo_arma=7;
                        break;
                        case 2:
                            if(arma2<1||arma2>2)
                            {
                                arma2=1;
                            }
                            if(arma2==1)
                            {
                                dano_arma=50+rand() %150;                //Cajado//
                                tipo_arma=3;
                            }
                            else if(arma2==2)
                            {
                                dano_arma=180+rand() %200;              //Porrete//
                                tipo_arma=1;
                            }
                        break;
                        case 3:
                            dano_arma=100+rand() %200;              //Garra letal//
                            tipo_arma=7;
                        break;
                        case 4:
                            if(arma2<1||arma2>3)
                            {
                                arma2=1;
                            }
                            if(arma2==1)
                            {
                                dano_arma=50+rand() %150;                //Cajado//
                                tipo_arma=3;
                            }
                            else if(arma2==2)
                            {
                                dano_arma=100+rand() %200;              //Garra letal//
                                tipo_arma=7;
                            }
                            else if(arma2==3)
                            {
                                dano_arma=180+rand() %200;              //Porrete//
                                tipo_arma=1;
                            }
                        break;
                    }
                    
                break;
            }
                
            jogador=1;
        }
        
        if(att1[0]<=0){
            break;
        }
        if(att2[0]<=0){
            break;
        }
        
        
       system("clear");
        
    }while((att1[0]!=0)||(att2[0]!=0));
    
    if(att1[0]<=0)
    {
        cout<<"\n--------------VITORIA JOGADOR 2--------------";
    }
    else if(att2[0]<=0)
    {
        cout<<"\n--------------VITORIA JOGADOR 1--------------";
    }
    
    return 0;
}