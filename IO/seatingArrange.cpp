#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, seatNo;
    cin >> N;
    while (N--)
    {
        /* code */
        cin >> seatNo;
        // for WS
        if (seatNo % 6 == 0 || seatNo % 6 - 1 == 0)
        {
            if (seatNo % 12 == 0)
            {
                cout << seatNo - 11 << " "
                     << "WS" << endl;
            }
            else if ((seatNo - 1) % 12 == 0)
            {
                cout << seatNo + 11 << " "
                     << "WS" << endl;
            }
            else if ((seatNo - 1) % 6 == 0)
            {
                cout << seatNo - 1 << " "
                     << "WS" << endl;
            }
            else
            {
                cout << seatNo + 1 << " "
                     << "WS" << endl;
            }
        }
        // for MS
        else if ((seatNo - 2) % 3 == 0)
        {
            if ((seatNo - 2) % 12 == 0)
            {
                cout << seatNo + 9 << " "
                     << "MS" << endl;
            }
            else if ((seatNo + 1) % 12 == 0)
            {
                cout << seatNo - 9 << " "
                     << "MS" << endl;
            }
            else if ((seatNo + 4) % 12 == 0)
            {
                cout << seatNo - 3 << " "
                     << "MS" << endl;
            }
            else
            {
                cout << seatNo + 3 << " "
                     << "MS" << endl;
            }
        }
        // for AS
        else
        {
            if ((seatNo) % 4 == 0)
            {
                cout << seatNo + 5 << " "
                     << "AS" << endl;
            }
            else if ((seatNo + 3) % 12 == 0)
            {
                cout << seatNo - 5 << " "
                     << "AS" << endl;
            }
            else if ((seatNo - 3) % 12 == 0)
            {
                cout << seatNo + 7 << " "
                     << "AS" << endl;
            }
            else
            {
                cout << seatNo - 7 << " "
                     << "AS" << endl;
            }
        }
    }
}