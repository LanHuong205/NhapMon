#include <stdio.h>

int main() {
    int N;
    int sum = 0;
    
   
    printf("Nhap N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        int num = i * 10 + i;  
        sum += num;
    }
	 
    printf("S = %d\n", sum);

    return 0;
}
 
