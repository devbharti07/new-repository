// 9. Structure Example
struct Student {
    char name[50];
    int roll;
    float marks;
};
void structureStudent() {
    struct Student s;
    printf("Enter Name Roll Marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
}
