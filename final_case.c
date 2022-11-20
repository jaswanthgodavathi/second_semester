/*
    CASE STUDY TOPIC : A STAR EXPLORER

    PROBLEM STATEMENT : THE PROBLEM STATEMENT IS TO DESIGN A ROBOTIC BRAIN THAT TELLS A GIVEN ROBOT HOW TO
    AVOID OBSTACLES WHILE NAVIGATING FROM A FIXED STARTING POSITION TO A FIXED DESTINATION POSITION
    IN AN NxN MATRIX BASED ROOM AVOIDING THE OBSTACLES COVERING THE CELLS MATRIX-BASED ROOM AVOIDING
    THE OBSTACLES COVERING THE CELLS OF A MATRIX THAT SHOULD BE RANDOMLY ASSIGNED IN THE ROOM
    BEFORE THE ROBOT STARTS MOVING

    TEAM MEMBERS :

    CB.EN.U4CSE21312 - GANESHKARAN M
    CB.EN.U4CSE21366 - V RAMYA PRIYADARSHINI
    CB.EN.U4ECE21369 - YAKKALA SAI SUPRAJA
    CB.EN.U4CSE21370 - YASHWANTHRAM K A
    CB.EN.U4CSE21322 - JASWANTH GODAVARTHI

    PRESENTATION DAY : 28-06-2022
*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

// FUNCTION FOR CREATING ARRAY
void Creating_array(int n, int array[], int array_ob[], int array_des[])
{
    int i, j, size = -1; // DECLARING THE MATRIX
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
        {
            size = size + 1;
            array[size] = size + 11;
            array_des[size] = 2;
            array_ob[size] = 2;
        }
    }
}
//	FUCTION FOR DISPLAYING THE ARRAY
void Display_array(int Array[], int n)
{
    
    int size = -1, i, j;
    printf("===================================\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            size = size + 1;
            // printf("%d",size);   cross check
            printf("%d \t", Array[size]);
        }
        printf("\n");
    }
    printf("===================================");
    printf("\n");
}

void Create_ob(int array_ob[], int array_des[], int obs, int n)
{
    printf("\n");
    for (int loop = 0; loop < obs; loop++)
    {
        int obsv;

        // GETTING THE VALUE OF INDIVIDUAL OBSTACLE

        do
        {
            printf("ENTER OBSTACLE %d : ", loop + 1);
            scanf("%d", &obsv);

            do
            { // TO CHECK IF THE STARTING POINT IS AN OBSTACLE
                if (obsv == 11)
                {
                    printf("\nSORRY THE STARTING POINT CANNOT BE AN OBSTACLE : ");
                    printf("\nENTER OBSTACLE %d : ", loop + 1);
                    scanf("%d", &obsv);
                }
            } while (obsv == 11);

        } while ((obsv < 11) || (obsv > n * n + 10)); // "DO WHILE" CHECK FOR LESS THAN 11 AND GREATER THAN N SQUARE

        // STORING THE VALUES OF OBSTACLES IN BOTH OBSTACLE AND DESTINATION ARRAY

        array_ob[obsv - 11] = 99;
        array_des[obsv - 11] = 99;
    }
}

void Destination_array(int array[], int array_des[], int array_val[], int des, int n)
{
    int m, loop, loop1, a, indexdes, rowdes, columndes;
    m = n;
    int size = -1;
    for (loop = 1; loop <= n; loop++)
    {
        size = size + 1;
        for (loop1 = 1; loop1 <= m; loop1++)
        {
            // printf("%d",size);
            if (array[size] == des)
            {
                // printf("\nis going");
                array_des[size] = 3;
                indexdes = size;
                columndes = loop1;
                rowdes = loop;
            }
            if (loop1 != m)
            {
                size += 1;
            }
        }
    }
    if (des > (n * n) + 10 || des < 11)
    {
        printf("SORRY! DESTINATION GIVEN OUT OF MATRIX");
        a = 0;
    }
    else
    {
        a = 1;
    }
    array_val[0] = indexdes;
    //  ARRAY4[0] = INDEX OF DESTINATION
    array_val[1] = columndes;
    //  ARRAY4[1] = COLUMN OF DESTINATION
    array_val[2] = rowdes;
    //  ARRAY4[2] = ROW OF DESTINATION
    array_val[3] = a;
    //  CONDITION TO RUN FURTHER PROGRAM

    /*//CROSS CHECK CASES
    printf("%d\n",array_val[0]);
    printf("%d\n",array_val[1]);
    printf("%d\n",array_val[2]);
    printf("%d\n",array_val[3]);// */
}

