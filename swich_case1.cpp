#include <iostream>
using namespace std;
int main()
{////oprator untuk menggunakan proram swith case
    char nilai;

    cout<<"input nilai anda (A - E)";
    cin>>nilai;

    switch (nilai){
      case 'A':
      cout<<"prtahankan!"<<endl;
      break;

      case 'b':
      cout<<"harus lebih baik lagi!"<<endl;
      break;

      case 'c':
      cout<<"perbanyak belajar!"<<endl;
      break;

      case 'D':
      cout<<"Jangan keseringan main!"<<endl;
      break;

      case 'e':
      cout<<"kebayakan bolos!"<<endl;
      break;


     default:
     cout<<"maaf format tidak sesuai"<<endl;

     return 0;



    }
}