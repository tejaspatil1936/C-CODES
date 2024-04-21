// #include <stdio.h>
// int main() 
// {
//     int i,j;
//     for(j=10;j>=0;j--)
//     {
//         for(i=5;i>=0;i--)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
    
// }

#include <stdio.h>
int main() 
{
    int i, j;
    for (j = 5; j >= 0; j--)
    {
        for (i = j; i >= 0; i--)

        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

/*#include <stdio.h>

int main() {
  int i = 0;
  int j = 1;
  while (i<3);
  {
  while (j<3)
  {printf("%d",j);
   j++;}
  printf("%d",i);
   i++;}
  return 0;
}*/ 