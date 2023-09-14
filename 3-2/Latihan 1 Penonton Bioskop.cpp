#include<iostream> 
#include<string>
using namespace std;

int main()
{
    string nama; int umur, uang, urut;
    cout <<"masukkan nama anda: "; cin >> nama;  
    cout <<"Masukan umur anda: "; cin >> umur; 
    cout <<"Masukan nomer urut anda: "; cin >> urut; 
    cout <<"Masukan uang anda: "; cin >> uang; 
    cout <<"Selamat Datang Saudara " + nama + " di Bioskop ABC."<<endl;

    if(uang>=25000 && umur>=17){
        cout<<"silahkan masuk ke pintu teater 1";
        if(uang=+27000 && urut==7){cout<<"Dan Selamat Anda mendapatkan hadiah Kipas Angin Super";}
    } 
    else{
        cout<<"Silahkan ke Petugas terdekat ";
        if(uang<10000 && umur<=10){cout<<"Dan Anda bisa membeli ice cream yang sudah meleleh";} 
    }
}

