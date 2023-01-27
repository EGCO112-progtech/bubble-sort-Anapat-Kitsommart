//#define N 6
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

/*int main() {
  int a[N]={3,2,6,7,3,1};
  //int a[N]={1,2,3,4,5,6};
  int i,j,new_number;

  display(a,N);
  bubbleSort(a,N); 
   //insertion(a,N);

  // selectionSort(a,N);
   //display(a,N);
 return 0;
}*/

/*void main(int argc, char **argv){
    int i,*a,N;
    N=argc-1;
    a=(int*)malloc(sizeof(int)*N);
    for(i=0;i<N;i++){
        a[i]=atoi(argv[i+1]);
        printf("a[%d]=%d",i,a[i]);
    }

}*/

int main(int argc, char *argv[]){
    int i=0,*a,N=argc-1,j=0;
    a=(int*)malloc(sizeof(int)*N);
    int *prime=(int*)malloc(sizeof(int)*N);
    for(i=0;i<N;i++){
        a[i]=atoi(argv[i+1]);
        if(Isprime(a[i])){
            prime[j]=a[i];
            j++;
        }
    }
    N=j;
    if(N==0) printf("No Prime\n");
    else{
    display(prime,N);
    bubbleSort(prime,N);
    display(prime,N);
    }
return 0;
}
