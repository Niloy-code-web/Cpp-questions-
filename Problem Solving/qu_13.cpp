// C++ Pattern Printing Programs

#include<iostream>
using namespace std;
int row; // A global variable
void menu(){
    cout << "\t\t\t\n1.  Print Right Half Pyramid Pattern\n" ;
    cout << "\t\t\t\n2.  Print Left Half Pyramid Pattern\n" ;
    cout << "\t\t\t\n3.  Print Simple Full Pyramid Pattern\n" ;
    cout << "\t\t\t\n4.  Print Inverted Pyramid\n" ;
    cout << "\t\t\t\n5.  Print Number Pattern without reassigning\n" ;
    cout << "\t\t\t\n6.  Print Character Pattern\n" ;
    cout << "\t\t\t\n7.  Print Continuous Character Pattern\n" ;
    cout << "\t\t\t\n8.  Print Full Diamond Shape Pyramid\n" ;
    cout << "\t\t\t\n9. Print Inverted Hollow Star Pyramid Pattern\n" ; 
    cout << "\t\t\t\n10. Print Hollow Star Pyramid in a Diamond Shape\n" ;
    cout << "\t\t\t\n11. Print Pascal's Triangle\n" ;
    cout << "\t\t\t\n12. Print Floyd's pattern Triangle Pyramid\n" ;
    cout << "\t\t\t\n13. Print Reverse Floyd Pattern Triangle Pyramid\n" ;
}

// Fuction prototyping
    void Half_Pyramid_Right();
    void Half_Pyramid_Left();
    void Full_Pyramid();
    void Inverted();
    void Number_Pattern();
    void Character_Pattern();
    void Continues_Character_Pattern();
    void Diamond();
    void Inverted_Hollow();
    void HD();
    void Pascal_Triangle();
    void Floyd_Triangle();
    void Reverse_Floyd_Triangle();
