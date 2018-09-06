#include <stdio.h>

int main(void) {
  int n, m, c, x;

  scanf("%d", &n);

  int lista[101][102];

  while(n--){
    scanf("%d %d", &m, &c);

    for(int i = 0; i < c; i++){
        scanf("%d", &x);
        lista[x%m][i] = x;
    }
    
     
  }


  return 0;
}
