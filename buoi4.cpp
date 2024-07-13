#include <iostream>
using namespace std;

struct Aphabet
{
    char word;
    Aphabet(char w)
    {
        this->word = w;
    };
    void printWord()
    {
        cout << this->word;
    };
};

int main()
{
    Aphabet word1 = Aphabet('a');
    word1.printWord();
    cout << endl;
    word1.word = 'b';
    word1.printWord();
    return 0;
}

// Bài 1:
// Tạo 1 struct Customer gồm 3 trường name, hometown, age
// Dùng vector hoặc mảng để quản lí danh sách N nhân viên nhập từ bàn phím
// In ra danh sách học viên 
// In ra những người có howtown là hue
// Sắp xếp danh sách từ bé đến lớn theo tuôi
// Bài 2:
// Tạo 1 struct Thi Sinh gồm các trường name, ngày sinh, điểm lí thuyết, điểm thực hành, tổng điểm
// Biết tông điểm bằng (điểm lí thuyết + điểm thực hành) / 2;
// Dùng vector hoặc mảng để quản lí danh sách các thí sinh
// Biết thí sinh đâụ bằng lái xe khi tổng điểm >= 8
// In ra danh sách thí sinh
// In ra danh sách thí sinh đậu 
// Sắp xếp danh sách theo tổng điểm
// Cho biết:
// Mức điểm         Kết quả
// < 8              Thi lại
// 8<= and <= 9    Bằng khá
// 9< and <=9.5    Bằng giỏi
// <= 10            Bằng xuất sắc
// hãy in ra danh hiệu của từng thí sinh
// Em bé dễ thương nên tự làm
// Chỉ search kiến thức cơ bản không search lời giải nha IU IU
