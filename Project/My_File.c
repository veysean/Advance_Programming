#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Information[1000];
float Price = 0;
int Qty = 0;
int Count = 0;
float TopPrice = 0;
//===================================================
// Read DATA from file
void ReadData(char Content[])
{
    FILE *file;
    file = fopen("Customer_Billing_Data.txt", "r");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        exit(0);
    }
    int i = 0;
    while (1)
    {
        char c = fgetc(file);
        if (c == EOF)
        {
            break;
        }
        Content[i] = c;
        i++;
    }
    fclose(file);
    printf("%s\n", Content);
}

//===================================================
// Write DATA to file
void WriteData()
{
    FILE *WriteDataToFile;
    WriteDataToFile = fopen("Customer_Billing_Data.txt", "a");

    if (WriteDataToFile == NULL)
    {
        printf("Unable to open the file.\n");
        exit(0);
    }

    fputs(Information, WriteDataToFile);
    fclose(WriteDataToFile);
}

//===================================================
// Select types of items
void SelectTypesDrink()
{
    char DrinkType;
    int Drink;
    Price = 0;
    Count = 0;
    printf("Select type of drink : ");
    scanf(" %c", &DrinkType);
    switch (DrinkType)
    {
    case 'F':
        printf("1.Milk Foam Green Tea\n");
        printf("2.Milk Foam Oolong Tea\n");
        printf("3.Milk Foam Winter Melon\n");
        printf("Select Drink : ");
        scanf(" %d", &Drink);
        switch (Drink)
        {
        case 1:
            Price = 3;
            strcpy(Information, "\tMilk Foam Green Tea\t");
            break;
        case 2:
            Price = 3;
            strcpy(Information, "\tMilk Foam Oolong Tea\t");
            break;
        case 3:
            Price = 2.8;
            strcpy(Information, "\tMilk Foam Winter Melon\t");
            break;
        default:
            printf("Unavalable!!!\n");
            break;
        }
        Count++;
        WriteData();
        break;
    case 'T':
        printf("1.Pearl Milk Tea\n");
        printf("2.Strawberry Milk Tea\n");
        printf("3.Black Milk Tae\n");
        printf("Select Drink : ");
        scanf("%d", &Drink);
        switch (Drink)
        {
        case 1:
            Price = 3.2;
            strcpy(Information, "\tPearl Milk Tea\t");
            break;
        case 2:
            Price = 3;
            strcpy(Information, "\tStrawberry Milk Tea\t");
            break;
        case 3:
            Price = 3;
            strcpy(Information, "\tBlack Milk Tae\t");
            break;
        default:
            printf("Unavalable!!!\n");
            break;
        }
        Count++;
        WriteData();
        break;
    case 'C':
        printf("1.Coffee latte\n");
        printf("2.Black Coffee\n");
        printf("3.Milk Coffee\n");
        printf("Select Drink : ");
        scanf("%d", &Drink);
        switch (Drink)
        {
        case 1:
            Price = 2.5;
            strcpy(Information, "\tCoffee latte\t");
            break;
        case 2:
            Price = 1.9;
            strcpy(Information, "\tBlack Coffee\t");
            break;
        case 3:
            Price = 2.75;
            strcpy(Information, "\tMilk Coffee\t");
            break;
        default:
            printf("Unavalable!!!\n");
            break;
        }
        Count++;
        WriteData();
        break;
    case 'S':
        printf("1.Milk Foam Taro\n");
        printf("2.Matcha Marble\n");
        printf("3.Strawberry Marble\n");
        printf("Select Drink : ");
        scanf("%d", &Drink);
        switch (Drink)
        {
        case 1:
            Price = 3.25;
            strcpy(Information, "\tMilk Foam Taro\t");
            break;
        case 2:
            Price = 3;
            strcpy(Information, "\tMatcha Marble\t");
            break;
        case 3:
            Price = 3.5;
            strcpy(Information, "\tStrawberry Marble\t");
            break;
        default:
            printf("Unavalable!!!\n");
            break;
        }
        Count++;
        WriteData();
        break;
    case 'B':
        printf("1. Brown Sugar Fresh Milk\n");
        printf("2. Brown Sugar Milk Tea\n");
        printf("3. Milk Foam Brown Sugar Oolong\n");
        printf("Select Drink : ");
        scanf("%d", &Drink);
        switch (Drink)
        {
        case 1:
            Price = 3.15;
            strcpy(Information, "\tBrown Sugar Fresh Milk\t");
            break;
        case 2:
            Price = 3;
            strcpy(Information, "\tBrown Sugar Milk Tea\t");
            break;
        case 3:
            Price = 3.5;
            strcpy(Information, "\tMilk Foam Brown Sugar Oolong\t");
            break;
        default:
            printf("Unavalable!!!\n");
            break;
        }
        Count++;
        WriteData();
        break;
    default:
        printf("There is no types of drink in the shop.\n");
        break;
    }
}

