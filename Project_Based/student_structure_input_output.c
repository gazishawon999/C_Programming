#include <stdio.h>

// Define the student structure
struct student {
    char Name[50]; // Use a string (character array) to store the name
    int Id;
    float Cgpa;
};

int main() {
    struct student s; // Declare a structure variable
    
    // Input the details of the student
    printf("Enter Your Name: \n");
    scanf("%s", s.Name); // Use the correct format specifier for a string
    
    printf("Enter Your ID: \n");
    scanf("%d", &s.Id); // Use &s.Id to store the input
    
    printf("Enter Your CGPA: \n");
    scanf("%f", &s.Cgpa); // Use &s.Cgpa to store the input
    
    // Print the student's details
    printf("Name: %s, ID: %d, CGPA: %.2f\n", s.Name, s.Id, s.Cgpa);
    
    return 0;
}

