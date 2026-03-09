#include<stdio.h>
int main(){
   int h, m, s, h2, m2, s2, dh, dm, ds;
   int sh, sm, ss;
   printf("digite horario inicial: ");
   scanf("%d:%d:%d", &h, &m, &s);
   printf("digite horario final: ");
   scanf("%d:%d:%d", &h2, &m2, &s2);
    dh = h2 - h;
    dm = m - m2;
    ds = s - s2;
    printf("duracao foi de: %d:%d:%d", dh, dm, ds);
    sh = dh * 3600;
    sm = dm * 60;
    ss = ds + sm + sh;


    printf("duracao em segundos = %d", ss);


return 0;
}