# Monthly Rainfall Analysis

This C++ program analyzes the monthly rainfall data for the current year and the previous year. It calculates various statistics such as total rainfall, average rainfall, highest and lowest rainfall, and displays them along with a graphical representation of the rainfall data.

## How to Use

1. **Compile the Program**: Compile the program using a C++ compiler. For example:
    ```bash
    g++ main.cpp -o rainfall_analysis
    ```

2. **Run the Program**: Execute the compiled program:
    ```bash
    ./rainfall_analysis
    ```

3. **Input Data**: Enter the rainfall values for each month of the current year and the previous year as prompted.

4. **View Results**: After entering the data, the program will display the calculated statistics and a graphical representation of the rainfall data.

## Program Description

The program performs the following tasks:

- Takes input for monthly rainfall of the current year and the previous year.
- Calculates the total and average rainfall for both years.
- Determines the highest and lowest rainfall for each year and the corresponding months.
- Generates a graphical representation of the rainfall data using asterisks (\*).

## Sample Output

```
enter the value for rainfall of current year & previous year 
1:January   30  20
2:February   40  25
3:March   35  22
4:April   25  18
5:May   20  15
6:June   10  10
7:July   5  5
8:August   3  3
9:September   10  8
10:October   15  12
11:November   25  20
12:December   28  22

Table of monthly rainfall is as follows:
             January  February  March  April  May  June  July  August  September  October  November  December  
current year:   30      40          35     25     20     10     5     3     10     15     25     28     
previous year:  20      25          22     18     15     10     5     3     8     12     20     22     
the sum of current year rainfall is:233
the average of current year rainfall is:19.4167
the sum of previous year rainfall is:190
the average of previous year rainfall is:15.8333
the highest rainfall current year:40 January
the highest rainfall previous year:25 February
Months having no rainfall current year:3 August
Months having no rainfall previous year:3 August
Rainfall chart (current year / previous year):
1  January: ******************************         ********************         
2  February: *****************************************        *****************
3  March: ***********************************       *********************
4  April: *************************      ******************
5  May: *******************     ***************
6  June: **********    **********
7  July: *****   *****
8  August: ***    ***
9  September: **********   ********
10  October: ***************    ************
11  November: *************************       ********************
12  December: ****************************      ******************
```

## License

This project is licensed under the [MIT License](LICENSE).