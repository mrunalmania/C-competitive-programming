#include <stdio.h>
#include <stdlib.h>
int main(){
int a[5][2] = {{1,0}, {4,2}, {2,4}, {8,6},{4,8}};
int temp=0;
int i=0;
int j=0;

for(int y=0; y<2; y++)
    {
    for(int x=0; x<5;x++)
        {

        if(a[x][y] < a[0][y])
            {
                temp=a[x][y];
                a[0][0]=a[x][y];
                a[0][0]=temp;

            }
        }
    }

   for ( i = 0; i < 5; i++ )
   {
      for ( j = 0; j < 2; j++ )
      {
         printf("a[%d][%d] = %d\n", i,j, a[i][j] );
      }
   }
return 0;}
