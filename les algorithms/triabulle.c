#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int num[]={34, 7, 23, 88, 12, 56, 91, 5, 42, 67, 
 81, 38, 17, 73, 4, 99, 61, 26, 14, 53, 
 85, 30, 59, 19, 11, 78, 2, 45, 92, 66, 
 1, 93, 37, 68, 49, 10, 87, 29, 6, 54, 
 89, 40, 21, 77, 36, 95, 25, 69, 50, 15, 
 62, 3, 94, 33, 8, 75, 20, 82, 27, 47, 
 55, 13, 97, 31, 46, 9, 63, 18, 71, 84, 
 41, 79, 32, 57, 96, 24, 52, 76, 64, 39, 
 86, 58, 16, 90, 28, 48, 72, 35, 98, 43, 
 83, 65, 22, 60, 74, 70, 44, 100, 80, 51
};
int main(){
    printf("before: \n");
     for (int i = 0; i < 100; i++)
   {
    printf("%d\n",num[i]);
   }

   for (int i = 0; i < 100; i++)
   {
    int stop = 0;
    for (int j = 0; j < 100-i; j++)
    {
        
        if (num[j+1]<num[j])
        {
          int tmp = num[j];
          num[j] = num[j+1];
          num[j+1] = tmp;
        stop = 1;
        }
        
        
    }
    if (stop == 0)
        {
            break;
        }
    
   }
   printf("after: \n");
   for (int i = 0; i < 100; i++)
   {
    printf("%d\n",num[i]);
   }
   

}

