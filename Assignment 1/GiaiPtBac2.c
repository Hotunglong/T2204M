#include<math.h>
#include<stdio.h>
main()
{
    float a;
    printf("a, b, c: ");
    scanf("%f,&a");
    
    float b;
    printf("a, b, c: ");
    scanf("%f,&b");
    
    float c;
    printf("a, b, c: ");
    scanf("%f,&c");
    
    float d;
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem!");
                else
                    printf("Phuong trinh vo nghiem!");
            }
        else
            printf("%f",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("Phuong trinh vo nghiem!");
        else if (d==0)
            printf("%f",-b/(2*a));
        else
            printf("%f,%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
    }    
  
}
