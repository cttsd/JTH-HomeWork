#include "Player.h"

void Player::Shoot(ConsoleScreen* Screen)
{
    int4 BulletPos = GetPos();


    char BulletChar = '-';


    int4 BulletMove = Left;


    while (!Screen->IsScreenOut(BulletPos))
    {
        system("cls");
        BulletPos += BulletMove;

        Screen->SetPixel(BulletPos, BulletChar);
        Screen->Print();

        Sleep(100);
        Screen->SetPixel(BulletPos, ' ');
    }



}


void Player::Input(ConsoleScreen* Screen)
{
    char Select = (char)_getch();

    int4 MovePos = { 0, 0 };

    switch (Select)
    {

    case 'a':

        MovePos = Left;

        break;

    case 'q':
        Shoot(Screen);
        break;



    case 'd':
        MovePos = Right;

        //if (false == _Sreen->IsScreenOut(GetPos() + Right))
        //{
        //    AddPos(Right);
        //}

        break;
    case 'w':
        MovePos = Up;

        //if (false == _Sreen->IsScreenOut(GetPos() + Up))
        //{
        //    AddPos(Up);
        //}
        break;
    case 's':
        MovePos = Down;
        break;
    default:
        break;
    }
    int4 NewPos = GetPos() + MovePos;

    if (!Screen->IsScreenOut(NewPos) && Screen->GetPixel(NewPos) != '0')
    {
        SetPos(NewPos);

    }

}