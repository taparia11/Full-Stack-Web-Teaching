#include<iostream>
using namespace std;

class Test {
public:

    int checkArmstrong(int x) {
        int r, num = 0;

        while (x > 0) {
            r = x % 10;
            num = num + r * r* r;
            x = x / 10;
        }
        return num;
    }
};

int main() {

    int x, arm;

    cout << "Enter a number:";
    cin >> x;

    Test obj;
    arm = obj.checkArmstrong(x);

    if (arm == x) {
        cout << "Number is armstrong:" << x;
    } else {
        cout << "Number is not armstrong:" << x;
    }

    return 0;
}
