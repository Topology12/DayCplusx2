#include <iostream>
using namespace std;
// Sử dụng tham chiếu trong hàm
void thamChieuHam(int &num)
{
    num += 10;
}

int main()
{
    // int x = 10;
    // int &fake_x = x;
    // std::cout << fake_x << std::endl;
    // fake_x += 10;
    // std::cout << fake_x << " = " << x << std::endl;
    // x += 10;
    // cout << fake_x << endl;
    // const int &fake_x_2 = x;
    // x += 5;
    // cout << fake_x_2 << " " << x << endl
    int x = 0;
    thamChieuHam(x);
    cout << x;
    return 0;
}
// Sử dụng 2 con trỏ trỏ tới hai biến khác nhau sau đó truyền vào hàm trả về một con trỏ
// Hàm congConTro() có chức năng cộng hai giá trị hiện tại 2 con trỏ đang giữ địa chỉ rồi trả về một con trỏ giữ địa chỉ của giá trị tổng đó
// Sử dụng 2 tham chiếu truyền vào hàm sau đó thực hiện các phép cộng trừ nhân chia trên tham chiếu
// void chenVaoViTri(int index, int val, int A[], int &length)-> Hard
// Nhiệm vụ hàm này là chèn giá trị val vào vị trí index trong mảng