#include <stdio.h>
#include <string.h>
#include <windows.h>

int main () {
    char input[100];
    char info[]= "Informazioni";
    char foto[]= "Foto";
    char mace[] = "Guerre macedoniche";
    char puni[] = "Guerre puniche";
    char gal[]= "I Galli";
    char fin[]= "Fine";
    printf("Benvenuti, Michele, Claudio e Tobia presentano The Roman Archive!\n");
    Sleep(2000);
    printf("Per cominciare scrivete di che argomento di cui volete vedere la sitografia, le opzioni da digitare sono Guerre puniche, Guerre macedoniche e I Galli: \n");
    fgets(input, 100, stdin);
    input[strcspn(input, "\n")] = 0;
    if (strcmp(input, puni) ==0) {
        printf ("Volete vedere i siti delle foto o delle informazioni?\n");
        fgets(input, 100, stdin);
        input[strcspn(input, "\n")] = 0;
        if (strcmp (input, info) == 0) {
            printf ("Ecco qui i link (per motivi tecnici i link si devono copiare e poi incollare sulla barra di ricerca):\nhttps://www.studenti.it/guerre-puniche-cronologia-battaglie-protagonisti.html ;\nhttps://it.wikipedia.org/wiki/Guerre_puniche ;\nhttps://www.ilpost.it/2021/11/25/guerre-puniche/ ;\nhttps://drive.google.com/file/d/1bVh2_wvl5KgIUxtNOJajmHMMj_XHesXC/view?usp=sharing .");
        }
        else if (strcmp (input, foto) == 0) {
            printf ("Ecco qui i link (per motivi tecnici i link si devono copiare e poi incollare sulla barra di ricerca):\nhttps://it.pinterest.com/ ;\nhttps://www.google.com/search?sca_esv=21b94de909c39182&sca_upv=1&rlz=1C1CHBF_itIT1089IT1090&q=guerre+puniche&udm=2&fbs=AEQNm0Be9hsxO5zOUoY5v2srYNPRIvTz_02aG-_CVE5t-hWDE-o4NknGVSyJJ2o-ODmr6AzzAs2HXn22T5ul0WKsZVMmJpVctjfuP_7P6Q0vzDgg0UR2OBy8kQja4_o4EYJ19-Z4htN5rihC5e5nWN0tX3m-NShysbeSfMs-yIqyBGYs3SN_Nt8&sa=X&sqi=2&ved=2ahUKEwiN0pmx7-CIAxVQ2AIHHZ1uBcAQtKgLegQIDhAB&biw=1536&bih=695&dpr=1.25&safe=active&ssui=on ;\nhttps://unsplash.com/it/s/foto/Guerre-puniche .");
        }
        else {
            printf ("Inserito carattere sbagliato, riavviare.");
        }
        }
    else if (strcmp(input, mace) == 0) {
        printf ("Volete vedere i siti delle foto o delle informazioni?\n");
        fgets(input, 100, stdin);
        input[strcspn(input, "\n")] = 0;
        if (strcmp (input, info) == 0) {
            printf ("Ecco qui i link (per motivi tecnici i link si devono copiare e poi incollare sulla barra di ricerca):\nhttps://it.wikipedia.org/wiki/Guerre_macedoniche#Prima_guerra_macedonica_(214-205_a.C.) ;\nhttps://youtu.be/ezEjbxalIi0?feature=shared ;\nhttps://drive.google.com/file/d/1bVh2_wvl5KgIUxtNOJajmHMMj_XHesXC/view?usp=sharing ;\nhttps://www.wikiwand.com/it/articles/Guerre_macedoniche .");
        }
        else if (strcmp (input, foto) == 0) {
            printf ("Ecco qui i link (per motivi tecnici i link si devono copiare e poi incollare sulla barra di ricerca):\nhttps://www.google.com/search?sca_esv=21b94de909c39182&sca_upv=1&rlz=1C1CHBF_itIT1089IT1090&q=guerre+macedoniche&udm=2&fbs=AEQNm0Be9hsxO5zOUoY5v2srYNPRIvTz_02aG-_CVE5t-hWDE-o4NknGVSyJJ2o-ODmr6AzzAs2HXn22T5ul0WKsZVMmJpVctjfuP_7P6Q0vzDgg0UR2OBy8kQja4_o4EYJ19-Z4htN5rihC5e5nWN0tX3m-NShysbeSfMs-yIqyBGYs3SN_Nt8&sa=X&ved=2ahUKEwi9xf797eCIAxWyxQIHHT37OY8QtKgLegQIEBAB&biw=1536&bih=695&dpr=1.25&safe=active&ssui=on ;\nhttps://it.pinterest.com/ ;\nhttps://www.pexels.com/it-it/ .");
        }
        else {
            printf ("Inserito carattere sbagliato, riavviare.");
        }
    } 
    else if (strcmp(input, gal) == 0) {
        printf ("Volete vedere i siti delle foto o delle informazioni?\n");
        fgets(input, 100, stdin);
        input[strcspn(input, "\n")] = 0;
        if (strcmp (input, info) == 0) {
            printf ("Ecco qui i link (per motivi tecnici i link si devono copiare e poi incollare sulla barra di ricerca):\nhttps://drive.google.com/file/d/1bVh2_wvl5KgIUxtNOJajmHMMj_XHesXC/view?usp=sharing ;\nhttps://www.youtube.com/watch?v=2ruTNYIm8P0 ;\nhttps://www.storicang.it/a/giulio-cesare-e-conquista-della-gallia_14979 ;\nhttps://www.youtube.com/watch?v=UKIuxax1FU0 .");
        }
        else if (strcmp (input, foto) == 0) {
            printf ("Ecco qui i link (per motivi tecnici i link si devono copiare e poi incollare sulla barra di ricerca):\nhttps://it.pinterest.com/ ;\nhttps://www.google.com/search?sca_esv=21b94de909c39182&sca_upv=1&hl=it&q=I+galli+contro+i+romani&udm=2&fbs=AEQNm0Be9hsxO5zOUoY5v2srYNPRIvTz_02aG-_CVE5t-hWDE-o4NknGVSyJJ2o-ODmr6AzzAs2HXn22T5ul0WKsZVMmJpVctjfuP_7P6Q0vzDgg0UR2OBy8kQja4_o4EYJ19-Z4htN5rihC5e5nWN0tX3m-NShysbeSfMs-yIqyBGYs3SN_Nt8&sa=X&ved=2ahUKEwjjtd3j8eCIAxU17wIHHTBIANEQtKgLegQIEhAB&biw=1536&bih=695&dpr=1.25&safe=active&ssui=on ;\nhttps://it.freepik.com/foto-popolare .");
        }
        else {
            printf ("Inserito carattere sbagliato, riavviare.");
        }
        
    }
    else {
        printf ("Inserito carattere sbagliato, riavviare.");
    }
    printf ("\n\n\nPer chiudere The Roman Archive scrivere Fine:\n");
    while (strcmp (input, fin) == 1) {
        fgets (input, 100, stdin);
        input[strcspn(input, "\n")] = 0;
    }
    return 0;
}
