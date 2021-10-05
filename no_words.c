/* numbers to word*/
#include<stdio.h>
main()
{
    char n[100];
    int i=0;
    while((n[i]=getchar())!='\n')
    {
        if(!isdigit(n[i]))
            {
                n[i]='\0';
                break;
            }
        i++;
    }

    if(n[i]=='\n')
        n[i]='\0';

    for(i=0;n[i]!='\0';i++)
    {
        switch(n[i])
        {
             case '0': printf(" ZERO ");
                       break;
             case '1': printf(" ONE ");
                       break;
             case '2': printf(" TWO ");
                       break;
             case '3': printf(" THREE ");
                       break;
             case '4': printf(" FOUR ");
                       break;
             case '5': printf(" FIVE ");
                       break;
             case '6': printf(" SIX ");
                       break;
             case '7': printf(" SEVEN ");
                       break;
             case '8': printf(" EIGHT ");
                       break;
             case '9': printf(" NINE ");
                       break;
        }
    }

}
