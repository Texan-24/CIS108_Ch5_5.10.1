/********************************************************************
* File: Chapter 5 PE 5_3.cpp
* Make it a point to have all the output look good by
* making sure it is properly aligned. Please display the GPA to
* two places beyond the decimal point.
********************************************************************/
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;
using std::left;
using std::setprecision;
using std::fixed;

const int COLUMN_1 = 15;
const int COLUMN_2 = 12;
const int COLUMN_3 = 4;

int main()
{
  cout << "Income versus GPA" << endl;
  cout << left << setw(COLUMN_1) << "Name" 
       << setw(COLUMN_2) << "Income" 
       << setw(COLUMN_3) << "GPA" << endl;

  cout << setw(COLUMN_1) << "Jamie" 
       << setw(COLUMN_2) << fixed << setprecision(2) << 12300.00f 
       << setw(COLUMN_3) << setprecision(1) << 3.4f << endl;

  // TODO: finish the table(s)

  /*
    // Part I
    cout << "\n Income versus GPA \n";
    cout << "Name		\t Income	\t GPA \n\n";
    cout << "Jamie		\t 12300.00 \t 3.4  \n\n";
    cout << "Linda		\t 14500	\t 3.92 \n\n";
    cout << "Bob		\t 9400	\t 3.12 \n\n";
    cout << "Marie		\t 15129.00 \t 4    \n\n\n";
    cout << "** End of Report 1 ** \n\n";

    //Part 2
    cout << "\n Income versus Age \n";
    cout << "Name		\t Income	\t Age \n\n";
    cout << "Jamie		\t 12300.00 \t 19  \n\n";
    cout << "Linda		\t 14500	\t 22  \n\n";
    cout << "Bob		\t 9400	\t 21  \n\n";
    cout << "Frank		\t 19129.00 \t 51  \n\n\n";
    cout << "** End of Report 2 ** \n\n";
  */
    return 0;
}
