//Average 3
#include<stdio.h>
main()
{
    double a, b, c, d, n, m=0;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    m = (a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1lf\n", m);
    if(m >= 7.0)
        printf("Aluno aprovado.\n");
    else if(m >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &n);
        printf("Nota do exame: %.1lf\n", n);
        if(n+m/2.0 >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", (n+m)/2);
    }

    else
        printf("Aluno reprovado.\n");
}
