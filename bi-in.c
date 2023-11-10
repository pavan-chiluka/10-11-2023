#include<stdio.h>
int main()
{
        int n=5,i;
        for(i=7;i>=0;i--)
        {
        printf("%d",(n>>i)&1);
        }
        printf("\n");
        int choice,bit1,bit2;
        printf("1:set,2:clear,3:toggle");
        scanf("%d%d%d",&choice,&bit1,&bit2);
        switch(choice)
        {
        case 1:printf("%d after set ",(n|(1<<bit1)|(1<<bit2)));
               break;

        case 2:printf("%d after clear",(n&~(1<<bit1)|(1<<bit2)));
               break;

        case 3:printf("%d after toggle",(n^(1<<bit1)|(1<<bit2)));
               break;
        }
}
                  
