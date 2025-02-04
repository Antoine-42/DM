#include <stdio.h>

int main(void) {
    int masque_1, masque_2, masque_3, masque_4;
    unsigned int masque;
    
    printf("Saisir un masque de sous-reseau: ");
    if (scanf("%d.%d.%d.%d", &masque_1, &masque_2, &masque_3, &masque_4) != 4 ||
        masque_1 < 0 || masque_1 > 255 ||
        masque_2 < 0 || masque_2 > 255 ||
        masque_3 < 0 || masque_3 > 255 ||
        masque_4 < 0 || masque_4 > 255) {
        printf("Erreur saisie incorrecte\n");
        return 1;
    }
    
    masque = (masque_1 << 24) | (masque_2 << 16) | (masque_3 << 8) | masque_4;
    
    /* Vérification du masque :
    */
    if (masque == 0 || (masque | (masque - 1)) != 0xFFFFFFFF) {
        printf("Erreur masque incorrect\n");
        return 1;
    }
    
    printf("Masque de sous-reseau (32 bits): %u\n", masque);
    return 0;
}