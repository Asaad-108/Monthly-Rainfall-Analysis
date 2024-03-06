// Monthly Rainfall Analysis
// This project demonstrates basic concepts of C++ such as arrays, loops, conditional statements, input/output operations, and string manipulation to analyze monthly rainfall data for the current year and the previous year.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // declaration and initialization (we use A for current year & B for previous year)
    const int size = 12;
    double currentYear[size];
    double previousYear[size];
    double sum1 = 0;      // sum of rainfall for current year
    double sum2 = 0;      // sum of rainfall for previous year
    double max1 = 0;      // maximum rainfall in current year
    double max2 = 0;      // maximum rainfall in previous year
    double min1 = 9999.9; // minimum rainfall in current year
    double min2 = 9999.9; // minimum rainfall in previous year
    // indexes to stores the index of month name
    int index_1 = 0;
    int index_2 = 0;
    int index_3 = 0;
    int index_4 = 0;
    const char *months[] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};
    // taking input from user
    cout << "enter the value for rainfall of current year & previous year " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ":" << months[i] << "   ";
        cin >> currentYear[i];
        cin >> previousYear[i];
        cout << endl;
    }
    // finding sum
    for (int i = 0; i < size; i++)
    {
        sum1 += currentYear[i];
        sum2 += previousYear[i];
    }
    // finding maximum rain fall
    for (int i = 0; i < 12; i++)
    {
        if (currentYear[i] > max1)
        {
            max1 = currentYear[i];
            index_1 = i;
        }
    }
    for (int i = 0; i < 12; i++)
    {
        if (previousYear[i] > max2)
        {
            max2 = previousYear[i];
            index_2 = i;
        }
    }
    // finding minimum rain fall
    for (int i = 0; i < 12; i++)
    {
        if (min1 > currentYear[i])
        {
            min1 = currentYear[i];
            index_3 = i;
        }
    }
    for (int i = 0; i < 12; i++)
    {
        if (min2 > previousYear[i])
        {
            min2 = previousYear[i];
            index_4 = i;
        }
    }
    // table of input the user enter
    cout << "Table of monthly rainfall is as follows:" << endl;

    cout << "            ";
    for (int i = 0; i < 12; i++)
    {
        cout << months[i] << "  ";
    }
    cout << endl;
    cout << "current year:";
    for (int i = 0; i < 12; i++)
    {
        cout << currentYear[i] << "     ";
    }
    cout << endl;
    cout << "previous year:";
    for (int i = 0; i < 12; i++)
    {
        cout << previousYear[i] << "     ";
    }
    cout << endl;
    // output
    cout << "the sum of current year rainfall is:" << sum1 << endl;
    cout << "the average of current year rainfall is:" << sum1 / 12 << endl;
    cout << "the sum of previous year rainfall is:" << sum2 << endl;
    cout << "the average of previous year rainfall is:" << sum2 / 12 << endl;
    cout << "the highest rainfall current year:" << max1 << " " << months[index_1] << endl;
    cout << "the highest rainfall previous year:" << max2 << " " << months[index_2] << endl;
    cout << "Months having no rainfall current year:" << min1 << " " << months[index_3] << endl;
    cout << "Months having no rainfall previous year:" << min2 << " " << months[index_4] << endl;
    // graph
    cout << "Rainfall chart (current year / previous year):" << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << i << "  " << months[i] << ": ";
        for (int j = 0; j < currentYear[i]; j++)
        {
            cout << "*";
        }
        cout << "     |     ";
        for (int k = 0; k < previousYear[i]; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
