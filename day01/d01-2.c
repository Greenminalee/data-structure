#include <stdio.h>
int cnt = 0;

void hanoi1(int n, int from, int by, int to){
    if (n == 1){
        cnt++;
    }
    else{
        cnt++;
        hanoi1(n - 1, from, to, by);
        hanoi1(n - 1, by, from, to);
    }
}

void hanoi2(int n, int from, int by, int to){
    if (n == 1){
        cnt++;
        printf("%d %d\n", from, to);
    }
    else{
        cnt++;
        hanoi2(n - 1, from, to, by);
        printf("%d %d\n", from, to);
        hanoi2(n - 1, by, from, to);
    }
}

int main(){
    int n = 0;
    scanf("%d", &n);
    hanoi1(n, 1, 2, 3);
    printf("%d\n", cnt);
    hanoi2(n, 1, 2, 3);

    return 0;
}