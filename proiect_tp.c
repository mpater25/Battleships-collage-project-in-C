#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 15

void scriere(int (*m)[SIZE])
{
    for(int i=0; i<SIZE; i++){
    for(int j=0; j<SIZE; j++){
    printf("%d ", m[i][j]);
}
printf("\n");
}

}

int collide(int (*m)[SIZE], int x, int y, int h, int w) {
    for (int i = x; i < x + h; i++) {
        for (int j = y; j < y + w; j++) {
            if (m[i][j] == 1) {
                return 1; 
            }
        }
    }
    return 0; 
}

void port_avion(int (*m)[SIZE])
{
    int x,y;
    int cnt=0;
    char s[15];
    while(cnt<1)
    {
        printf("alegeti coltul din drpt sus al port avionului\n");
        scanf("%d %d", &x, &y);
        printf("alegeti daca nava e verticala sau orizontala(orizontal/vertical)\n");
        scanf("%s", s);
        
        if(strcmp(s, "vertical")==0 && (x>9 || y>12))
        {
            printf("nava iese din matrice");
            continue;
        }
        
        if(strcmp(s, "orizontal")==0 && (x>12 || y>9))
        {
            printf("nava iese din matrice");
            continue;
        }

        

        if(strcmp(s, "vertical")==0){
            if(collide(m, x, y, 5, 2))
            {
                printf("nava e peste alta nava/n");
                continue;
            }
        for(int i=x; i<x+5; i++)
        {
            for(int j=y; j<y+2; j++)
            m[i][j]=1;
        }
        scriere(m);
    }
    if(strcmp(s, "orizontal")==0){
        if(collide(m,x,y,2,5))
        {
            printf("nava e pusa peste alta nava\n");
            continue;

        }
        for(int i=x; i<x+2; i++)
        for(int j=y; j<y+5; j++)
        m[i][j]=1;
        scriere(m);
    }
    cnt++;
    }
    
}

void cruiser(int (*m)[SIZE])
{
    char s[20];
    int x,y;
    int cnt=0;
    while(cnt<1)
    {
        printf("alegeti coltul drpt sus al cruiserului");
        scanf("%d %d", &x, &y);
        
        
    
        printf("alegeti daca nava e verticala sau orizontala(orizontal/vertical)\n");
        scanf("%s", s);

        if(strcmp(s, "vertical")==0 && (x>10 || y>13))
        {
            printf("nava iese din matrice\n");
            continue;
        }

        if(strcmp(s, "orizontal")==0 && (x>12 || y>10))
        {
            printf("nava iese din matrice\n");
            continue;
        }
        
        if(strcmp(s, "vertical")==0){
            if(collide(m,x,y,4,2))
            {
                printf("nava e pusa peste alta nava\n");
                continue;
            }
        for(int i=x; i<x+4; i++)
        {
            for(int j=y; j<y+2; j++)
            m[i][j]=1;
        }
        scriere(m);
        
    }
    if(strcmp(s, "orizontal")==0){
        if(collide(m, x,y,2,4))
        {
            printf("nava e pusa peste alta nava\n");
            continue;
        }
        for(int i=x; i<x+2; i++)
        for(int j=y; j<y+4; j++)
        m[i][j]=1;
        
        scriere(m);
        

    }

cnt++;
}
}

void fighter(int (*m)[SIZE])
{
    char s[20];
    int x,y;
    int cnt=0;
    while(cnt<2)
    {
        printf("alegeti coltul drpt sus al fighterului");
        scanf("%d %d", &x,&y);
        
        
    
        printf("alegeti daca nava e verticala sau orizontala(orizontal/vertical)\n");
        scanf("%s", s);
        
        if(strcmp(s, "vertical")==0 && (x>12 || y>13)){
            printf("nava iese din matrice\n");
            continue;
        }
        if(strcmp(s, "orizontal")==0 && (x>13 || y>12)){
            printf("nava iese din matrice\n");
            continue;
        }
        if(strcmp(s, "vertical")==0){
            if(collide(m,x,y,3,2))
            {
                printf("nava e pusa peste alta nava\n");
                continue;
            }
        for(int i=x; i<x+3; i++)
        {
            for(int j=y; j<y+2; j++)
            m[i][j]=1;
        }
        scriere(m);
    }
    if(strcmp(s, "orizontal")==0){
        if(collide(m,x,y,2,3))
        {
            printf("nava e pusa peste alta nava\n");
            continue;

        }
        for(int i=x; i<x+2; i++)
        for(int j=y; j<y+3; j++)
        m[i][j]=1;
        
        
        scriere(m);

    }

cnt++;
}
}

