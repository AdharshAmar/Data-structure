#include <stdio.h>

// Function to perform union of two sets
void unionSets(int set1[], int set2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = set1[i] | set2[i]; // Union is achieved through bitwise OR
    }
}

// Function to perform intersection of two sets
void intersectSets(int set1[], int set2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = set1[i] & set2[i]; // Intersection is achieved through bitwise AND
    }
}

// Function to perform difference of two sets (set1 - set2)
void differenceSets(int set1[], int set2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = set1[i] & (~set2[i]); // Difference is achieved through bitwise AND and negation
    }
}

// Function to display the elements of a set
void displaySet(int set[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", set[i]);
    }
    printf("}\n");
}

int main() {
    int size;

    // Input size of the sets
    printf("Enter the size of the sets: ");
    scanf("%d", &size);

    int set1[size], set2[size], resultSet[size];

    // Input values for Set 1
    printf("Enter elements for Set 1:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &set1[i]);
    }

    // Input values for Set 2
    printf("Enter elements for Set 2:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &set2[i]);
    }

    // Display sets
    printf("\nSet 1: ");
    displaySet(set1, size);
    printf("Set 2: ");
    displaySet(set2, size);

    // Perform set operations
    unionSets(set1, set2, resultSet, size);
    printf("\nUnion: ");
    displaySet(resultSet, size);

    intersectSets(set1, set2, resultSet, size);
    printf("Intersection: ");
    displaySet(resultSet, size);

    differenceSets(set1, set2, resultSet, size);
    printf("Difference (Set 1 - Set 2): ");
    displaySet(resultSet, size);

    return 0;
}
