#include<stdio.h>
void main()
{
    char strng[100];
    int state=0;
    int transition[3][3]={0,1,2,-1,1,2,-1,-1,2};
    int i=0;
    printf("Enter the string :\n");
    scanf("%s",strng);
    while(strng[i]!='\0')
    {
        if(strng[i]!='1' && strng[i]!='2' && strng[i]!='3')
        {
            state=-1;
            break;
        }
        state=transition[state][(strng[i]-'1')];
        i++;
        printf("%d",state);
    }
    if(state==0 || state==1 || state==2)
    printf("VALID STRING\n");
    else
    printf("INVALID STRING!\n");
} 