void destroyer(int (*m)[SIZE])
{
    int x,y;
    int cnt=0;
    while(cnt<3)
    {
        printf("alegeti coltul drpt sus al destroyerului");
        scanf("%d %d", &x,&y);
        if(x>13 || y>13){
            printf("nava iese din matrice\n");
        
            continue;
        }
        if(collide(m,x,y,2,2))
        {
            printf("nava e pusa peste alta nava\n");
            continue;
        }
        for(int i=x; i<x+2; i++)
        {
            for(int j=y; j<y+2; j++)
            m[i][j]=1;
        }
        
        scriere(m);
    
        cnt++;
    }
}

void submarin(int (*m)[SIZE])
{
    char s[20];
    int x,y;
    int cnt=0;
    while(cnt<4)
    {
        printf("alegeti coltul drpt sus al submarinului");
        scanf("%d %d", &x,&y);
    
        printf("alegeti daca nava e verticala sau orizontala(orizontal/vertical)\n");
        scanf("%s", s);

        if(strcmp(s,"vertical")==0 && x>13){
            printf("nava iese din matrice\n");
        
            continue;
        }
        if(strcmp(s, "orizontal")==0 && y>13){
            printf("nava iese din matrice\n");
        
            continue;
        }
        
        if(strcmp(s, "vertical")==0){
            if(collide(m,x,y,2,1))
            {
                printf("nava e pusa peste alta nava\n");
                continue;
            }
        for(int i=x; i<x+2; i++)
        {
            m[i][y]=1;
        }
        scriere(m);
    }
    if(strcmp(s, "orizontal")==0){
        if(collide(m,x,y,1,2))
        {
            printf("nava e pusa peste alta nava\n");
            continue;

        }
        for(int j=y; j<y+2; j++)
        m[x][j]=1;
        
        
        scriere(m);

    }

cnt++;
}
}

void port_avion_bot(int (*m)[SIZE])
{
    int x,y;
    int cnt=0;
    int s;
    while(cnt<1)
    {
        x=rand()%15;
        y=rand()%15;
        s=rand()%2;
        
        if(x>14  || x<0 || y>14 || y<0 || s>1 || s<0)
            continue;

            if(s==1 && (x>10 || y>13))
            {
                
                continue;
            }
    
            if(s==0 && (x>13 || y>10))
            {
                
                continue;
            }

        if(s==1){
            if(collide(m, x, y, 5, 2))
            {
                
                continue;
            }
        for(int i=x; i<x+5; i++)
        {
            for(int j=y; j<y+2; j++)
            m[i][j]=1;
        }
        
    }
    if(s==0){
        if(collide(m,x,y,2,5))
        {
            
            continue;

        }
        for(int i=x; i<x+2; i++)
        for(int j=y; j<y+5; j++)
        m[i][j]=1;
        
    }
    cnt++;
    }
    
}

void cruiser_bot(int (*m)[SIZE])
{
    int s;
    int x,y;
    int cnt=0;
    while(cnt<1)
    {
        x=rand()%15;
        y=rand()%15;
        s=rand()%2;
        
        if(x>14  || x<0 || y>14 || y<0 || s>1 || s<0)
            continue;

        if(s==1 && (x>11 || y>13))
        {
            
            continue;
        }

        if(s==0 && (x>13 || y>11))
        {
           
            continue;
        }
        
        if(s==1){
            if(collide(m,x,y,4,2))
            {
                
                continue;
            }
        for(int i=x; i<x+4; i++)
        {
            for(int j=y; j<y+2; j++)
            m[i][j]=1;
        }
       
        
    }
    if(s==0){
        if(collide(m, x,y,2,4))
        {
            
            continue;
        }
        for(int i=x; i<x+2; i++)
        for(int j=y; j<y+4; j++)
        m[i][j]=1;
        
        
        

    }

cnt++;
}
}

void fighter_bot(int (*m)[SIZE])
{
    int s;
    int x,y;
    int cnt=0;
    while(cnt<2)
    {
        x=rand()%15;
        y=rand()%15;
        s=rand()%2;
        
        if(x>14  || x<0 || y>14 || y<0 || s>1 || s<0)
            continue;

        if(s==1 && (x>12 || y>13))
        {
            
            continue;
        }

        if(s==0 && (x>13 || y>12))
        {
           
            continue;
        }
        
        if(s==1){
            if(collide(m,x,y,3,2))
            {
                
                continue;
            }
        for(int i=x; i<x+3; i++)
        {
            for(int j=y; j<y+2; j++)
            m[i][j]=1;
        }
        
    }
    if(s==0){
        if(collide(m,x,y,2,3))
        {
            
            continue;

        }
        for(int i=x; i<x+2; i++)
        for(int j=y; j<y+3; j++)
        m[i][j]=1;
        
        
        

    }

cnt++;
}
}

