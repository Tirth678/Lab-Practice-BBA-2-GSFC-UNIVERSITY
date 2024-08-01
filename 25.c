#include <stdio.h>
double calculateTotalSalary(int employeeId, double basicSalary) {
    double daPercentage, ma, pfPercentage, itPercentage;
    if (employeeId >= 1 && employeeId <= 5) {
        daPercentage = 67;
        ma = 120;
        pfPercentage = 10;
        itPercentage = 15;
    } else if (employeeId >= 6 && employeeId <= 12) {
        daPercentage = 62;
        ma = 100;
        pfPercentage = 9;
        itPercentage = 10;
    } else if (employeeId >= 13 && employeeId <= 15) {
        daPercentage = 55;
        ma = 80;
        pfPercentage = 8;
        itPercentage = 8;
    } else {
        printf("Invalid EmployeeId\n");
        return 0;
    }
    double da = (basicSalary * daPercentage) / 100;
    double pf = (basicSalary * pfPercentage) / 100;
    double it = (basicSalary * itPercentage) / 100;
    double totalSalary = basicSalary + da + ma - pf - it;
    return totalSalary;
}
int main() {
    int employeeId;
    double basicSalary;
    printf("Enter EmployeeId: ");
    scanf("%d", &employeeId);
    printf("Enter Basic Salary: ");
    scanf("%lf", &basicSalary);
    double totalSalary = calculateTotalSalary(employeeId, basicSalary);
    if (totalSalary != 0) {
        printf("Total Salary: %.2lf\n", totalSalary);
    }
    return 0;
}
