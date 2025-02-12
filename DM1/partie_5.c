#include <stdio.h>

int main() {
    unsigned int m1, m2, m3, m4, cidr = 0;

    // Demande à l'utilisateur d'entrer le masque de sous-réseau
    printf("Saisir un masque de sous-réseau: ");
    scanf("%u.%u.%u.%u", &m1, &m2, &m3, &m4);

    // Fonction pour compter les bits à 1 (méthode simple avec une boucle)
    unsigned int masques[4] = {m1, m2, m3, m4};
    for (int i = 0; i < 4; i++) {
        unsigned int val = masques[i];
        while (val > 0) {
            cidr += val & 1;  // Vérifie si le dernier bit est 1
            val >>= 1;        // Décale les bits vers la droite
        }
    }

    // Affichage du CIDR
    printf("CIDR: /%u\n", cidr);

    return 0;
}
