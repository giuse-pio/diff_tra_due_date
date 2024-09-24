#include <stdio.h>

int main(void)
{
    int g1, m1, a1, g2, m2, a2, diff;
    printf("inserisci il giorno della prima data: ");
    scanf("%d", &g1);
    printf("inserisci il mese della prima data: ");
    scanf("%d", &m1);
    printf("inserisci l'anno della prima data: ");
    scanf("%d", &a1);
    printf("inserisci il giorno della seconda data: ");
    scanf("%d", &g2);
    printf("inserisci il mese della seconda data: ");
    scanf("%d", &m2);
    printf("inserisci l'anno della seconda data: ");
    scanf("%d", &a2);
    diff=(g1-g2) + (m1-m2)*30 + (a1-a2)*360;
    g1= diff%30;
    m1= (diff/30)%12;
    a1= diff/360;
    printf("la differenza delle due dato e' di; %d giorni %d mesi %d anni", g1, m1, a1);
}

