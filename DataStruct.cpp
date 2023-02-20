#define _CRT_SECURE_NO_WARNINGS // 문자열 관련 함수 보안 경고로 인한 컴파일 에러 방지
#include <iostream>

using namespace std;

// 문자열 관련 함수 (strcpy)
class Person
{
public :
    const char * name;
    char nickName [20];
};

int main()
{
    // 문자열 복사 함수
    /*
    Person person;

    // 상수 지시 포인터
    person.name = "Kim";
    person.name = "Lee";

    // 8 byte
    // [F][A][K][E][R][\0][\0][]
    char temp [20] = "FAKERQRQRRQRQR";
    char temp1[20] = "Kang";

    // 배열의 이름은 배열의 시작 주소를 의미합니다.
    
    // 포인터 상수
    // [F][A][K][E][R][\0] <- [F][A][K][E][R]
    // strcpy
    // 첫 번째 매개변수 : 복사받을 문자 배열
    // 두 번째 매개변수 : 복사시킬 문자 배열
    strcpy(person.nickName, temp);
    strcpy(person.nickName, temp1);

    cout << "person.nickName : " << person.nickName << endl;
    */  

    // 선택 정렬
    // 주어진 리스트 중에서 최솟값을 찾은 다음 그 값을 맨 앞에
    // 위치한 값과 교체하는 정렬입니다.

    int array[5] = { 15, 3, 11, 1, 4 };

    for (int i = 0; i < 5; i++)
    {
        // 1. 최솟값이 되는 기준 인덱스 설정
        int minIndex = i;

        for (int j = i; j < 5; j++)
        {
            if (array[minIndex] > array[j])
            {
                minIndex = j;
            }
        }

        swap(array[minIndex], array[i]);
    }

    for (const int & element : array)
    {
        cout << element << endl;
    }

    // 시간 복잡도 O(n^2)

    return 0;
}