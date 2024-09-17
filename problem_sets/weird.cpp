#include <iostream>

using namespace std;

int main()
{
    cout << "ENTER INTEGER n = ";

        int n;
        cin >> n;
        // IF N IS EVEN
        if (n % 2 != 0) {
            cout << "WEIRD"<< endl;

            //IF N IS EVEN AND BETWEEN THE RANGE OF 2 AND 6
           } else if ( n >= 2 && n <= 5) {
                cout << "NOT WEIRD" <<endl;

                //IF N IS EVEN AND BETWEEN THE RANGE OF 6 AND 20 INCLUSIVE
                } else if (n >= 6 && n <= 20  ) {
                   cout << "WEIRD" <<endl;

                 }
                 else {
                    cout << "NOT WEIRD" << endl;
                 }






    return 0;
}
