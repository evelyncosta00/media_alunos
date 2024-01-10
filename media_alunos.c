/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int n1;
    int n2;
    int n3;
    int media1;
    int media2;
    int soma1;
    int soma2;
    
   
    printf("Primeira nota");
    scanf("%d",&n1);
    printf("Segunda nota");
    scanf("%d",&n2);
  
    if (n1+n2 < 14) {
    printf("Terceira nota");
    scanf("%d",&n3);
    media2 = ((n1+n2+n3)/3);
  //  soma2 = (media1 +n3);
  //  media2= (soma2/2);
    if (media2 >=9) 
    {
        printf("A nota do aluna é A");
    }
     if (media2 >=7.5)
    {
        printf("A nota do aluna é B");
    }
     if(media2 >=6)
    {
        printf("A nota do aluna é C");
    }
   if (media2 >=4)
    {
        printf("A nota do aluna é D");
    }
    
    }
    
    soma1 = (n1+n2);
   
    media1 = (soma1/2);
    media2= (soma2/2);
   
    if (media1 >=9) 
    {
        printf("A nota do aluna é A");
    }
     
    if (media1 >=7.5)
    
    {
        printf("A nota do aluna é B");
    }
    if (media1 >=6) 
    {
        printf("A nota do aluna é C");
    }   
    if (media1 >=4) 
    {
        printf("A nota do aluna é D");
    
    }
    if(media1<4) 
      {
        printf("A nota do aluna é E");
    }
    
   
  //  printf("nota 1 = %d",n2);

    return 0;
}
