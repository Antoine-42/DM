#include  <stdio.h>

int main() {
    unsigned int ip1, ip2, ip3, ip4, m1, m2, m3, m4;


    printf("Saisir une adresse IP: "); scanf("%u.%u.%u.%u", &ip1, &ip2, &ip3, &ip4);

    printf("Saisir un masque de sous-réseau: "); scanf("%u.%u.%u.%u", &m1, &m2, &m3, &m4);

    printf("Adresse broadcast: %u.%u.%u.%u\n", (ip1 & m1) | (~m1 & 255), (ip2 & m2) | (~m2 & 255), (ip3 & m3) | (~m3 & 255), (ip4 & m4) | (~m4 & 255));

    return 0;
}
