#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
 
  int main (int argc, char *argv[])
{
  int matA [2][2]=  {4, 2, 8, 10};
  int matB [2][2]=  {-5, 8, 4, -12};
  
int j,i;
cout<< "======================================================="<<endl;
cout<< "              Penjumlahan Matriks 2x2"<<endl;
cout<< "======================================================="<<endl;
  cout<<endl<<"Matriks A"<<endl;
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
    cout<<matA[i] [j]<<" ";
}
cout<<endl;
}
  cout<<endl<<"Matriks B"<<endl;
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
    cout<<matB[i] [j]<<" ";
}
cout<<endl;
}
cout<<endl<<"Hasil penjumlahan Matriks A dan Matriks B "<<endl;
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
	cout<<matA[i][j]+matB[i][j]<<" ";
}
cout<<endl;
}
system ("PAUSE");

return 0;
}
