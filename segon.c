#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, discriminant;
    double rel;
    printf("Coeficient a: ");
    scanf("%d", &a);
    printf("Coeficient b: ");
    scanf("%d", &b);
    printf("Coeficient c: ");
    scanf("%d", &c);

    if(a == 0) printf("No és una equació de 2n grau\n");
    else{
        discriminant=(b*b)-(4*a*c);
        if(discriminant<0) printf("No existix solució real\n");
        if(discriminant=0) printf("Tenim una solució doble i és: %d",(-1*b)/(2*a));
        if(discriminant>0)
        {
            rel = sqrt(discriminant;
            printf("Tenim dues solucions: %d i %d", ((-1*b)+rel)/(2*a),
        ((-1*b)-rel)/(2*a));
        }
    }

return 0;
}
