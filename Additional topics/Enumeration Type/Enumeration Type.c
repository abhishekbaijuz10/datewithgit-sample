#include<stdio.h>

enum suit{
club=0,
diamonds=21,
hearts=3,
spades=77
}card;

int main()
{
    card=club;
    printf("Size is = %d",sizeof(card));
    return 0;
}
