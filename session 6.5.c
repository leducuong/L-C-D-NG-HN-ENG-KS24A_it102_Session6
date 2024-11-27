#include <stdio.h>

int main() {
    int year, month, days;

    printf("Nhap nam: ");
    scanf("%d", &year);


    printf("Nhap thang (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("thag ko hop le nhap lai\n");

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
           printf("co %d ngày",days=31);
            break;
        case 4: case 6: case 9: case 11:
          printf("co %d ngày",days=30);
            break;
        case 2: 
                days = 29; 
            break;
        default:
            days = 0; 
    }
     printf("Thang %d nam %d co %d ngay.\n", month, year, days);

    return 0;
}
