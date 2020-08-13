#include<stdio.h>
void main()
{
    char strng[100];
    int val,state=0;
    int transition[4][3]={1,0,0,1,2,0,1,0,3,3,3,3};
    int i=0;
    printf("Enter the string :\n");
    scanf("%s",strng);
    while(strng[i]!='\0')
    {
        if(strng[i]!='a' && strng[i]!='b' && strng[i]!='c')
        {
            state=-1;
            break;
        }
              
        state=transition[state][(strng[i]-'a')];
        i++;
        //printf("%d",state);
    }
    if(state==3)
    printf("VALID STRING\n");
    else
    printf("INVALID STRING!\n");
} 
