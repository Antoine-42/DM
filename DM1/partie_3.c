
#include <stdio.h>

int main() {
    unsigned int ip1, ip2, ip3, ip4;
    unsigned int m1, m2, m3, m4;

    // Demande à l'utilisateur d'entrer l'IP et le masque
    printf("Saisir une adresse IP: ");
    scanf("%u.%u.%u.%u", &ip1, &ip2, &ip3, &ip4);

    printf("Saisir un masque de sous-réseau: ");
    scanf("%u.%u.%u.%u", &m1, &m2, &m3, &m4);

    // Calcul de l'adresse réseau
    printf("Adresse réseau: %u.%u.%u.%u\n", ip1 & m1, ip2 & m2, ip3 & m3, ip4 & m4);

    return 0;
}
