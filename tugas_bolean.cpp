#include <iostream>
using namespace std;
int main()
{
    int a, b, c, hasil2, hasil3, hasilakhir;

    cout<<"===================================="<<endl;
    cout<<"=======     input nilai      ======="<<endl;
    cout<<"===================================="<<endl;

    
    cout<<"masukan nilai a =";cin>>a;
    cout<<"masukan nilai b =";cin>>b;
    cout<<"masukan nilai c =";cin>>c;



    hasil2 = a + 4 < 10;
    hasil3 = b > a + 5;
    hasilalkhir = c - 3 >= 4;


    cout<<"program oprasi OR ="<<endl;
    cout<<"============================="<<endl;
    cout<<"hasil dari hasil1 = a + 4 < 10 adalah "<<hasil1<<endl; 
    cout<<"hasil dari hasil2 = b > a + 5 adalah "<<hasil2>>endl;
    cout<<"hasil dari hasil3 = c - 3 => 4 adalah"<<hasil3<<endl;
    cout<<"hasil dari hasilakhir adalah = a && b && c adalah "<<hasilakhir<<endl;


    return 0;





}