#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
 
  int main (int argc, char *argv[])
{
	int A[2][2]={4,2,8,10};
	int n;
cout<< "======================================================="<<endl;
cout<< "           Perkalian Matriks dengan eksponen 5"<<endl;
cout<< "======================================================="<<endl;
	cout<< endl <<" Matriks A : "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << A[i][j] << " ";
		}
		cout<<endl;
	}
	cout << endl <<" Perkalian dengan eksponen 5 "<< endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			n=5;
			cout << pow(A[i][j],n) << " ";
		}
		cout<< endl;
	}
	system("PAUSE");
	return 0;
}
