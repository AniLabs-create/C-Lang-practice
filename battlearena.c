
#include <stdio.h>
#include <string.h>

struct Player
{
    char name[100];
    int health;
    int skills;
    int lives;
};

struct Sword
{
    int damage;
    int force;
    int selfhealing;
    int life;
};

struct Magic
{
    int damage;
    int force;
    int cooling_period;
};

struct Monster
{
    char name[100];
    int health;
    int damage;
};

int main()
{
    struct Player player;
    struct Sword sword;
    struct Magic magic;
    struct Monster monster;

    struct Player *p;
    struct Sword *sw;
    struct Magic *m;
    struct Monster *mon;

    int choice;
    int turn = 1;
    int magic_cooldown = 0;
    int sword_broken = 0;

    // Sword properties
    sword.damage = 25;
    sword.force = 7;
    sword.selfhealing = 250;
    sword.life = 100;

    // Magic properties
    magic.damage = 40;
    magic.force = 10;
    magic.cooling_period = 3;

    // Monster properties
    strcpy(monster.name, "Dark Knight");
    monster.health = 150;
    monster.damage = 20;

    // Assigning structure addresses to pointers
    p = &player;
    sw = &sword;
    m = &magic;
    mon = &monster;

    // Player setup
    printf("====================================\n");
    printf("          BATTLE ARENA              \n");
    printf("====================================\n");

    printf("You have 2 lives to complete this game!\n");

    printf("\nEnter your hero name: ");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = '\0';

    p->health = 100;
    p->skills = 5;
    p->lives = 2;

    printf("\nWelcome %s! You are the hero of this world.\n", p->name);

    printf("\n========== YOUR STATS ==============\n");
    printf("Health: %d\n", p->health);
    printf("Skills: %d\n", p->skills);
    printf("Lives: %d\n", p->lives);

    printf("\n========== INVENTORY ===============\n");
    printf("Sword Damage: %d\n", sw->damage);
    printf("Sword Durability: %d\n", sw->life);
    printf("Sword Self Healing Time: %d\n", sw->selfhealing);

    printf("\nMagic Damage: %d\n", m->damage);
    printf("Magic Force: %d\n", m->force);
    printf("Magic Cooldown: %d turns\n", m->cooling_period);

    printf("\n====================================\n");
    printf("          BOSS BATTLE               \n");
    printf("====================================\n");

    printf("\nA wild %s has appeared!\n", mon->name);

    // Battle loop
    while(mon->health > 0 && p->lives > 0)
    {
        printf("\n\n========== TURN %d ================\n", turn);

        printf("\n%s Health: %d\n", p->name, p->health);
        printf("%s Health: %d\n", mon->name, mon->health);

        printf("\nChoose your attack:\n");
        printf("1. Sword Attack\n");
        printf("2. Magic Attack\n");
        printf("3. Inspect Inventory\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            if(sword_broken == 1)
            {
                printf("\nYour sword is broken! Choose another attack.\n");
                continue;
            }

            mon->health = mon->health - sw->damage;

            printf("\nYou attacked using your sword!\n");
            printf("Monster received %d damage.\n", sw->damage);
        }

        else if(choice == 2)
        {
            if(magic_cooldown > 0)
            {
                printf("\nMagic is recharging! %d turns remaining.\n", magic_cooldown);
                continue;
            }

            mon->health = mon->health - m->damage;

            magic_cooldown = m->cooling_period;

            printf("\nYou used MAGIC!\n");
            printf("Monster received %d damage.\n", m->damage);
        }

        else if(choice == 3)
        {
            printf("\n========== INVENTORY ==============\n");
            printf("Sword Damage: %d\n", sw->damage);
            printf("Sword Durability: %d\n", sw->life);
            printf("Magic Damage: %d\n", m->damage);
            printf("Magic Cooldown: %d\n", magic_cooldown);

            continue;
        }

        else
        {
            printf("\nInvalid choice! Try again.\n");
            continue;
        }

        // Check if monster is defeated
        if(mon->health <= 0)
        {
            printf("\nYou defeated the %s!\n", mon->name);
            break;
        }

        // Monster attacks the player
        printf("\nThe monster attacks you!\n");

        p->health = p->health - mon->damage;

        printf("You received %d damage!\n", mon->damage);

        // Check player health
        if(p->health <= 0)
        {
            p->lives--;

            if(p->lives > 0)
            {
                printf("\nYou lost a life!\n");
                printf("You have %d lives remaining.\n", p->lives);

                p->health = 100;
                printf("Your health has been restored to 100!\n");
            }
            else
            {
                printf("\nYou have lost all your lives!\n");
                break;
            }
        }

        // Reduce magic cooldown
        if(magic_cooldown > 0)
        {
            magic_cooldown--;
        }

        turn++;
    }

    // Final result
    printf("\n\n====================================\n");
    printf("             GAME OVER              \n");
    printf("====================================\n");

    if(mon->health <= 0)
    {
        printf("CONGRATULATIONS %s!\n", p->name);
        printf("You have saved the world!\n");
    }
    else
    {
        printf("GAME OVER %s!\n", p->name);
        printf("The world has fallen into darkness.\n");
    }

    printf("\nFinal Player Health: %d\n", p->health);
    printf("Remaining Lives: %d\n", p->lives);
    printf("Monster Health: %d\n", mon->health);

    return 0;
}
