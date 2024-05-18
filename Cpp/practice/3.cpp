#include <iostream>

using namespace std;

class Space
{
    int mCount;

public:
    Space()
    {
        mCount = 0;
    }

    Space operator++(int)
    {
        Space temp(*this);
        mCount++;
        return temp;
    }

    void displayCount()
    {
        cout << mCount << endl;
    }
};

int main()
{
    Space objSpace;
    objSpace++;
    objSpace.displayCount();
    return 0;
}