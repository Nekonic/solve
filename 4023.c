#include <stdio.h>
int visit[19][19]={};
int arr[19][19]={};
void DFS(int i,int j,int sumw,int sumb){
    if(i<0||j<0||i>18||j>18||visit[i][j]==1)return;
    visit[i][j]=1;
    printf("dfs[%d %d]\n",i,j);
    if(arr[i][j]==1)sumw++;
    else if(arr[i][j]==2)sumb--;
    for(int ii=i;ii<i+5;ii++){
        DFS(ii,j,sumw,sumb);
    }
    for(int jj=j;jj<j+5;jj++){
        DFS(i,jj,sumw,sumb);
    }
    for(int ii=i;ii<i+5;ii++){
        DFS(ii,j+ii,sumw,sumb);
    }
    for(int jj=j;jj<j+5;jj++){
        DFS(i+jj,jj,sumw,sumb);
    }
    if(sumw==5)printf("%d",1);
    else if(sumb==-5)printf("%d",1);
    return;
}
int main(){
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    DFS(0,0,0,0);
}