void destroyer_bot(int (*m)[SIZE])
{
    int x,y;
    int cnt=0;
    while(cnt<3)
    {
        x=rand()%15;
        y=rand()%15;
        
        
        if(x>14  || x<0 || y>14 || y<0)
            continue;

        if(x>13 || y>13)
        {
            
            continue;
        }

        if(collide(m,x,y,2,2))
        {
            
            continue;
        }
        for(int i=x; i<x+2; i++)
        {
            for(int j=y; j<y+2; j++)
            m[i][j]=1;
        }
        
        
    
        cnt++;
    }
}

void submarin_bot(int (*m)[SIZE])
{
    int s;
    int x,y;
    int cnt=0;
    while(cnt<4)
    {
        x=rand()%15;
        y=rand()%15;
        s=rand()%2;
        
        if(x>14  || x<0 || y>14 || y<0 || s>1 || s<0)
            continue;

        if(s==1 && (x>13 || y>14))
        {
            
            continue;
        }

        if(s==0 && (x>14 || y>12))
        {
           
            continue;
        }
        
        if(s==1){
            if(collide(m,x,y,2,1))
            {
                
                continue;
            }
        for(int i=x; i<x+2; i++)
        {
            m[i][y]=1;
        }
        
    }
    if(s==0){
        if(collide(m,x,y,1,2))
        {
            
            continue;

        }
        for(int j=y; j<y+2; j++)
        m[x][j]=1;
        
        
        

    }

cnt++;
}
}

void playphase_1p(int (*m)[SIZE], int (*m2)[SIZE])
{
    int ok=1;
    int ok2=1;
    int x,y,x2,y2;
    int hit=0;
    int tohit, tohit2;
    while(ok || ok2)
    {
        ok=0;
        ok2=0;
        printf("alegeti coordonatele pentru obuze\n");
        scanf("%d %d", &x, &y);
        if(hit==0)
        {
            x2=rand()%15;
            y2=rand()%15;
        }
        tohit=rand()%2;
        tohit2=rand()%2;
        if(m2[x][y]==0)
            printf("miss\n");
        else {
            m2[x][y]=0;
            printf("hit!\n");
             }
        if(hit==0)
        {     
        if(m[x2][y2]==1)
        {
            m[x2][y2]=0;
            hit=1;
        }
        else
            hit=0;
        }
        if(hit==1)
        {
            if(m[x2+tohit][y2+tohit2]==1)
            {
                m[x2+tohit][y2+tohit2]=0;
                hit=1;
            }
            else
                hit=0; 
        }    
        for(int i=0; i<14; i++)
            for(int j=0; j<14; j++)
                if(m[i][j]==1)
                    ok=1;
        for(int i=0; i<14; i++)
            for(int j=0; j<14; j++)
                if(m2[i][j]==1)
                    ok2=1;               
        scriere(m);     
    }
    if(ok==0 && ok2==0)
        printf("draw :/\n");
    else
    {   if(ok==0)
            printf("ai pierdut :(\n");
        if(ok2==0)
            printf("ai castigat!!!!!!!!!!\n");  
    }          
}

int main()
{
    srand(time(NULL));
    int m[SIZE][SIZE];
    int m2[SIZE][SIZE];
    char gamemode[20];
    int x,y;
    int ok=1;
    int cnt=0;
    printf("matricea de joc este:\n");
for(int i=0; i<SIZE; i++){
    for(int j=0; j<SIZE; j++){
        m[i][j]=0;
        printf("%d ", m[i][j]);
    }
    printf("\n");
}

for(int i=0; i<15; i++)
    for(int j=0; j<15; j++)
        m2[i][j]=0;

printf("alegeti gamemode-ul:single-player\n");
scanf("%s", gamemode);

if(strcmp(gamemode, "single-player")==0)
{
printf("alegeti unde va asezati navele\n");
port_avion(m);

cruiser(m);

fighter(m);

destroyer(m);

submarin(m);


printf("botul isi va alege navele\n");

port_avion_bot(m2);

cruiser_bot(m2);

fighter_bot(m2);

destroyer_bot(m2);

submarin_bot(m2);

scriere(m2);

playphase_1p(m,m2);

}
return  0;
}