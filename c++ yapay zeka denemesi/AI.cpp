#include <iostream>
using namespace std;

class gidilecek_yer(){
public:
  char anoktası[],bnoktası[],verilencevap[];
  int konum=10;
}

int main(){
  ifstream dosyaoku('C:\Users\user\Desktop\c++ yapay zeka denemesi/koordinat.json');
  string satir= "";

  if (dosyaoku.is_open()) {
    while (getline(dosyaoku,satir)) {
      std::cout << satir << '\n';
    }

    dosyaoku.close();

  }

  return 0;


int verikarsılastır(dosyaoku,char soru[],char cevap[]){
while (dosyaoku != this.verilencevap) {
if (this.verilencevap == this.anoktası and this.verilencevap == this.bnoktası) {
switch (this.konum) {
  case 1:
    cout << "Mersin";
    break;
  case 2:
    cout << "Adana";
    break;
  case 3:
    cout << "Hatay";
    break;
  case 4:
    cout << "Urfa";
    break;
  case 5:
    cout << "Antep";
    break;
  case 6:
    cout << "Manisa";
    break;
  case 7:
    cout << "İzmir";
    break;
  case 8:
    cout << "İzmir";
    break;
  case 9:
    cout << "İzmir";
    break;
  case 7:
    cout << "İzmir";
    break;
default;

}
}else{
std::cout << "Ne dediğini Anlayamadım!" << '\n';
}

}

}















}
