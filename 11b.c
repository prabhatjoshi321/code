#include<stdio.h>

int a[10][10], s[10], n;


void dfs(int u){
    s[u]=1;
    printf("%d",u);
    for(int v=0; v<n; v++){
        if(a[u][v]==1 && s[v]==0)
            dfs(v);
    }
}

void main(){
    int source;
    printf("Enter the number of nodes in the graph:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:");

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(source=0; source<n; source++){
        for(i=0; i<n; i++)
            s[i]=0;
        printf("The nodes reachable from %d", source);
        dfs(source);
    }
}