// Main function
int main()
{
    menu();
    int choice ;
    cout << "\nEnter your choice : ";
    cin >> choice;
        switch (choice)
        {
            case 1:
            {
                Half_Pyramid_Right();
                break;
            }
            case 2:
            {
                Half_Pyramid_Left();
                break;
            }
            case 3:
            {
                Full_Pyramid();
                break;
            } 
            case 4:
            {
                Inverted();
                break;
            }            
            case 5:
            {
                Number_Pattern();
                break;
            } 
            case 6:
            {
                Character_Pattern();
                break;    
            } 
            case 7:
            {
                Continues_Character_Pattern();
                break;
            } 
            case 8:
            {
                Diamond(); 
                break;
            } 
            case 9 :
            {
                Inverted_Hollow();
                break;
            }
            case 10:
            {
                HD();
                break;
            } 
            case 11:
            {
                Pascal_Triangle();
                break;
            } 
            case 12:
            {
                Floyd_Triangle();
                break;
            } 
            case 13:
            {
                Reverse_Floyd_Triangle();
                break;
            } 
            default:
            {
                cout << "Sorry . Invalid choice !!!! ";
                break;
            } 
        }
    return 0;
}
// Function to print right Half Pyramid
void Half_Pyramid_Right()
{
    cout << "Enter the row number : ";
    cin >> row ;
    cout << "\n\n\nRequired pattern : \n";
        // First for loop is used to identify the rows
        for (int i = 1; i <= row; i++)
        {
                // Second for loop is used to identify the numbers of columns and here the value will be changed according to the first for loop
                for (int j = 1; j <= i; j++)
                {
                    cout << "*" ;
                }
                cout << "\n";
        }
}
// Function to print left Half Pyramid
void Half_Pyramid_Left()
{
    cout << "Enter the row number : ";
    cin >> row;
    cout << "\n\n\nRequired pattern : \n";
        // first for loop is used to identify number of rows
        for (int i = row; i > 0; i--)
        {
            // Second for loop is used to identify numbers of column here it will change according to the first for loop
            for (int j = 0; j <= row; j++) {
                if (j >= i) {
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            cout << endl;
        }
}
// Function to print a full pyramid
void Full_Pyramid()
{
    cout << "Enter the row numbers : ";
    cin >> row;
    cout << "\n\n\nRequired pattern : \n";
        for (int i = 1; i <= row; i++) {
            // print leading space
            for (int j = i; j < row; j++) {
                cout << " ";
            }
                // Print *
                for (int k = 1; k <= (2 * i - 1); k++) {
                    cout << "*";
                }
                    cout << endl;
        }     
}
// Function to print Inverted pyramid
void Inverted()
{
    cout << "Enter the row numbers : ";
    cin >> row;
    cout << "\n\n\nRequired pattern : \n";

        for (int i = row; i >= 1; i--)
        {
            // Print *
            for (int k = 0; k < row -i; k++) {
                cout << " ";
            }
                // print leading space
                for (int j = i; j <= (2 * i - 1); j++) {
                    cout << "*";
                }
                    for (int j = 0; j < i - 1; j++) {
                        cout << "*";
                    }
                        cout << endl;
        }
}
// fUNCTION TO PRINT Number Pattern
void Number_Pattern()
{
    cout << "Enter the numbers of row : ";
    cin >> row;
    int number = 1;
    cout << "Required pattern : ";
        for (int i = 0; i <= row; i++) {
            for (int j = 0; j < i; j++) {
                cout << number << " ";
                number ++;
            }
                cout << endl;
        }
}
// Function to print Character Pattern
void Character_Pattern()
{
    char c;
    cout << "Enter an alphabetical character : ";
    cin >> c;
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Required pattern : \n" ;
        for (int i = 0; i <= row; i++) {
            for (int j = 0; j <= i; j++) {
                cout << c << " ";
            }
            cout << endl;
            c ++; 
        }
}
// Function to print a Continues Character Pattern
void Continues_Character_Pattern()
{
    char c;
    cout << "Enter an alphabetical character : ";
    cin >> c;
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Required pattern : \n" ;

        for (int i = 0; i <= row; i++) {
            for (int j = 0; j < i; j++) {
                cout << c << " ";
                c++; 
            }
            cout << endl;
        }
}
// Function to print full diamond shape pyramid
void Diamond()
{
    cout << "Enter the number of rows : ";
    cin >> row;
    int space = row - 1;    
    cout << "Required pattern : \n" ;
        // Parent loop
        for (int i = 0; i < row; i++)
        {
            // loop for initial space
            for (int j = 0; j < space; j++) {
                cout << " ";
            }
                // print i + 1 starts
                for (int k = 0; k <= i; k++) {
                    cout << "* ";
                }
            cout << endl;
            space --;
        }
            // Repeat again in a reverse order 
            space = 0;
                // parent loop
                for (int i = row - 1; i > 0; i--)
                {
                        // loop for initial space
                        for (int j = 0; j < space; j++) {
                            cout << " ";
                        }
                            // print i stars
                            for (int k = 0; k < i; k++) {
                                cout << " *";
                            }
                            cout << endl;
                            space ++;
                }
}
// Function to print Inverted Hollow star pyramid
void Inverted_Hollow()
{
    cout << "Enter the number of rows : ";
    cin >> row;

    cout << "Required pattern : \n" ;
        for (int i = 1; i <= row; i++)
        {
            // to print the beginning space
            for (int j = 0; j <= i -1; j++) {
                cout << " ";
            }
            // Iterating from ith column to last column (R*2 - (2*i - 1))
            int last_col = (row * 2 - (2 * i - 1));
            // to iterate through the column
                for (int k = 1; k <= last_col; k++) {
                    if (i == 1) {
                        cout << "*";
                    }
                        else if (k == 1) {
                            cout << "*";
                        }
                            else if (k == last_col) {
                                cout << "*";
                            }
                                else{
                                    cout << " ";
                                }
                }
                cout << endl;
        }
}
// Function to print Hollow Star Pyramid Diamond Shape Pattern
void HD()
{
    int n = 1 , column;
    cout << "Enter the number of rows : ";
    cin >> row;

    cout << "Required pattern : \n" ;
        // print the upper triangle
        while (n <= row) {
            column = row;
            // print the space
            while (column > n) {
                cout << " ";
                column --;
            }
                // print star
                cout << "*";
                column = 1;
                    while (column < (n - 1) * 2) {
                        cout << " ";
                        column ++;
                    }
                        if (n == 1) {
                            cout << "\n";
                        }
                        else {
                            cout << "*\n";
                        }
                        n++;
        }
            // while loop is used to identify the number of rows and it is used to print lower triangle
            n = row - 1;
            while (n >= 1) {
                column = row;
                while (column > n) {
                    cout << " ";
                    column --;
                }
                cout << "*";
                column = 1;
                while (column < (n-1)*2) {
                   cout << " ";
                   column ++;
                }
                    if (n == 1) {
                       cout << "\n";
                    }
                        else {
                           cout << "*\n";
                        }
                n--;
            }
}
// Function to print Pascal's Triangle
void Pascal_Triangle()
{
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Required pattern : \n" ;
        for (int line = 0; line <= row; line++) {
            int c = 1; // used to represent c(line , i)
                for (int i = 1; i <= line; i++) {
                    // the first value of the triangle is always 1
                    cout << c << " ";
                    c = (c * (line - i)) / i; 
                }
            cout << endl;
        }
}
// Function to print Floyd pattern Triangle
void Floyd_Triangle()
{
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Required pattern : " ;
    int number = 1;
        for (int i = 0; i <= row; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << number << " ";
                number ++;
            }
            cout << endl;
        }
}
// Function to print Reverse Floyd Triangle
void Reverse_Floyd_Triangle()
{
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Required pattern : \n" ;
    
        // Calculate the starting value (largest value in the triangle)
        int curr_value = row * (row + 1) / 2;

            // Outer loop for each row, starting from the last row
            for (int i = row; i >= 0; i--) {
                    // Inner loop to print each value in the row
                    for (int j = i; j > 0; j--) {
                        cout << curr_value -- << " ";
                    }
                cout << endl;
            }
}