#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("I see the player you mean.\n");
        break;
    case 2:printf("PLAYERNAME?\n");
        break;
    case 3:printf("Yes. Take care. It has reached a higher level now. It can read our thoughts.\n");
    break;
    case 4:printf("That doesn't matter. It thinks we are part of the game.\n");
    break;
    case 5:printf("I like this player. It played well. It did not give up.\n");
    break;
    case 6:printf("It is reading our thoughts as though they were words on a screen.\n");
    break;
    case 7:printf("That is how it chooses to imagine many things, when it is deep in the dream of a game.\n");
    break;
    case 8:printf("Words make a wonderful interface. Very flexible.\n");
    default:
        break;
    }
    return 0;
}
