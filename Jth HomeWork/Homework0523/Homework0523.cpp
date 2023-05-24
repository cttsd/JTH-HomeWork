// Homework0523.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
class Test
{
public:
    // 100
    int A;
    // ?????
    __int64 B;
    char C;
    char D;
    short E; // 2바이트 정수입니다.
    int F;
};

// 1 2 4 8

class Player
{
public:
    int HP =100;
    int ATT =10;
};

//  [H][H][H][H] [A][A][A][A] //  [T][T][T][T]
void TestFunction(Player _Newplayer, int _Test)
{
    // 이것도 확인해보세요.
    size_t Size = sizeof(Player);

    Player NewPlayer;

    __int64 AddressH = (__int64)&NewPlayer.HP;

    __int64 AddressK = (__int64)&NewPlayer.ATT;

    __int64 AddressG = (__int64)&_Test;


    std::cout << "H: " << AddressH << std::endl;
    std::cout << "K: " << AddressK << std::endl;
    std::cout << "G: " << AddressG << std::endl;
}

int main()
{
    size_t Size = sizeof(Test);
    // [A][A][A][A][][][][] [B][B][B][B][B][B][B][B] [C][D][E][E][F][F][F][F]

    Test NewTest;

    __int64 AddressA = (__int64)&NewTest.A;

    __int64 AddressB = (__int64)&NewTest.B;

    __int64 AddressC = (__int64)&NewTest.C;

    __int64 AddressD = (__int64)&NewTest.D;

    __int64 AddressE = (__int64)&NewTest.E;

    __int64 AddressF = (__int64)&NewTest.F;

    std::cout << "A: " << AddressA << std::endl;
    std::cout << "B: " << AddressB << std::endl;
    std::cout << "C: " << AddressC << std::endl;
    std::cout << "D: " << AddressD << std::endl;
    std::cout << "E: " << AddressE << std::endl;
    std::cout << "F: " << AddressF << std::endl;
    
    
    
    Player NewPlayer;
    TestFunction(NewPlayer, 20);
}



// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
