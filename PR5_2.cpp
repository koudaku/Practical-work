#include <iomanip.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream.h>
struct Vkladchik {	
	int account;   
	char name [10]; 
	float suma;    
};
void main(void){ 
    int i, n;
	clrscr();
	cout<<"Vvedite chislo zapisei n=";
	cin>>n;
	Vkladchik k[10];
	cout<<"Vvedite schet, imya, summu \n";
	for(i=0;i<n; i++){
		cin>>k[i].account>>k[i].name>>k[i].suma;
		cout<<"?"<<endl;
	}
	cout<<"Schet"<<setw(9)<<"Imya"<<setw(16)<<"Summa"<<endl;
	for(i=0;i<n;i++)
	cout<<k[i].account<<setw(9)<<k[i].name<<setw(16)<<k[i].suma<<endl;
	cout<<"\n\n";
	cout<<"\nNazhmite liubuyu klavishu...";
	getch();
}
