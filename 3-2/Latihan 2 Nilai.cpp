#include<iostream> 
#include<string>
using namespace std;
 
char NilaiHuruf(float nangka){
    char hasil;
    if      (nangka<41) {hasil= 'E';}
    else if (nangka<51) {hasil= 'D';}
    else if (nangka<61) {hasil= 'C';}
    else if (nangka<81) {hasil= 'B';}
    else if (nangka<101) {hasil= 'A';}
    return hasil;}
    
int main(){
    string nama; float tugas, uts, uas, quiz, nangka; char hasil; 
    cout<<"input nama: "; getline(cin, nama);
    cout<<"input nilai tugas: "; cin>>tugas;
    cout<<"input nilai uts: "; cin>>uts;
    cout<<"input nilai uas: "; cin>>uas;
    cout<<"input nilai quiz: "; cin>>quiz;

    nangka= (0.3*uts) + (0.4*uas) + (0.1*tugas) + (0.2*quiz);
    char nhuruf = NilaiHuruf(nangka);
        
    cout<<"Maka Nilai anda adalah: "<<nangka<<endl;
    cout<<"Maka Nilai anda adalah: "<<nhuruf<<endl;

    switch (nhuruf){
    case 'A': cout<<"Keterangan Nilai: Sangat Baik"; break;
    case 'B': cout<<"Keterangan Nilai: Baik"; break;
    case 'C': cout<<"Keterangan Nilai: Cukup"; break;
    case 'D': cout<<"Keterangan Nilai: Kurang"; break;
    case 'E': cout<<"Keterangan Nilai: Sangat Kurang"; break;
    default: cout<<"INVALID"; break;
    } 
}