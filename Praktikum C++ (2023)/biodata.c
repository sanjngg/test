#include <stdio.h> 
 main (){
    char nama [20]; 
    int nim; 
    char jk; 
    printf("Masukkan nama anda: "); 
    fgets(nama,20,stdin); // ini utnuk mencetak nama yang panjang dalam C
    printf("%s",&nama);
    printf("Masukkan Nim: " ); 
scanf("%i",&nim); 
printf("Masukkan jk: " ); 

printf("%s",nama);
printf("%i",nim);
printf("%c",jk);

}