#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

void divisor(){
cout<<"------------------------"<<endl;
}
void leitura (int n, int vetor[]){
int i;
for(i=0; i<n; i++){
cout<<"\n Digite o numero "<<i+1<<" : ";
cin>>vetor[i];
}
}
int main(){
setlocale(LC_ALL, "");
int n, *vetor, i;
cout<<"\nDigite o tamanho do vetor: ";
cin>>n;
divisor();
vetor=(int *) malloc(n*sizeof(int));
leitura(n,vetor);
divisor();
cout<<"\nValores do vetor:\n";
for(i=0; i<n; i++){
cout<<vetor[i]<<endl;
}
free(vetor);
return 0;
}
