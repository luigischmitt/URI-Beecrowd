#include <stdio.h>
 
int main() {
    
    
    double a, b, c;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(a >= (b + c) || b >= (a + c) || c >= (a + b)){
        printf("NAO FORMA TRIANGULO\n");
    } else if (a*a  == ((b*b) + (c*c)) || b*b  == ((c*c) + (a*a)) || c*c  == ((b*b) + (a*a))){
        printf("TRIANGULO RETANGULO\n");
    } else if (a*a  > ((b*b) + (c*c)) || b*b  > ((c*c) + (a*a)) || c*c  > ((b*b) + (a*a))){
        printf("TRIANGULO OBTUSANGULO\n");
    } else if(a*a < ((b*b) + (c*c)) || b*b  < ((c*c) + (a*a)) || c*c < ((b*b) + (a*a))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if(a == b && a == c){
        printf("TRIANGULO EQUILATERO\n");
    } 
    
    if((a == b && a != c ) || (b == c && b != a) || (c == a && a != b)){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}
