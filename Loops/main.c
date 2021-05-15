#include <stdio.h>

int main()
{
    int w, tot, ship;

    w=0;
    tot=0;
    ship=0;

    while (1){
        scanf("%d", &w);
        if(w==-1 && tot!=0){
                ship++;
                break;
                }
        else if(w==-1){
                break;
                }
        tot=tot+w;
        if(tot==50){
                ship++;
                tot=0;
                }
        if(tot>50){
                ship++;
                tot=w;
                }
        }

    printf("%d", ship);
    return 0;
}
