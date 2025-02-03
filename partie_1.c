#include <stdio.h>

int main(void) {
    int ip_1;
    int ip_2;
    int ip_3;
    int ip_4;
    
       printf("Saisir une adresse IP: ");
       scanf("%d.%d.%d.%d", &ip_1, &ip_2, &ip_3, &ip_4);
   
    
    printf("adresse IP (32 bits): %u\n", (ip_1<< 24) | (ip_2<< 16) | (ip_3<< 8) | ip_4);
    return 0;
}