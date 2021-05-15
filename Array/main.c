#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    char p[N][N];
    int x,y,gen,i,a;
    int count[N][N];

    for(x=0; x<N; x++){
        for(y=0; y<N; y++){
            scanf("%c", &p[x][y]);
            if(p[x][y]=='\n') y--;
        }
    }

    scanf("%d", &gen);

    for(a=1, i=0; i<gen; i++, a++){
     for(x=0; x<N; x++){
        for(y=0; y<N; y++){
            if(p[x][y]=='H'){
                if((p[x-1][y]=='I' && count[x-1][y]!=a) || (p[x+1][y]=='I'&& count[x+1][y]!=a) || (p[x][y-1]=='I'&& count[x][y-1]!=a)|| (p[x][y+1]=='I'&& count[x][y+1]!=a) ){
                    p[x][y]='I';
                    count[x][y]=a;
                }
            }
        }
    }
    }


    for(x=0; x<N; x++){
        for(y=0; y<N; y++){
            printf("%c", p[x][y]);}
            printf("\n");
    }


    return 0;
}
