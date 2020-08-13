#include<stdio.h>
int main()
{
    char strng[100];
    int state=0;
    int i=0;
    printf("Enter the input string :\n");
    scanf("%s",strng);
    while(strng[i]!='\0')
    {
        if(strng[i]=='1'&&state==0)
        state=0;
        else if(strng[i]=='0'&&state==0)
        state=1;
        else if(strng[i]=='1'&&state==1)
        state=0;
        else if(strng[i]=='0'&&state==1)
        state=2;
        else if(strng[i]=='1'&&state==2)
        state=0;
        else if(strng[i]=='0'&&state==2)
        state=2;
        else
        state=3;
        i++;
    }
    if(state==2)
        printf("VALID STRING\n\n");
    else
        printf("INVALID STRING\n\n");
}
