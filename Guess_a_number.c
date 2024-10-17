#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num,guess,nguess=1;
    srand(time(0));
   num=rand()%100+1;//generates a number between 1 to 100

    do{
         printf("guess a number:\n");
        scanf("%d",&guess);
        
        if (guess<num)
        {
            printf("enter Higher number\n");
        }
        else if (guess>num)
        {
            printf("enter lower number\n");
        }
        else{
            printf("your guess is came correct in %d attempts:\n",nguess);
        }
        nguess++;
        
        
    } while (guess=num);
    
    
    return 0;
}