#include <stdio.h>
void hanoi(int n, char orig, char dest, char aux){
  if(n==1)
    printf("1 -> %c\n",dest);
  else{
    hanoi(n-1, orig, aux, dest);
    printf("%d -> %c\n",n,dest);
    hanoi(n-1, aux, dest, orig);
  }
}
int main(){
  int n;
  printf("Número de discos: ");
  scanf("%d",&n);
  hanoi(n, 'A', 'B', 'C');
  return 0;
}
