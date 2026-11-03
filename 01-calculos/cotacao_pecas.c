# include <stdio.h>

int main()
{
int peca1, n1, peca2, n2;
float v1, v2, total; 

scanf("%d", &peca1);
scanf("%d", &n1);
scanf("%f", &v1);  

scanf("%d", &peca2);
scanf("%d", &n2);
scanf("%f", &v2);  

total = v1*n1 + v2*n2;
printf("Valor a pagar: R$ %.2f", total );
return 0;
}
