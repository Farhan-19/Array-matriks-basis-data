#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
 
  int main (int argc, char *argv[])
{
  int matA [2][2]=  {4, 2, 8, 10};
  int matB [2][2]=  {-5, 8, 4, -12};
  int C [2][2];
int j,i;
cout<< "======================================================="<<endl;
cout<< "              Perkalian Matriks Bersyarat"<<endl;
cout<< "======================================================="<<endl;
  cout<<endl<<"Matriks A"<<endl;
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
    cout<<" "<<matA[i] [j]<<" ";
}
cout<<endl;
}
  cout<<endl<<"Matriks B"<<endl;
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
    cout<<" "<<matB[i] [j]<<" ";
}
cout<<endl;
}
cout<<endl<<"Hasil perkalian Matriks A dan Matriks B "<<endl;
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
// kalibrasi Kuadran 1												kalibrasi kuadran 2
    C[0][0] = matA[0][0] * matB [0][0] + matA[0][1] * matB[1][0]; C[0][1] = matA[0][0] * matB [0][1] + matA[0][1] * matB[1][1];
// kalibrasi kuadran 3												kalibrasi kuadran 4
    C[1][0] = matA[1][0] * matB [0][0] + matA[1][1] * matB[1][0]; C[1][1] = matA[1][0] * matB [0][1] + matA[1][1] * matB[1][1];
	cout<<" "<<C[i][j]<<" ";
}
cout<<endl;
}
system ("PAUSE");

return 0;
}
