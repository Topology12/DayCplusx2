#include <iostream>
#include <vector>
using namespace std;

void NhapVector(int n, vector<int *> vec)
{
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        int *ptr = new int(value);
        vec.push_back(ptr);
    }
}


int main()
{
    vector<int *> vec_pointer;
    int n;
    cout << "Nhap vao so luong phan tu: ";
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int value;
    //     cin >> value;
    //     int *ptr = new int(value);
    //     vec_pointer.push_back(ptr);
    // }
    int Sum = 0;
    // Tạo 2 vector chẵn và lẻ
    for (int i = 0; i < vec_pointer.size(); i++)
    {
        Sum += *(vec_pointer[i]);
    }
    cout << "Tong cac phan tu la: ";
    cout << Sum << endl;
    cout << "Cac phan tu so chan la: ";
    for (int i = 0; i < vec_pointer.size(); i++)
    {
        if ((*(vec_pointer[i])) % 2 == 0)
        {
            cout << *(vec_pointer[i]) << " ";
        }
    }
    cout << endl;
    cout << "Cac phan tu so le la: ";
    for (int i = 0; i < vec_pointer.size(); i++)
    {
        if ((*(vec_pointer[i])) % 2 != 0)
        {
            cout << *(vec_pointer[i]) << " ";
        }
    }
    cout << endl;
    cout << "Tong 2 phan tu bang target cho truoc: ";
    int score;
    cin >> score;
    for (int i = 0; i < vec_pointer.size() - 1; i++)
    {
        for (int j = i + 1; j < vec_pointer.size(); j++)
        {
            if (((*(vec_pointer[i])) + (*(vec_pointer[j]))) == score)
            {
                cout << *(vec_pointer[i]) << " " << *(vec_pointer[j]);
            }
        }
    }
    cout << endl;
    cout << "In ra tan suat xuat hien: ";
    vector<int> hz(n, 0);
    // for (int i = 0; i < vec_pointer.size(); i++)
    // {
    //     hz[i] = 0;
    // }
    // [1, 2, 1, 3]

    // i
    // j = i + 1
    for (int i = 0; i < vec_pointer.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < vec_pointer.size(); j++)
        {
            if (*vec_pointer[i] == *vec_pointer[j])
            {
                count++;
            }
        }
        // cout << "[ " << i << "]";
        hz[i] = count;
    }

    for (int i = 0; i < hz.size(); i++)
        cout << hz[i] << " ";
    for (int i = 0; i < vec_pointer.size(); i++)
        free(vec_pointer[i]);
    return 0;
    // 99
}