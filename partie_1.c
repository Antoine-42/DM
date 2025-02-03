#include <stdio.h>

int main(void) {
    int ip_1;
    int ip_2;
    int ip_3;
    int ip_4;
    
    printf("Saisir une adresse IP: ");
    if (scanf("%d.%d.%d.%d", &ip_1, &ip_2, &ip_3, &ip_4) != 4 ||
        ip_1 < 0 || ip_1 > 255 ||
        ip_2 < 0 || ip_2 > 255 ||
        ip_3 < 0 || ip_3 > 255 ||
        ip_4 < 0 || ip_4 > 255) {
        printf("Erreur saisie incorrecte\n");
        return 1;
    }
    
    printf("adresse IP (32 bits): %u\n", (ip_1 << 24) | (ip_2 << 16) | (ip_3 << 8) | ip_4);
    return 0;
}
