#include <stdio.h>

int main(void) {
  int n, m, c, x;

  scanf("%d", &n);

  int matriz[101][201];

  while(n--){
    scanf("%d %d", &m, &c);
    for(int i = 0; i < c; i++){
        scanf("%d", &x);
        matriz[x%m][i] = x;
    }
  }
  
  for(int i = 0; i < m; i++){
    printf("%d ->", i);
    for(int j = 0; j < n; j++){
      if(matriz[i][j]!=0){
        printf(" %d ->", matriz[i][j]);
        matriz[i][j]=0; 
      }
    }
  printf(" \\\n");
}

printf("\n");
return 0;
}    
