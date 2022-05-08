#include <stdio.h>
 
int main() {
 
    int l, i, j;
    char a;
    double m[12][12], s;
    
    scanf("%i", &l);
    scanf(" %c", &a);
    
    for (i = 0; i < 12; i++) {
    
        for (j = 0; j < 12; j++) {
            
            scanf("%lf", &m[i][j]);
            
            if (i == l)
                s += m[l][j];

        }
    }
    if (a == 'M')
        s /= 12;
    
    printf("%.1f\n", s);
 
    return 0;
}
