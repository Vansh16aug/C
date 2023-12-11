// A tournament was held in LPU. There were 11 players in team. Each team member has scored some runs. Create a structure that contains player id and runs scored by each player. You need to calculate the final score scored by cricket team.

// Input Format

// Input consist of player id and runs scored by each player.

// Constraints

// No. of players in cricket team are 11.

// Output Format

// Display the total score of a team.

// Sample Input 0

// 11
// 1 10
// 2 10
// 3 10
// 4 10
// 5 5
// 6 5
// 7 5
// 8 5
// 9 5
// 10 5
// 11 5
// Sample Output 0

// 75
#include <stdio.h>
struct player
{
    int id;
    int runs;
};
int main()
{
    struct player p[11];
    int n,i,sum=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p[i].id,&p[i].runs);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+p[i].runs;
    }
    printf("%d",sum);
    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct team{
    int pno;
    int pgo;
}s;
int main() {
    struct team s[11];
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&s[i].pno, &s[i].pgo);
    }
    for(i=0;i<n;i++){
        sum=sum+s[i].pgo;
    }
    printf("%d",sum);
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct human{
    int age;
    char fname[50];   
    char lname[50];    
    int class;
};
int main() {
    struct human s1;
        scanf("%d",&s1.age);
        scanf("%s",s1.fname);
        scanf("%s",s1.lname);
        scanf("%d",&s1.class);
     printf("%d %s %s %d", s1.age, s1.fname, s1.lname, s1.class);
    return 0;
}
