#include<stdio.h>
void main()
{
    char strng[100];
    int state = 0;
    int table[4][2] = {1,0,2,1,-1,3,1,3};
    int i = 0;
    printf("Enter the String\n");
    scanf("%s", strng);
    while (strng[i] != '\0' && state != -1)
    {
        if(strng[i] != '0' && strng[i] != '1')
        {
            state = 5;
            break;
        }
        state = table[state][(strng[i]-'0')];
        i++;
        //printf(" %d",state);
    }
    if(state == 0 || state == 1 ||state == 3)
    {
        printf("\nValid String\n");
    }
    else
    {
        printf("\nInvalid String\n");
    }

}