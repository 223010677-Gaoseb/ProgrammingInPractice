
#include <stdio.h>
#include <string.h>

#define MAX_SUPPLIERS 5
#define STR_LEN 100


void stripNewline(char str[]) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {

    char names[MAX_SUPPLIERS][STR_LEN];
    char emails[MAX_SUPPLIERS][STR_LEN];
    char phones[MAX_SUPPLIERS][STR_LEN];
    char towns[MAX_SUPPLIERS][STR_LEN];

    int supplierCount = 0;
    int choice;

    do {
        printf("\n================================\n");
        printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("================================\n");
        printf("1. Add Supplier\n");
        printf("2. Display All Suppliers\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Lengths\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: {
                if (supplierCount >= MAX_SUPPLIERS) {
                    printf("\nError: Supplier database is full (Maximum %d suppliers).\n", MAX_SUPPLIERS);
                } else {
                    printf("\n--- ADD SUPPLIER %d ---\n", supplierCount + 1);

                    printf("Enter supplier name: ");
                    fgets(names[supplierCount], STR_LEN, stdin);
                    stripNewline(names[supplierCount]);

                    printf("Enter email: ");
                    fgets(emails[supplierCount], STR_LEN, stdin);
                    stripNewline(emails[supplierCount]);

                    printf("Enter phone: ");
                    fgets(phones[supplierCount], STR_LEN, stdin);
                    stripNewline(phones[supplierCount]);

                    printf("Enter town: ");
                    fgets(towns[supplierCount], STR_LEN, stdin);
                    stripNewline(towns[supplierCount]);

                    supplierCount++;
                    printf("Supplier added successfully!\n");
                }
                break;
            }

            case 2: {
                if (supplierCount == 0) {
                    printf("\nNo suppliers registered yet.\n");
                } else {
                    printf("\n--- ALL SUPPLIERS ---\n");
                    for (int i = 0; i < supplierCount; i++) {
                        printf("\nSupplier #%d:\n", i + 1);
                        printf("  Name : %s\n", names[i]);
                        printf("  Email: %s\n", emails[i]);
                        printf("  Phone: %s\n", phones[i]);
                        printf("  Town : %s\n", towns[i]);
                    }
                }
                break;
            }

            case 3: {
                if (supplierCount == 0) {
                    printf("\nNo suppliers available to search.\n");
                } else {
                    char searchName[STR_LEN];
                    int found = 0;

                    printf("\nEnter supplier name to search: ");
                    fgets(searchName, STR_LEN, stdin);
                    stripNewline(searchName);

                    for (int i = 0; i < supplierCount; i++) {
                        if (strcmp(names[i], searchName) == 0) {
                            printf("\n--- SUPPLIER FOUND ---\n");
                            printf("Name : %s\n", names[i]);
                            printf("Email: %s\n", emails[i]);
                            printf("Phone: %s\n", phones[i]);
                            printf("Town : %s\n", towns[i]);
                            found = 1;
                            break;
                        }
                    }

                    if (!found) {
                        printf("\nSupplier \"%s\" not found.\n", searchName);
                    }
                }
                break;
            }

            case 4: {
                if (supplierCount == 0) {
                    printf("\nNo suppliers registered yet.\n");
                } else {
                    printf("\n--- SUPPLIER NAME LENGTHS ---\n");
                    for (int i = 0; i < supplierCount; i++) {
                        printf("Name: %s | Length: %zu characters\n", names[i], strlen(names[i]));
                    }
                }
                break;
            }

            case 5:
                printf("\nGoodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please select a valid option (1-5).\n");
        }

    } while (choice != 5);

    return 0;
}
