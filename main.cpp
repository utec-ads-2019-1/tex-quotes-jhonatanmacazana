#include <stdio.h>

using namespace std;

/*
0x22    ->      "
*/
int main()
{
    char ch;
    int count;

    while(scanf("%c", &ch) > 0)
    {
        if(ch == 0x22)
        {
            count ++;
            if (count%2){printf("``");}
            else {printf("''");}
        }
        else
        {
            printf("%c", ch);
        }
    }
    return 0;
}
