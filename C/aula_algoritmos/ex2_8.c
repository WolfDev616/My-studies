#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int transformDate(int day, int month, int year) {

    
    char *monthStr;

    switch (month) {

        case 1: monthStr = "janeiro"; break; 
        case 2: monthStr = "fevereiro"; break; 
        case 3: monthStr = "março"; break; 
        case 4: monthStr = "abril"; break; 
        case 5: monthStr = "maio"; break; 
        case 6: monthStr = "junho"; break; 
        case 7: monthStr = "julho"; break; 
        case 8: monthStr = "agosto"; break; 
        case 9: monthStr = "setembro"; break; 
        case 10: monthStr = "outubro"; break; 
        case 11: monthStr = "novembro"; break; 
        case 12: monthStr = "dezembro"; break;
        default: monthStr = "invalid"; break;
        
    }
    printf("Hoje é %d de %s de %d.\n", day, monthStr, year);  
    
    
    return 0;
    

}



int main() {
    int day, month, year;
    char dateDivider;

    printf("Insert date: ");
    scanf("%d", &day);
    scanf(" %[-/.]", &dateDivider);
    scanf("%d", &month);
    scanf(" %[-/.]", &dateDivider);
    scanf("%d", &year);


    transformDate(day, month, year);

    return 0;
}


// Receive Data
// Print data in out in full. 