//===================================================
// Choose topping
void ChooseTopping()
{
    int Topping;
    float TopPrice = 0;
    printf("\n1.Pearl\n2.Coconut Jelly\n3. Milk Foam\n4. Kanten Jelly\n");
    printf("Select Topping : ");
    scanf(" %d", &Topping);
    switch (Topping)
    {
    case 1:
        TopPrice = 0.5;
        strcpy(Information, "Pearl\t");
        break;
    case 2:
        TopPrice = 0.7;
        strcpy(Information, "Coconut Jelly\t");
        break;
    case 3:
        TopPrice = 0.6;
        strcpy(Information, "Milk Foam\t");
        break;
    case 4:
        TopPrice = 0.5;
        strcpy(Information, "Kanten Jelly\t");
        break;
    default:
        printf("Unavialable!!\n");
        break;
    }
    WriteData();
}

//===================================================
// Level Sugar
void LevelSugar()
{
    char Level[3];
    printf("Enter level of sugar : ");
    scanf("%s", &Level);
    strcpy(Information, Level);
    WriteData();
}

//===================================================
// Input name
void InputName()
{
    char Name[20];
    printf("Enter customer name here : ");
    scanf("%s", &Name);
    strcpy(Information, Name);
    WriteData();
}

//===================================================
// Quantity
void Quantity()
{
    Qty = 0;
    char Str[5];
    printf("Insert the quanity : ");
    scanf("%d", &Qty);
    sprintf(Str, "%d", Qty);
    strcpy(Information, Str);
    WriteData();
}

//===================================================
// Check for discount
void CheckDiscount()
{
}

//===================================================
// Make payment
void SubTotal()
{
    float Sub = 0;
    char Str[10] = "";
    Sub = (Price + TopPrice) * Qty;
    printf("%.2f", Sub);
    sprintf(Str, "%.2f", Sub);
    strcpy(Information, Str);
    WriteData();
}

//===================================================
// Exit program
void ExitProgram()
{
    strcpy(Information, "\n");
    WriteData();
    exit(0);
}

//===================================================
// Edit selection
void EditSelection()
{
}

int main()
{
    char Content[1000];
    int option;
    ReadData(Content);
    InputName();
    do
    {
        printf("\n");
        printf("1. Select types of drink and drink.\n");
        printf("2. Choose topping\n");
        printf("3. Select level of sugar.\n");
        printf("4. Insert quantity.\n");
        printf("5. Edit selection.\n");
        printf("6. Check for any discount.\n");
        printf("7. Make payment (Cash only).\n");
        printf("8. End of program.\n");

        printf("Type number of your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            SelectTypesDrink();
            break;
        case 2:
            ChooseTopping();
            break;
        case 3:
            LevelSugar();
            break;
        case 4:
            Quantity();
            break;
        case 5:
            SubTotal();
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            ExitProgram();
            break;
        default:
            printf("Invalid option in the list !!!\n");
        }
    } while (option != 8);

    return 0;
}