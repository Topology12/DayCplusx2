#include <iostream>
using namespace std;

void testLocalVariable()
{
    int age = 12;
    cout << age;
}
int main()
{
    testLocalVariable();
    // cout << age << endl;
    for (int i = 0; i < 1; i++)
        cout << i << endl;
    return 0;
}


// Tạo một vector<*int> vec_pointer  vd: [1, 3, 2, 4, 2, 6]
// Tính tổng các giá trị của mảng -> 16
// Tìm số phần tử chẵn, lẽ -> odd: 4, even:2
// Tìm 2 phần tử có tổng bằng số target cho trc -> target: 9 -> in ra 3 và 6 
// In ra tuần suất xuất hiện của các số có trong vector -> [1, 1, 2, 1, 2, 1]