#include <iostream>

using namespace std;

int main()
{
    int smallest, greatest, target, diff, multiples;
    char stop;
    while(true)
    {
        cout << "Enter the smallest number of your range: ";
        cin >> smallest;
        cout << "Enter the greatest number of your range: ";
        cin >> greatest;
        cout << "How many multiples of _____ are there in the specified range? Enter what to fill in the gap: ";
        cin >> target;

        diff = greatest - smallest;
        multiples = diff / target;

        cout << "There are " << multiples << " multiples of " << target << " in range [" << smallest << ", " << greatest << "]" << endl;
        cout << "[C]ontinue (Any other character for stop)? ";
        cin >> stop;
        if (stop == 'C')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}
