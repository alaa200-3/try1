// name: Alaa Adel Mohamed Soliman  ID:20180050
// name: Eman Salah ELdin Abdual Fattah   ID:20180063

#include <iostream>
#include <math.h>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;

void starline()
{
    for(int i=0 ;i<35;i++)
    {
        cout<<"--";
    }
}
int main()
{
    int n,quant,l=0,y=0,p=0;
    double bill,endbill=0;
    string x,m,a,anotheritem;
    char size;
    do{
    cout<<"Welcome to our Pizza restaurant\n"<<endl<<"This is the menu\n"<<endl;
    cout<<"1-SUPER SUPREME\t\tS=50\tM=75.5\tL=100"<<endl<<"2-CHICKEN SUPREME\tS=45\tM=73.88\tL=97.99"<<endl<<"3-MARGHERITA\t\tS=35\tM=7\tL=95"<<endl;
    cout<<"4-CHEESE LOVERS\t\tS=60.96\tM=87.75\tL=113.16"<<endl<<"5-SEA FOOD LOVERS\tS=64.47\tM=94.30\tL=123.25"<<endl;
    starline();cout<<endl;

    cout<<"Please select one of this item"<<endl;cin>>n;
    switch(n){
    case 1:cout<<"You select SUPER SUPREME"<<endl;break;
    case 2:cout<<"You select CHICKEN SUPREME"<<endl;break;
    case 3:cout<<"You select MARGHERITA"<<endl;break;
    case 4: cout<<"You select CHEESE LOVERS"<<endl;break;
    case 5:cout<<"You select SEA FOOD LOVERS"<<endl;break;
    default:cout<<"This request is not exist"<<endl;continue;}
    cout<<endl;

    cout<<"Enter size\ns for small\nm for medium\nl for large"<<endl;
    cin>>size;cout<<endl;
    cout<<"Enter quantity"<<endl;
    cin>>quant;cout<<endl;
    cout<<"Do you want extra topping?"<<endl<<"Enter yes or no"<<endl;
    cin>>x;cout<<endl;
    if (x == "yes"){
            do{
            cout<<"Please select one(mushroom=10 , onion =5 , sausage=10)\n"<<"Enter correct spelling word"<<endl;
            cin>>m;
            if(m=="mushroom")l+=10;
            else if(m=="onion")y+=5;
            else if(m=="sausage")p+=10;
            else cout<<"this extra doesn't exist"<<endl;
            cout<<endl;
            cout<<"DO you want another extra?"<<endl<<"Enter yes or no"<<endl;
            cin>>a;cout<<endl;
            }
            while(a=="yes");
            if(n==1 && size=='s')bill=(50+l+y+p)*quant;
            if(n==1&&size=='m')bill=(75.5+l+y+p)*quant;
            if(n==1&&size=='l')bill=(100+l+y+p)*quant;
            if(n==2&&size=='s')bill=(45+p+y+l)*quant;
            if(n==2&&size=='m')bill=(73.88+p+y+l)*quant;
            if(n==2&&size=='l')bill=(97.99+p+y+l)*quant;
            if(n==3&&size=='s')bill=(35+p+y+l)*quant;
            if(n==3&&size=='m')bill=(70+p+y+l)*quant;
            if(n==3&&size=='l')bill=(95+p+y+l)*quant;
            if(n==4&&size=='s')bill=(60.96+p+y+l)*quant;
            if(n==4&&size=='m')bill=(87.75+p+y+l)*quant;
            if(n==4&&size=='l')bill=(113.16+p+y+l)*quant;
            if(n==5&&size=='s')bill=(64.47+p+y+l)*quant;
            if(n==5&&size=='m')bill=(94.30+p+y+l)*quant;
            if(n==5&&size=='l')bill=(123.25+p+y+l)*quant;
            endbill=endbill+bill;

}
    else{
            int l=0,p=0,y=0;
            if(n==1 && size=='s')bill=(50+l+y+p)*quant;
            if(n==1&&size=='m')bill=(75.5+l+y+p)*quant;
            if(n==1&&size=='l')bill=(100+l+y+p)*quant;
            if(n==2&&size=='s')bill=(45+p+y+l)*quant;
            if(n==2&&size=='m')bill=(73.88+p+y+l)*quant;
            if(n==2&&size=='l')bill=(97.99+p+y+l)*quant;
            if(n==3&&size=='s')bill=(35+p+y+l)*quant;
            if(n==3&&size=='m')bill=(70+p+y+l)*quant;
            if(n==3&&size=='l')bill=(95+p+y+l)*quant;
            if(n==4&&size=='s')bill=(60.96+p+y+l)*quant;
            if(n==4&&size=='m')bill=(87.75+p+y+l)*quant;
            if(n==4&&size=='l')bill=(113.16+p+y+l)*quant;
            if(n==5&&size=='s')bill=(64.47+p+y+l)*quant;
            if(n==5&&size=='m')bill=(94.30+p+y+l)*quant;
            if(n==5&&size=='l')bill=(123.25+p+y+l)*quant;
            endbill=endbill+bill;
            cout<<endl;
}
    cout<<"Do you want another item?\n"<<"Enter yes or no"<<endl;
    cin>>anotheritem;cout<<endl;
    }
    while(anotheritem=="yes");
cout<<endl;
cout<<"thank for using our application"<<endl;
cout<<"Your total bill=";
cout<<endbill;

return 0;

}
