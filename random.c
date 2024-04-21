#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discriminant, root1, root2;

        printf("enter coefficient of a:");
        scanf("%f",&a);
        printf("enter coefficient of b:");
        scanf("%f",&b);
        printf("enter coefficient of c:");
        scanf("%f",&c);
  
    discriminant = b*b - 4*a*c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("The roots are real and unequal \n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b/(2*a);
        printf("The roots are real and equal \n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        printf("The roots are unreal \n");
        printf("Root 1 = %.2f + %.2fi\n", -b/(2*a), sqrt(-discriminant)/(2*a));
        printf("Root 2 = %.2f - %.2fi\n", -b/(2*a), sqrt(-discriminant)/(2*a));
    }
    return 0;
}

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);

	while(t--)
	{
	    float N, a, b, P;
	    scanf("%f", &N);

	    a = N*50;
	    b = 0.7*a;
	    P = a - b;

	   printf("%f",P);
	}
	return 0;
}

WAP to read multidimentional matrix and print sum of it

#include<stdio.h>
int main()
{
    int a[3][4];
    int i, j, s=0;

    printf("Enter the matrix: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            s += a[i][j];
        }
    }
    printf("The sum of matrix is %d\n", s);

    return 0;
}

#include <stdio.h>
int main() {
int a,b,c;
printf("enter");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{printf("a\n");}
if(b>c && b>a)
{printf("b\n");}
if(c>a && c>b)
{printf("c\n");}

  return 0;
}

#include <stdio.h>
int main()
{

    int n,s=0;

    do
    {
        printf("Enter any num: ");
        scanf("%d", &n);
        s += n;
        }

    while (n != 0);
    printf("sum = %d", s);
    return 0;
}

#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        if (x % z == 0 && y % z == 0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}



#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i = 0;
	scanf("%d",&t);
	while (i < t)
	{
	    int a,b,c,x,y;
	    scanf("%d %d %d %d", &a ,&b ,&x ,&y);
	    if (a=b)
	    {
	        printf("yes\n");
	    }
	    else if(a>b && y>a-b)
	    {
	        printf("yes\n");
	    }
	    else if(a<b && x>a-b)
	    {
	        printf("yes\n");
	    }
	    else 
	    {
	        printf("no\n");
	    }
	    i++;
	}
	
	return 0;
}

