#include <conio.h>
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
 
  int main (int argc, char *argv[])
{
	int A[2][2]={4, 2, 8, 10},T[2][2];
cout<< "======================================================="<<endl;
cout<< "                Tranpose Matriks 2x2"<<endl;
cout<< "======================================================="<<endl;
	cout <<endl<<"matriks A : "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout << endl << "Transpose Matriks : "<< endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			T[j][i] = A[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << T[i][j]<<" ";
		}
		cout << endl;
	}
	system ("PAUSE");
	return 0;
}
