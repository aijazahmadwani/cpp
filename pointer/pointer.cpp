/*
Author : AIJAZ AHMAD WANI
email : aijazahmad9864@gmail.com
Date : 3/4/2019 */
/*program to read two integers (a,b)
set "a" sum of a and b and
set "b" as absolute diference between a and b */
#include <stdio.h>

void update(int *a,int *b) {
   int sum;
    sum = *a + *b;
   *b = *a - *b;
   if(*b<0)
   {
      *b =(*b)*(-1);
   }
   *a = sum;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
