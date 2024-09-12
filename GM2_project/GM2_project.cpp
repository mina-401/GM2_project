// GM2_project.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Test(int Value0, int Value1, int Value2, int Value3)
{
    int* Ptr = &Value0;
    int TestValue0 = *Ptr;

    int TestValue1 = *(Ptr + 2);
    int TestValue2 = *(Ptr + 4);
    int TestValue3 = *(Ptr + 6);

}

int main()
{
    Test(10, 20, 30, 40);
}
