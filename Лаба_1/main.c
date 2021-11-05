#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1,x2,delta,x3;
    unsigned int z=1,N;
    unsigned char A;
    printf("Choise your variant: \n");
    scanf("%c",&A);

    if(A=='1')
    {
    //1
    printf("x1: \n");
    scanf("%lf",&x1);

    printf("x2 : \n");
    scanf("%lf",&x2);

    printf("N : \n");
    scanf("%d",&N);

    printf("x1: %.2lf\nx2: %.2lf\nN: %d\n",x1,x2,N );
    printf("**********************************\n");
    printf("\t* N * X * F(X) *\t\n");
    printf("**********************************\n");

    for(z; z<=N; z++)
      {
        x3=x1*8;
        //my function F(x)=x1*8
        printf("\t| %d| %.2lf| %.2lf|\t\n",z,x1,x3);
        printf("+----------+----------+----------+\n");
        x1++;
      }
    }
   else if(A=='2')
   {
    //2
    printf("\nx1 : ");
    scanf("%lf",&x1);

    printf("\nx2 : ");
    scanf("%lf",&x2);

    printf("\ndelta : ");
    scanf("%lf",&delta);

    printf("Start: %.2lf\nFinish: %.2lf\nStep: %.2lf\n", x1,x2,delta );
    printf("**********************************\n");
    printf("\t* N * X * F(X) *\t\n");
    printf("**********************************\n");



    for(z; z<=x2; z++)
    {
        x3=x1*8;
        //my function F(x)=x1*8
        printf("\t| %d| %.2lf| %.2lf|\t\n",z,x1,x3);
        printf("+----------+----------+----------+\n");
        x1=x1+delta;
    }
   }
    return 0;
}
