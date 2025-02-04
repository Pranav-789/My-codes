#include<stdio.h>

union ID{
    char aadhaar[13];
    char passport[11];
};


int main () {
    union ID ids[3];
    int choice;
    int isdup = 0;

    for (int i = 0; i < 3; i++){
        printf("Enter '1' for Aadhar or '2' for passport: ");
        scanf("%d", &choice);

        if(choice == 1){
            printf("Enter Aadhaar number (12 digits): ");
            scanf("%s", ids[i].aadhaar);
        }
        else if (choice == 2){
            printf("Enter passport number (10 digits): ");
            scanf("%s", ids[i].passport);
        }
        else{
            printf("Invalid input! try again\n");
            i--;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(ids[i].aadhaar, ids[j].aadhaar) == 0) {
                isdup = 1;
                break;
            }
        }
        if (isdup) break;
    }

    if (isdup) {
        printf("Error: Duplicate ID numbers found.\n");
    } else {
        printf("All IDs are unique.\n");
    }
    return 0;
}