void General_cases(int array_des[], int array_ob[], int array_val[], int n)
{
    int b, rods, colds, ids;
    rods = array_val[2];
    colds = array_val[1];
    ids = array_val[0];
    b = 0;
    if (array_des[1] == 99 && array_des[n] == 99)
    {
        printf("SORRY THE INITIAL POINT HAS BEEN BLOCKED BY BOTH SIDES BY OBSTACLES(RIGHT AND BELOW).");
        b = 1;
    }
    else
    { // worked
        if (array_des[ids] == array_des[n * n - 1])
        {
            if (array_des[ids - 1] == 99 && array_des[ids - n] == 99)
            {
                printf("SORRY THE DESTINATION POINT HAS BEEN BLOCKED BY BOTH SIDES BY OBSTACLES(LEFT AND TOP).");
                b = 1;
            }
        }
        else
        { // worked
            if (colds == n && ids == n - 1)
            {
                if (array_des[ids - 1] == 99 && array_des[ids + n] == 99)
                {
                    printf("SORRY THE DESTINATION POINT HAS BEEN BLOCKED BY BOTH SIDES BY OBSTACLES(LEFT AND DOWN).");
                    b = 1;
                }
            }
            else
            { // worked
                if (rods == n && ids == (n * n) - n)
                {
                    if (array_des[ids + 1] == 99 && array_des[ids - n] == 99)
                    {
                        printf("SORRY THE DESTINATION POINT HAS BEEN BLOCKED BY BOTH SIDES BY OBSTACLES(RIGHT AND TOP).");
                        b = 1;
                    }
                }
                else
                { // worked
                    if ((ids > n * n - n + 1) && ids < (n * n - 1))
                    {
                        if (array_des[ids - 1] == 99 && array_des[ids - n] == 99 && array_des[ids + 1] == 99)
                        {
                            printf("SORRY THE DESTINATION POINT HAS BEEN BLOCKED THREE SIDES BY OBSTACLES.");
                            b = 1;
                        }
                    }
                    else
                    { // worked
                        if ((ids < n - 1) && (ids > 0))
                        {
                            if (array_des[ids - 1] == 99 && array_des[ids + n] == 99 && array_des[ids + 1] == 99)
                            {
                                printf("SORRY THE DESTINATION POINT HAS BEEN BLOCKED THREE SIDES BY OBSTACLES.");
                                b = 1;
                            }
                        }
                        else
                        { // worked
                            if (colds == 1 && (ids > 0) && (ids < (n * n) - n))
                            {
                                if (array_des[ids + 1] == 99 && array_des[ids - n] == 99 && array_des[ids + n] == 99)
                                {
                                    printf("SORRY THE DESTINATION POINT HAS BEEN BLOCKED THREE SIDES BY OBSTACLES.");
                                    b = 1;
                                }
                            }
                            else
                            { // worked
                                if ((rods > 1 && rods < n) && (colds > 1) && (colds < n))
                                {
                                    if (array_des[ids + 1] == 99 && array_des[ids - 1] == 99 && array_des[ids + n] == 99 && array_des[ids - n] == 99)
                                    {
                                        printf("SORRY THE DESTINATION POINT HAS BEEN BLOCKED FOUR SIDES BY OBSTACLES.");
                                        b = 1;
                                    }
                                }
                                else
                                { // worked
                                    if (colds == n && ids > n && ids < (n * n) - 1)
                                    {
                                        if (array_des[ids + n] == 99 && array_des[ids - 1] == 99 && array_des[ids - n] == 99)
                                        {
                                            printf("SORRY THE DESTINATION POINT HAS BEEN BLOCKED THREE SIDES BY OBSTACLES.");
                                            b = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    array_val[3] = b;
}
void Complex_general_cases(int array_des[], int array_ob[], int array_val[], int n)
{
    int val = 0, xl = n, yl = 0, zl = 0, al, bl = 1, loop2, count, c, d, ids, loop, a;
    ids = array_val[0];
    array_des[ids] = 11;

    // CHECK FOR DIAGONAL
    for (loop = 1; loop <= n; loop++)
    {
        if (array_des[xl + yl - zl - 1] == 99)
        { // checking for the diagonal elements to be obstacle or not
            al = 0;
            val += 1;
            for (loop2 = 1; loop2 <= n - loop; loop2++)
            {
                al += 1;
                if (array_des[xl + yl - zl - al - 1] == array_des[ids])
                { // 5+0-0-1-1= 3
                    bl = 0;
                }
            }
            // printf("THE VALUE OF VAL %d",val);
            // printf("\n%d\n",bl);
            if (val == n && bl != 0)
            {
                FILE *ptr;
                char ch;
                ptr = fopen("blocked.txt", "r");
                do
                {
                    ch = fgetc(ptr);
                    printf("%c", ch);
                } while (ch != EOF);
                fclose(ptr);
                printf("\n");
                array_val[3] = 1;
                array_des[0]=11;
            }
        }
        zl += 1;
        yl += n;
    }
    // CHECK FOR COLUMN
    if (array_val[3] != 1)
    {
        c = 0;
        for (loop = 1; loop <= n - 1; loop++)
        {
            count = 0;
            for (loop2 = loop; loop2 <= n * n - 1; loop2 += n)
            {
                if (array_ob[loop2] == 99)
                {
                    count += 1;
                }
            }
            if (count == n)
            {
                d = 0;
                a = 0;
                for (loop2 = loop; loop2 <= n * n - 1; loop2 += n)
                {
                    if (ids < loop2 && ids >= a)
                    {
                        c = 1;
                    }
                    else
                    {
                        d += 1;
                    }
                    a += n;
                }
                if (c != 1 && d == n)
                {
                    FILE *ptr;
                    char ch;
                    ptr = fopen("blocked.txt", "r");
                    do
                    {
                        ch = fgetc(ptr);
                        printf("%c", ch);
                    } while (ch != EOF);
                    fclose(ptr);
                    printf("\n");
                    array_val[3] = 1;
                    loop = n;
                    array_des[0]=11;
                }
            }
        }
    }

    // CHECK FOR ROW
    if (array_val[3] != 1)
    {
        for (loop = 0; loop <= (n * n) - 1; loop += n)
        {
            c = 0;
            for (loop2 = loop; loop2 <= loop + n - 1; loop2++)
            {
                if (array_ob[loop2] == 99)
                {
                    c += 1;
                }
            }
            if (c == n)
            {
                loop2 -= n + 1;
                if (ids < loop2)
                {
                    continue;
                }
                else
                {
                    FILE *ptr;
                    char ch;
                    ptr = fopen("blocked.txt", "r");
                    do
                    {
                        ch = fgetc(ptr);
                        printf("%c", ch);
                    } while (ch != EOF);
                    fclose(ptr);
                    printf("\n");
                    array_val[3] = 1;
                    array_des[0]=11;
                }
            }
        }
    }
}

void Path(int array_val[], int array_des[], int obs, int n)
{

    // PATH FINDING

    int t, rd1 = 0, cd1 = 0, rd2, cd2, rods, colds, ids, c, loop, loop2;
    rods = array_val[2];
    colds = array_val[1];
    ids = array_val[0];

    if (rods > colds)
        c = -1;
    else
        c = -n;

    t = -1;
    for (loop = 0; loop <= n * n - 1; loop++)
    {
        if (rods > colds)
        {
            if (0 == ids)
            {
                if (t < 0)
                {
                    printf("BINGO! FOUND YOUR PATH\n");
                    t = 1;
                }
            }
            else
            {
                cd1 += 1;
                c += 1;
                if (c < n * n)
                {
                    if (array_des[c] == 99)
                    {
                        if (c < n)
                        {
                            int cl;
                            cl = c;
                            while (cl % n != 0)
                            {
                                if (array_des[cl - 1] == 11)
                                {
                                    array_des[cl - 1] = 2;
                                    cl -= 1l;
                                }
                            }
                            c += n - 1;
                            colds -= 1;
                        }
                        else
                        {
                            int cl;
                            cl = c;
                            while (cl % n != 0)
                            {
                                if (array_des[cl - 1] == 11)
                                {
                                    array_des[cl - 1] = 2;
                                    cl -= 1;
                                }
                            }
                            c = c - n - 1;
                            colds -= 1;
                        }
                    }
                    array_des[c] = 11;
                }
            }
            if (cd1 == colds)
            {
                colds = rods + colds + 1;
            }
        }
        else
        {
            if (c == ids || c - n == ids)
            {
                if (t < 0)
                {
                    printf("BINGO! FOUND YOUR PATH\n");
                    t = 1;
                }
            }
            else
            {
                rd1 += 1;
                c += n;
                if (c < n * n)
                {
                    if (array_des[c] == 99)
                    {
                        if (array_des[c - n + 1] != 99)
                        {
                            c = c - n + 1;
                            rd1 -= 1;
                        }
                    }
                    array_des[c] = 11;
                }
            }
            if (rd1 == rods)
            {
                rods += colds;
            }
        }
    }
    array_des[ids] = 11;
}

int main()
{
    printf("\n \t\t\t\t\t A STAR EXPLORER");
    printf("\n \t\t\t\t\t ***************");
    // USING STRUCTURES
    struct main_var
    {
        int n;
        int i;
        int j;
    };
    struct main_var var;

    // GETTING THE VALUES AND DOING A "DO WHILE" CHECK

    do
    {
        printf("\nENTER THE SIZE OF THE NxN MATRIX : ");
        scanf("%d", &var.n);
    } while (var.n < 2);

    int array[var.n * var.n];
    int array_ob[var.n * var.n];  // DECLARING THE MATRIX FOR STORING THE OBSTACLES
    int array_des[var.n * var.n]; // DECLARING THE MATRIX FOR STORING THE DESTINATION ONE

    Creating_array(var.n, array, array_ob, array_des);
    printf("\nTHIS IS THE %d*%d MATRIX :\n", var.n, var.n);
    Display_array(array, var.n);

    // GETTING THE TOTAL NUMBER OF OBSTACLES AND A "DO WHILE" CHECK

    int obs;
    printf("\n");
    do
    {
        printf("ENTER THE TOTAL NUMBER OF OBSTACLES : ");
        scanf("%d", &obs);
    } while (obs < 0 || obs > var.n);

    Create_ob(array_ob, array_des, obs, var.n);
    // Display_array(array_ob,var.n);   //check if the elements are stored properly

    // GETTING INPUT FOF DESTINATION

    int des;
    int *desp;
    desp = &des;
    printf("ENTER THE DESTINATION : ");
    scanf("%d", desp);
    printf("\n");
    // CHECKING CONDITIONS FOR DESTINATION

    while (*desp <= 11 || *desp > ((var.n * var.n) + 11))
    {
        printf("SORRY.. DESTINATION CANNOT BE OUT OF THE MATRIX : ");
        scanf("%d", desp);
    }
    for (var.i = 0; var.i <= var.n * var.n - 1; var.i++)
    {
        if (array_ob[var.i] == 99 && var.i + 11 == *desp)
        {
            printf("SORRY.. DESTINATION CANNOT HAVE AN OBSTACLE : ");
            scanf("%d", desp);
            while (*desp <= 11 || *desp > ((var.n * var.n) + 10))
            {
                printf("SORRY.. DESTINATION CANNOT BE OUT OF THE MATRIX : ");
                scanf("%d", desp);
            }
        }
    }
    int array_val[4];

    Destination_array(array, array_des, array_val, des, var.n);
    General_cases(array_des, array_ob, array_val, var.n);
    if (array_val[3] != 1)
    {
        Complex_general_cases(array_des, array_ob, array_val, var.n);
        if (array_val[3] != 1)
            Path(array_val, array_des, obs, var.n);
    }
    printf("THIS IS THE FINAL DESTINATION MATRIX :\n");
    Display_array(array_des, var.n);
    printf("\n \t\t\t\t\t THANK YOU ");
    printf("\n \t\t\t\t\t *********");
    printf("\n");

}



