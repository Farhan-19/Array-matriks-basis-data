#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main ()
{
	char kata[35];
	int i,j;
	
	cout << "Aplikasi Stack untuk membalik kalimat\n";
	cout << "=====================================\n";
	cout << "Masukan kalimat : ";
	cin.getline(kata,35);
	cout << endl << "Jumlah Huruf : "<< strlen(kata) << endl;
	cout << "kalimat Asli : "<< kata <<endl;
	j=strlen(kata);
	cout << "kata dibalik menjadi : ";
	for(i=j;i>=1;i--){
		char stack=kata[i-1];
		cout << stack <<"  ";
	}
	bool valid = true;
	for(i=0;i!=j/2;i++){
		if(valid){
			if(kata[i]!=kata[j-i-1]){
				valid=false;
			}
		}
		else{
			break;
		}
	}
	cout<<endl<<endl;
	if(valid==true){
		cout << "Palindrome";
	}
	else{
		cout << "Bukan Palindrome";
	}
	getch();
}
