#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "customers.txt"

struct Customer {
    int id;
    char name[50];
    int roomNumber;
    int days;
};

struct Customer customers[100];
int customerCount = 0;

// Function Prototypes
void loadCustomersFromFile();
void saveCustomersToFile();
void registerCustomer();
void viewBookings();
void cancelBooking();

void loadCustomersFromFile() {
    FILE *fp = fopen(FILE_NAME, "r");
    if (fp == NULL) {
        return; // No data to load
    }
    while (fscanf(fp, "%d,%49[^,],%d,%d\n", 
                  &customers[customerCount].id,
                  customers[customerCount].name,
                  &customers[customerCount].roomNumber,
                  &customers[customerCount].days) != EOF) {
        customerCount++;
    }
    fclose(fp);
}

void saveCustomersToFile() {
    FILE *fp = fopen(FILE_NAME, "w");
    if (fp == NULL) {
        printf("❌ Error saving to file.\n");
        return;
    }
    for (int i = 0; i < customerCount; i++) {
        fprintf(fp, "%d,%s,%d,%d\n", 
                customers[i].id, 
                customers[i].name, 
                customers[i].roomNumber, 
                customers[i].days);
    }
    fclose(fp);
}

void registerCustomer() {
    struct Customer c;
    printf("\nEnter Customer ID: ");
    scanf("%d", &c.id);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", c.name); // full name
    printf("Enter Room Number: ");
    scanf("%d", &c.roomNumber);
    printf("Number of Days to Stay: ");
    scanf("%d", &c.days);

    customers[customerCount++] = c;
    saveCustomersToFile(); // save to file
    printf("\n✅ Registration successful and saved!\n");
}

void viewBookings() {
    if (customerCount == 0) {
        printf("\n❌ No bookings found.\n");
        return;
    }

    printf("\n📋 Booking List:\n");
    for (int i = 0; i < customerCount; i++) {
        printf("\nID: %d\nName: %s\nRoom No: %d\nDays: %d\n", 
            customers[i].id, customers[i].name, customers[i].roomNumber, customers[i].days);
    }
}

void cancelBooking() {
    int id;
    printf("\nEnter Customer ID to Cancel Booking: ");
    scanf("%d", &id);
    int found = 0;
    for (int i = 0; i < customerCount; i++) {
        if (customers[i].id == id) {
            for (int j = i; j < customerCount - 1; j++) {
                customers[j] = customers[j + 1];
            }
            customerCount--;
            saveCustomersToFile(); // update file
            printf("✅ Booking cancelled and updated in file.\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("❌ Booking not found.\n");
}

int main() {
    int choice;
    loadCustomersFromFile(); // Load existing data

    while (1) {
        printf("\n--- Hotel Management System (Customer Module) ---\n");
        printf("1. Register Customer\n");
        printf("2. View Bookings\n");
        printf("3. Cancel Booking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: registerCustomer(); break;
            case 2: viewBookings(); break;
            case 3: cancelBooking(); break;
            case 4: printf("👋 Exiting...\n"); return 0;
            default: printf("❌ Invalid choice. Try again.\n");
        }
    }
}
