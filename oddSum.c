#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    while (i<=121)
    {
      sum+=i;
      i+=2;
    }
    printf("%d",sum);

    return 0;
    
}