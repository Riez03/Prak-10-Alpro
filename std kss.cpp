#include <iostream>
#define MAX 5
using namespace std;
class data{
  public:
    void input();
    void output();
  private :
    int nim[MAX];
  	string nama[MAX];
    int n;
};
void data::input(){
  cout<<"Masukan banyak data : ";cin>>n;
	for (int i = 0; i < n; i++) {
		cout << "\nMasukkan NIM "<<i+1<<":"; cin>>nim[i];
		cout << "Masukan Nama "<<i+1<<":"; cin>>nama[i];
	}
  cout << endl;
}
void data::output(){
    int *pnim; 
  	pnim = nim; 
  	string *pnama; 
  	pnama = nama;
	for (int i = 0; i < n; i++) {
		cout << "NIM ["<<i+1<<"] : "<<*pnim <<endl;
		pnim++;
		cout << "Nama ["<<i+1<<"] : "<<*pnama <<endl <<endl;
		pnama++;
	}
}
int main() {
	data run;
  run.input();
  run.output();
}
