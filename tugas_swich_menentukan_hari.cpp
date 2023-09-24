#include <iostream>
using namespace std;
int main()
{////oprator untuk menggunakan proram swith case
    char hari;

    cout<<"================================================"<<endl;
    cout<<"{========   input hari anda = ( 1 - 7)   =========}"<<endl;
    cout<<"================================================"<<endl;
    cin>>hari;

    switch (hari){
      case '1':
      cout<<" {hari minggu} "<<endl;
      break;

      case '2':
      cout<<" {hari senen} "<<endl;
      break;

      case '3':
      cout<<" {hari selasa} "<<endl;
      break;

      case '4':
      cout<<" {hari rabu} "<<endl;
      break;

      case '5':
      cout<<" {hari kamis berkumis} "<<endl;
      break;


      case '6':
      cout<<" {hari jumat jangan lupa jumatan} "<<endl;
      break;

      case '7':
      cout<<" {hari sabtu libur kuliah}"<<endl;
      break;


     default:
     cout<<" {maaf format tidak sesuai} "<<endl;

     return 0;



    }
}