#include <iostream>
#include <stdlib.h> //for Clearing screen using system("cls")
#include <ctime>    // Required for time related operations
#include <fstream>  // for FILE handling
#include <string>
using namespace std;

//=============================================  P   r   o   t   o   t   y   p   e   s   =================================
void menu(string&);
void arrChoice1(int& formalJACKETARRAY_SIZE, string*& formalJacketsArr);
void arrChoice2(int& casualJACKETarrsize, string*& casualJacketsArr);
void arrChoice3(int& casualSHIRTSarrsize, string*& casualShirtsArr);
void arrChoice4(int& casualPANTSarrsize, string*& casualPantsArr);
void arrChoice5(int& formalPANTSarrsize, string*& formalPantsArr);
void arrChoice6(int& casualWINTERPANTSarrsize, string*& casualWinterPantsArr);
void arrChoice7(int& casualSHOESarrsize, string*& casualShoesArr);
void arrChoice8(int& formalSHOESarrsize, string*& formalShoesArr);
void arrChoice9(int& formalSHIRTSarrsize, string*& formalShirtsArr);
void arrChoice10(int& formalSWEATERSarrsize, string*& formalSweatersArr);
void arrChoice11(int& casualSWEATERSarrsize, string*& casualSweatersArr);
void arrChoice12(int& lightUPPERSarrsize, string*& lightUppersArr);
void arrChoice13(int& ACCESSORIESarrsize, string*& accessoriesArr);

/*  =====================                 M   A    I    N        (  F   u   n   c   t   i   o    n   )                    =====================    */
int main()
{
    ofstream HISTORY("HISTORY_Record.txt", ios::app);

    int formalJACKETARRAY_SIZE = 2;
    string* formalJackets = new string[formalJACKETARRAY_SIZE]{ "Overcoat", "Blazer" };

    int casualJACKETARRAY_SIZE = 5;
    string* casualJackets = new string[casualJACKETARRAY_SIZE]{ "Hoodie", "Bomber", "Biker Jacket", "Fleece Jacket", "Puffer jacket" };

    int lightUppersARRAY_SIZE = 3;
    string* lightUppers = new string[lightUppersARRAY_SIZE]{ "Flannel", "Overshirt", "Shacket" };

    int casualShirtsARRAY_SIZE = 5;
    string* casualShirts = new string[casualShirtsARRAY_SIZE]{ "Simple T-shirt", "Graphic Tee", "Pattern Shirt", "White T Shirt", "Blue T-Shirt" };

    int formalShirtsARRAY_SIZE = 4;
    string* formalShirts = new string[formalShirtsARRAY_SIZE]{ "White Oxford Shirt", "Light blue Oxford Shirt", "Black Dress Shirt", "Navy Shirt" };

    int formalSweatersARRAY_SIZE = 5;
    string* formalSweaters = new string[formalSweatersARRAY_SIZE]{ "Mock neck", "Turtle neck", "Crew neck", "Quarter Zip", "Half zip" };

    int casualSweatersARRAY_SIZE = 3;
    string* casualSweaters = new string[casualSweatersARRAY_SIZE]{ "Cardigan", "Knit sweater", "Grey Sweatshirt" };

    int casualPantsARRAY_SIZE = 5;
    string* casualPants = new string[casualPantsARRAY_SIZE]{ "Jeans", "Linen Pants", "Smart trousers", "Sweatpants", "Track Pants" };

    int casualWinterPantsARRAY_SIZE = 4;
    string* casualWinterPants = new string[casualWinterPantsARRAY_SIZE]{ "Jeans", "Smart trousers", "Sweatpants", "Wool trousers" };

    int formalPantsARRAY_SIZE = 3;
    string* formalPants = new string[formalPantsARRAY_SIZE]{ "Navy Dress Pants", "Black Dress pants", "Beige Cotton Pants" };

    int accessoriesARRAY_SIZE = 6;
    string* accessories = new string[accessoriesARRAY_SIZE]{ "Watch", "Cap", "Necklace/Locket", "Sunglasses", "Bracelet", "Hat" };

    int casualShoesARRAY_SIZE = 4;
    string* casualShoes = new string[casualShoesARRAY_SIZE]{ "Sneakers", "Jogger Shoes", "Sandals", "Slippers" };

    int formalShoesARRAY_SIZE = 3;
    string* formalShoes = new string[formalShoesARRAY_SIZE]{ "Loafers", "Boots", "Dress Shoes" };
    int noOfOutfits;
    int adminIdverify = 1100;

    int wardrobeArrChoice;
    char exitStatus = 'Y', accesoryStatus;
    string nameOfPerson, userName, weather, occassion, pants, topWear, accessory, adminOperation;
    int idOfAdmin;
    int random, timeSeed = time(0);
    srand(timeSeed);

    /*=================================================       A      p      p          starts             H    e    r    e      */
    do
    {

        system("cls");
        menu(userName);

        if (userName == "admin" || userName == "ADMIN" || userName == "Admin")
        {
            cout << "\n\tEnter the Admin ID KEY to get access : ";
            cin >> idOfAdmin;
            cin.ignore();
            while (idOfAdmin != adminIdverify)
            {
                cout << "\tError not the correct ID! Try again : ";
                cin >> idOfAdmin;
                cin.ignore();
            }

            cout << "\tWhat do you want to do ?\n\n\t\t\t\t. ADD ITEMS \n\t\t\t\t. REMOVE ITEMS\n\t\t\t\t. VIEW ITEMS\n\n\t  (Write here) : ";

            getline(cin, adminOperation);
            while (adminOperation != "add" && adminOperation != "ADD" && adminOperation != "Add" && adminOperation != "remove" && adminOperation != "REMOVE" && adminOperation != "Remove" && adminOperation != "view" && adminOperation != "VIEW" && adminOperation != "View")
            {
                cout << "\n\tSorry not the correct Operation! Try again";
                getline(cin, adminOperation);
            }
            if (adminOperation == "Add" || adminOperation == "add")
            {
                cout << "\t1)  Formal JACKETS\n"
                    << "\t2)  Casual Jackets\n"
                    << "\t3)  Casual Shirts\n"
                    << "\t4)  Casual Pants\n"
                    << "\t5)  Formal Pants\n"
                    << "\t6)  Casual Winter Pants\n"
                    << "\t7)  Casual Shoes\n"
                    << "\t8)  Formal Shoes\n"
                    << "\t9)  Formal SHIRTS\n"
                    << "\t10) Formal Sweaters\n"
                    << "\t11) Casual Sweaters\n"
                    << "\t12) Light Uppers\n"
                    << "\t13) Accessories\n"
                    << endl;
                cout << "\tEnter the type of item to add: ";
                cin >> wardrobeArrChoice;
                cin.ignore();
                while (!(wardrobeArrChoice >= 1 && wardrobeArrChoice <= 13))
                {
                    cout << "\n\tWrong Choice of Wardrobe item: Try again : ";
                    cin >> wardrobeArrChoice;
                    cin.ignore();
                }

                if (wardrobeArrChoice == 1)
                {
                    arrChoice1(formalJACKETARRAY_SIZE, formalJackets);
                }
                else if (wardrobeArrChoice == 2)
                {
                    arrChoice2(casualJACKETARRAY_SIZE, casualJackets);
                }
                else if (wardrobeArrChoice == 3)
                {
                    arrChoice3(casualShirtsARRAY_SIZE, casualShirts);
                }

                else if (wardrobeArrChoice == 4)
                {
                    arrChoice4(casualPantsARRAY_SIZE, casualPants);
                }
                else if (wardrobeArrChoice == 5)

                {
                    arrChoice5(formalPantsARRAY_SIZE, formalPants);
                }
                else if (wardrobeArrChoice == 6)
                {
                    arrChoice6(casualWinterPantsARRAY_SIZE, casualWinterPants);
                }
                else if (wardrobeArrChoice == 7)
                {
                    arrChoice7(casualShoesARRAY_SIZE, casualShoes);
                }
                else if (wardrobeArrChoice == 8)
                {
                    arrChoice8(formalShoesARRAY_SIZE, formalShoes);
                }
                else if (wardrobeArrChoice == 9)
                {
                    arrChoice9(formalShirtsARRAY_SIZE, formalShirts);
                }
                else if (wardrobeArrChoice == 10)
                {
                    arrChoice10(formalSweatersARRAY_SIZE, formalSweaters);
                }
                else if (wardrobeArrChoice == 11)
                {
                    arrChoice11(casualSweatersARRAY_SIZE, casualSweaters);
                }
                else if (wardrobeArrChoice == 12)
                {
                    arrChoice12(lightUppersARRAY_SIZE, lightUppers);
                }
                else if (wardrobeArrChoice == 13)
                {
                    arrChoice13(accessoriesARRAY_SIZE, accessories);
                }
            }
            else if (adminOperation == "remove" || adminOperation == "REMOVE" || adminOperation == "Remove")
            {
                cout << "\n\t1)  Formal JACKETS\n"
                    << "\t2)  Casual Shirts\n"
                    << "\t3)  Casual Pants\n"
                    << "\t4)  Formal Pants\n"
                    << "\t5)  Casual Winter Pants\n"
                    << "\t6)  Casual Shoes\n"
                    << "\t7)  Formal Shoes\n"
                    << "\t8)  Formal SHIRTS\n"
                    << "\t9)  Casual Jackets\n"
                    << "\t10) Formal Sweaters\n"
                    << "\t11) Casual Sweaters\n"
                    << "\t12) Light Uppers\n"
                    << "\t13) Accessories\n"
                    << endl;
                string thingRemoved;
                cout << "\tEnter the type of list to remove the item from: ";
                cin >> wardrobeArrChoice;
                cin.ignore();
                if (wardrobeArrChoice == 1)
                {
                    cout << "\tThere are " << formalJACKETARRAY_SIZE << " items in your Formal Jacket collection which are : \n";

                    for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
                    {
                        cout << "\t* " << formalJackets[i] << endl;
                    }

                    bool found;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;

                        for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
                        {
                            if (thingRemoved == formalJackets[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";

                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
                            {
                                if (thingRemoved == formalJackets[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[formalJACKETARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
                        {
                            if (formalJackets[i] == thingRemoved)
                            {

                                continue;
                            }
                            tempArr[temp] = formalJackets[i];
                            temp++;
                        }
                        formalJACKETARRAY_SIZE--;
                        delete[] formalJackets;
                        formalJackets = new string[formalJACKETARRAY_SIZE];
                        for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
                        {
                            formalJackets[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of formal Jackets available now : " << formalJACKETARRAY_SIZE << '\n';
                        for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
                        {
                            cout << "\n - "
                                << formalJackets[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }

                /*============================================================================*/

                /*===============================================================================*/

                else if (wardrobeArrChoice == 2)
                {
                    cout << "\tThere are " << casualShirtsARRAY_SIZE << " items in your Casual Shirts collection which are : \n";

                    for (int i = 0; i < casualShirtsARRAY_SIZE; i++)
                    {
                        cout << "\t* " << casualShirts[i] << endl;
                    }
                    cout << '\n';
                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;

                        for (int i = 0; i < casualShirtsARRAY_SIZE; i++)
                        {
                            if (thingRemoved == casualShirts[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";

                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < casualShirtsARRAY_SIZE; i++)
                            {
                                if (thingRemoved == casualShirts[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[casualShirtsARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < casualShirtsARRAY_SIZE; i++)
                        {
                            if (casualShirts[i] == thingRemoved)
                            {

                                continue;
                            }
                            tempArr[temp] = casualShirts[i];
                            temp++;
                        }
                        casualShirtsARRAY_SIZE--;
                        delete[] casualShirts;
                        casualShirts = new string[casualShirtsARRAY_SIZE];
                        for (int i = 0; i < casualShirtsARRAY_SIZE; i++)
                        {
                            casualShirts[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of Casual Shirts available now : " << casualShirtsARRAY_SIZE << '\n';
                        for (int i = 0; i < casualShirtsARRAY_SIZE; i++)
                        {
                            cout << "\n\t - "
                                << casualShirts[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }

                /*  ==========================================================================     */

                else if (wardrobeArrChoice == 3)
                {
                    cout << "\tThere are " << casualPantsARRAY_SIZE << " items in your Casual Pants collection which are : \n";

                    for (int i = 0; i < casualPantsARRAY_SIZE; i++)
                    {
                        cout << "\t* " << casualPants[i] << endl;
                    }
                    cout << '\n';

                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;

                        for (int i = 0; i < casualPantsARRAY_SIZE; i++)
                        {
                            if (thingRemoved == casualPants[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";

                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < casualPantsARRAY_SIZE; i++)
                            {
                                if (thingRemoved == casualPants[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[casualPantsARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < casualPantsARRAY_SIZE; i++)
                        {
                            if (casualPants[i] == thingRemoved)
                            {

                                continue;
                            }
                            tempArr[temp] = casualPants[i];
                            temp++;
                        }
                        casualPantsARRAY_SIZE--;
                        delete[] casualPants;
                        casualPants = new string[casualPantsARRAY_SIZE];
                        for (int i = 0; i < casualPantsARRAY_SIZE; i++)
                        {
                            casualPants[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of Casual Pants available now : " << casualPantsARRAY_SIZE << '\n';
                        for (int i = 0; i < casualPantsARRAY_SIZE; i++)
                        {
                            cout << "\n\t - "
                                << casualPants[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }

                /* =============================================================================================== */

                else if (wardrobeArrChoice == 4)
                {
                    cout << "\tThere are " << formalPantsARRAY_SIZE << " items in your Formal Pants collection which are : \n";

                    for (int i = 0; i < formalPantsARRAY_SIZE; i++)
                    {
                        cout << "\t* " << formalPants[i] << endl;
                    }
                    cout << '\n';

                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;

                        for (int i = 0; i < formalPantsARRAY_SIZE; i++)
                        {
                            if (thingRemoved == formalPants[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";

                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < formalPantsARRAY_SIZE; i++)
                            {
                                if (thingRemoved == formalPants[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[formalPantsARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < formalPantsARRAY_SIZE; i++)
                        {
                            if (formalPants[i] == thingRemoved)
                            {

                                continue;
                            }
                            tempArr[temp] = formalPants[i];
                            temp++;
                        }
                        formalPantsARRAY_SIZE--;
                        delete[] formalPants;
                        formalPants = new string[formalPantsARRAY_SIZE];
                        for (int i = 0; i < formalPantsARRAY_SIZE; i++)
                        {
                            formalPants[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of FORMAL Pants available now : " << formalPantsARRAY_SIZE << '\n';
                        for (int i = 0; i < formalPantsARRAY_SIZE; i++)
                        {
                            cout << "\n\t - "
                                << formalPants[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }
                else if (wardrobeArrChoice == 5)
                {
                    cout << "\tThere are " << casualWinterPantsARRAY_SIZE << " items in your Casual Winter Pants collection which are : \n";

                    for (int i = 0; i < casualWinterPantsARRAY_SIZE; i++)
                    {
                        cout << "\t* " << casualWinterPants[i] << endl;
                    }
                    cout << '\n';
                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;
                        for (int i = 0; i < casualWinterPantsARRAY_SIZE; i++)
                        {
                            if (thingRemoved == casualWinterPants[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";
                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < casualWinterPantsARRAY_SIZE; i++)
                            {
                                if (thingRemoved == casualWinterPants[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[casualWinterPantsARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < casualWinterPantsARRAY_SIZE; i++)
                        {
                            if (casualWinterPants[i] == thingRemoved)
                            {
                                continue;
                            }
                            tempArr[temp] = casualWinterPants[i];
                            temp++;
                        }
                        casualWinterPantsARRAY_SIZE--;
                        delete[] casualWinterPants;
                        casualWinterPants = new string[casualWinterPantsARRAY_SIZE];
                        for (int i = 0; i < casualWinterPantsARRAY_SIZE; i++)
                        {
                            casualWinterPants[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of Casual Winter Pants available now : " << casualWinterPantsARRAY_SIZE << '\n';
                        for (int i = 0; i < casualWinterPantsARRAY_SIZE; i++)
                        {
                            cout << "\n\t - " << casualWinterPants[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }

                else if (wardrobeArrChoice == 6)
                {
                    cout << "\tThere are " << casualShoesARRAY_SIZE << " items in your Casual Shoes collection which are : \n";

                    for (int i = 0; i < casualShoesARRAY_SIZE; i++)
                    {
                        cout << "\t* " << casualShoes[i] << endl;
                    }
                    cout << '\n';
                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;
                        for (int i = 0; i < casualShoesARRAY_SIZE; i++)
                        {
                            if (thingRemoved == casualShoes[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";
                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < casualShoesARRAY_SIZE; i++)
                            {
                                if (thingRemoved == casualShoes[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[casualShoesARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < casualShoesARRAY_SIZE; i++)
                        {
                            if (casualShoes[i] == thingRemoved)
                            {
                                continue;
                            }
                            tempArr[temp] = casualShoes[i];
                            temp++;
                        }
                        casualShoesARRAY_SIZE--;
                        delete[] casualShoes;
                        casualShoes = new string[casualShoesARRAY_SIZE];
                        for (int i = 0; i < casualShoesARRAY_SIZE; i++)
                        {
                            casualShoes[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of Casual Shoes available now : " << casualShoesARRAY_SIZE << '\n';
                        for (int i = 0; i < casualShoesARRAY_SIZE; i++)
                        {
                            cout << "\n\t - " << casualShoes[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }

                else if (wardrobeArrChoice == 7)
                {
                    cout << "\tThere are " << formalShoesARRAY_SIZE << " items in your Formal Shoes collection which are : \n";

                    for (int i = 0; i < formalShoesARRAY_SIZE; i++)
                    {
                        cout << "\t* " << formalShoes[i] << endl;
                    }
                    cout << '\n';
                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;
                        for (int i = 0; i < formalShoesARRAY_SIZE; i++)
                        {
                            if (thingRemoved == formalShoes[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";
                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < formalShoesARRAY_SIZE; i++)
                            {
                                if (thingRemoved == formalShoes[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[formalShoesARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < formalShoesARRAY_SIZE; i++)
                        {
                            if (formalShoes[i] == thingRemoved)
                            {
                                continue;
                            }
                            tempArr[temp] = formalShoes[i];
                            temp++;
                        }
                        formalShoesARRAY_SIZE--;
                        delete[] formalShoes;
                        formalShoes = new string[formalShoesARRAY_SIZE];
                        for (int i = 0; i < formalShoesARRAY_SIZE; i++)
                        {
                            formalShoes[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of FORMAL Shoes available now : " << formalShoesARRAY_SIZE << '\n';
                        for (int i = 0; i < formalShoesARRAY_SIZE; i++)
                        {
                            cout << "\n\t - " << formalShoes[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }
                else if (wardrobeArrChoice == 8)
                {
                    cout << "\tThere are " << formalShirtsARRAY_SIZE << " items in your Formal Shirt collection which are : \n";

                    for (int i = 0; i < formalShirtsARRAY_SIZE; i++)
                    {
                        cout << "\t* " << formalShirts[i] << endl;
                    }
                    cout << '\n';
                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;
                        for (int i = 0; i < formalShirtsARRAY_SIZE; i++)
                        {
                            if (thingRemoved == formalShirts[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";
                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < formalShirtsARRAY_SIZE; i++)
                            {
                                if (thingRemoved == formalShirts[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[formalShirtsARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < formalShirtsARRAY_SIZE; i++)
                        {
                            if (formalShirts[i] == thingRemoved)
                            {
                                continue;
                            }
                            tempArr[temp] = formalShirts[i];
                            temp++;
                        }
                        formalShirtsARRAY_SIZE--;
                        delete[] formalShirts;
                        formalShirts = new string[formalShirtsARRAY_SIZE];
                        for (int i = 0; i < formalShirtsARRAY_SIZE; i++)
                        {
                            formalShirts[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of Formal Shirts available now : " << formalShirtsARRAY_SIZE << '\n';
                        for (int i = 0; i < formalShirtsARRAY_SIZE; i++)
                        {
                            cout << "\n\t - " << formalShirts[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }
                else if (wardrobeArrChoice == 9)
                {
                    cout << "\tThere are " << casualJACKETARRAY_SIZE << " items in your Casual Jacket collection which are : \n";

                    for (int i = 0; i < casualJACKETARRAY_SIZE; i++)
                    {
                        cout << "\t* " << casualJackets[i] << endl;
                    }
                    cout << '\n';
                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;
                        for (int i = 0; i < casualJACKETARRAY_SIZE; i++)
                        {
                            if (thingRemoved == casualJackets[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";
                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < casualJACKETARRAY_SIZE; i++)
                            {
                                if (thingRemoved == casualJackets[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[casualJACKETARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < casualJACKETARRAY_SIZE; i++)
                        {
                            if (casualJackets[i] == thingRemoved)
                            {
                                continue;
                            }
                            tempArr[temp] = casualJackets[i];
                            temp++;
                        }
                        casualJACKETARRAY_SIZE--;
                        delete[] casualJackets;
                        casualJackets = new string[casualJACKETARRAY_SIZE];
                        for (int i = 0; i < casualJACKETARRAY_SIZE; i++)
                        {
                            casualJackets[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of Casual JACKET available now : " << casualJACKETARRAY_SIZE << '\n';
                        for (int i = 0; i < casualJACKETARRAY_SIZE; i++)
                        {
                            cout << "\n\t - " << casualJackets[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }
                else if (wardrobeArrChoice == 10)
                {
                    cout << "\tThere are " << formalSweatersARRAY_SIZE << " items in your Formal Sweater collection which are : \n";

                    for (int i = 0; i < formalSweatersARRAY_SIZE; i++)
                    {
                        cout << "\t* " << formalSweaters[i] << endl;
                    }
                    cout << '\n';
                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;
                        for (int i = 0; i < formalSweatersARRAY_SIZE; i++)
                        {
                            if (thingRemoved == formalSweaters[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";
                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < formalSweatersARRAY_SIZE; i++)
                            {
                                if (thingRemoved == formalSweaters[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[formalSweatersARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < formalSweatersARRAY_SIZE; i++)
                        {
                            if (formalSweaters[i] == thingRemoved)
                            {
                                continue;
                            }
                            tempArr[temp] = formalSweaters[i];
                            temp++;
                        }
                        formalSweatersARRAY_SIZE--;
                        delete[] formalSweaters;
                        formalSweaters = new string[formalSweatersARRAY_SIZE];
                        for (int i = 0; i < formalSweatersARRAY_SIZE; i++)
                        {
                            formalSweaters[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of Formal Sweaters available now : " << formalSweatersARRAY_SIZE << '\n';
                        for (int i = 0; i < formalSweatersARRAY_SIZE; i++)
                        {
                            cout << "\n\t - " << formalSweaters[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }
                else if (wardrobeArrChoice == 11)
                {
                    cout << "\tThere are " << casualSweatersARRAY_SIZE << " items in your Casual Sweater collection which are : \n";

                    for (int i = 0; i < casualSweatersARRAY_SIZE; i++)
                    {
                        cout << "\t* " << casualSweaters[i] << endl;
                    }
                    cout << '\n';
                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;
                        for (int i = 0; i < casualSweatersARRAY_SIZE; i++)
                        {
                            if (thingRemoved == casualSweaters[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";
                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < casualSweatersARRAY_SIZE; i++)
                            {
                                if (thingRemoved == casualSweaters[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[casualSweatersARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < casualSweatersARRAY_SIZE; i++)
                        {
                            if (casualSweaters[i] == thingRemoved)
                            {
                                continue;
                            }
                            tempArr[temp] = casualSweaters[i];
                            temp++;
                        }
                        casualSweatersARRAY_SIZE--;
                        delete[] casualSweaters;
                        casualSweaters = new string[casualSweatersARRAY_SIZE];
                        for (int i = 0; i < casualSweatersARRAY_SIZE; i++)
                        {
                            casualSweaters[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of Casual Sweaters available now : " << casualSweatersARRAY_SIZE << '\n';
                        for (int i = 0; i < casualSweatersARRAY_SIZE; i++)
                        {
                            cout << "\n\t - " << casualSweaters[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }
                else if (wardrobeArrChoice == 12)
                {
                    cout << "\tThere are " << lightUppersARRAY_SIZE << " items in your UPPER collection which are : \n";
                    for (int i = 0; i < lightUppersARRAY_SIZE; i++)
                    {
                        cout << "\t* " << lightUppers[i] << endl;
                    }
                    cout << '\n';
                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;
                        for (int i = 0; i < lightUppersARRAY_SIZE; i++)
                        {
                            if (thingRemoved == lightUppers[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";
                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < lightUppersARRAY_SIZE; i++)
                            {
                                if (thingRemoved == lightUppers[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[lightUppersARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < lightUppersARRAY_SIZE; i++)
                        {
                            if (lightUppers[i] == thingRemoved)
                            {
                                continue;
                            }
                            tempArr[temp] = lightUppers[i];
                            temp++;
                        }
                        lightUppersARRAY_SIZE--;
                        delete[] lightUppers;
                        lightUppers = new string[lightUppersARRAY_SIZE];
                        for (int i = 0; i < lightUppersARRAY_SIZE; i++)
                        {
                            lightUppers[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of Light Uppers available now : " << lightUppersARRAY_SIZE << '\n';
                        for (int i = 0; i < lightUppersARRAY_SIZE; i++)
                        {
                            cout << "\n\t - " << lightUppers[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }
                else if (wardrobeArrChoice == 13)
                {
                    cout << "\tThere are " << accessoriesARRAY_SIZE << " items in your accessories collection which are :\n";
                    for (int i = 0; i < accessoriesARRAY_SIZE; i++)
                    {
                        cout << "\t* " << accessories[i] << endl;
                    }
                    cout << '\n';
                    bool found = false;
                    cout << "\tEnter the item to remove: ";
                    getline(cin, thingRemoved);
                    while (thingRemoved != "nothing")
                    {
                        found = false;
                        for (int i = 0; i < accessoriesARRAY_SIZE; i++)
                        {
                            if (thingRemoved == accessories[i])
                            {
                                found = true;
                                break;
                            }
                        }
                        while (!found)
                        {
                            cout << '\n' << '\t'
                                << thingRemoved << " is not found. Enter something else again : ";
                            getline(cin, thingRemoved);
                            if (thingRemoved == "nothing")
                            {
                                break;
                            }
                            for (int i = 0; i < accessoriesARRAY_SIZE; i++)
                            {
                                if (thingRemoved == accessories[i])
                                {
                                    found = true;
                                    break;
                                }
                            }
                        }
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                        string* tempArr = new string[accessoriesARRAY_SIZE - 1];
                        int temp = 0;
                        for (int i = 0; i < accessoriesARRAY_SIZE; i++)
                        {
                            if (accessories[i] == thingRemoved)
                            {
                                continue;
                            }
                            tempArr[temp] = accessories[i];
                            temp++;
                        }
                        accessoriesARRAY_SIZE--;
                        delete[] accessories;
                        accessories = new string[accessoriesARRAY_SIZE];
                        for (int i = 0; i < accessoriesARRAY_SIZE; i++)
                        {
                            accessories[i] = tempArr[i];
                        }
                        cout << "\tNumber of Items of Accessories available now : " << accessoriesARRAY_SIZE << '\n';
                        for (int i = 0; i < accessoriesARRAY_SIZE; i++)
                        {
                            cout << "\n\t - " << accessories[i] << " ";
                        }
                        cout << "\n\n\tEnter something : ";
                        getline(cin, thingRemoved);
                        if (thingRemoved == "nothing")
                        {
                            break;
                        }
                    }
                }
            }
            else if (adminOperation == "view" || adminOperation == "VIEW" || adminOperation == "View")
            {
                char viewAgain;
            viewMENU:

                int viewChoice;
                cout << "\n\n- 1)  Formal JACKETS\n"
                    << "- 2)  Casual Jackets\n"
                    << "- 3)  Casual Shirts\n"
                    << "- 4)  Casual Pants\n"
                    << "- 5)  Formal Pants\n"
                    << "- 6)  Casual Winter Pants\n"
                    << "- 7)  Casual Shoes\n"
                    << "- 8)  Formal Shoes\n"
                    << "- 9)  Formal SHIRTS\n"
                    << "- 10) Formal Sweaters\n"
                    << "- 11) Casual Sweaters\n"
                    << "- 12) Light Uppers\n"
                    << "- 13) Accessories\n"
                    << endl;
                cout << "Enter the type of closet to view: ";
                cin >> viewChoice;
                switch (viewChoice)
                {
                case 1:
                {
                    cout << "You currently have  " << formalJACKETARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < formalJACKETARRAY_SIZE - 1; j++)
                        {
                            if (formalJackets[j][0] > formalJackets[j + 1][0])
                            {
                                swap(formalJackets[j], formalJackets[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
                    {
                        cout << " - " << formalJackets[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                case 2:
                {
                    cout << "You currently have  " << casualJACKETARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < casualJACKETARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < casualJACKETARRAY_SIZE - 1; j++)
                        {
                            if (casualJackets[j][0] > casualJackets[j + 1][0])
                            {
                                swap(casualJackets[j], casualJackets[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < casualJACKETARRAY_SIZE; i++)
                    {
                        cout << " - " << casualJackets[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                case 3:
                {
                    cout << "You currently have " << casualShirtsARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < casualShirtsARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < casualShirtsARRAY_SIZE - 1; j++)
                        {
                            if (casualShirts[j][0] > casualShirts[j + 1][0])
                            {
                                swap(casualShirts[j], casualShirts[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < casualShirtsARRAY_SIZE; i++)
                    {
                        cout << " - " << casualShirts[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                case 4:
                {
                    cout << "You currently have " << casualPantsARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < casualPantsARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < casualPantsARRAY_SIZE - 1; j++)
                        {
                            if (casualPants[j][0] > casualPants[j + 1][0])
                            {
                                swap(casualPants[j], casualPants[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < casualPantsARRAY_SIZE; i++)
                    {
                        cout << " - " << casualPants[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                case 5:
                {
                    cout << "You currently have " << formalPantsARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < formalPantsARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < formalPantsARRAY_SIZE - 1; j++)
                        {
                            if (formalPants[j][0] > formalPants[j + 1][0])
                            {
                                swap(formalPants[j], formalPants[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < formalPantsARRAY_SIZE; i++)
                    {
                        cout << " - " << formalPants[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                case 6:
                {
                    cout << "You currently have " << casualWinterPantsARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < casualWinterPantsARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < casualWinterPantsARRAY_SIZE - 1; j++)
                        {
                            if (casualWinterPants[j][0] > casualWinterPants[j + 1][0])
                            {
                                swap(casualWinterPants[j], casualWinterPants[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < casualWinterPantsARRAY_SIZE; i++)
                    {
                        cout << " - " << casualWinterPants[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                case 7:
                {
                    cout << "You currently have " << casualShoesARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < casualShoesARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < casualShoesARRAY_SIZE - 1; j++)
                        {
                            if (casualShoes[j][0] > casualShoes[j + 1][0])
                            {
                                swap(casualShoes[j], casualShoes[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < casualShoesARRAY_SIZE; i++)
                    {
                        cout << " - " << casualShoes[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;

                case 8:
                {
                    cout << "You currently have " << formalShoesARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < formalShoesARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < formalShoesARRAY_SIZE - 1; j++)
                        {
                            if (formalShoes[j][0] > formalShoes[j + 1][0])
                            {
                                swap(formalShoes[j], formalShoes[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < formalShoesARRAY_SIZE; i++)
                    {
                        cout << " - " << formalShoes[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;

                case 9:
                {
                    cout << "You currently have " << formalShirtsARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < formalShirtsARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < formalShirtsARRAY_SIZE - 1; j++)
                        {
                            if (formalShirts[j][0] > formalShirts[j + 1][0])
                            {
                                swap(formalShirts[j], formalShirts[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < formalShirtsARRAY_SIZE; i++)
                    {
                        cout << " - " << formalShirts[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                case 10:
                {
                    cout << "You currently have " << formalSweatersARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < formalSweatersARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < formalSweatersARRAY_SIZE - 1; j++)
                        {
                            if (formalSweaters[j][0] > formalSweaters[j + 1][0])
                            {
                                swap(formalSweaters[j], formalSweaters[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < formalSweatersARRAY_SIZE; i++)
                    {
                        cout << " - " << formalSweaters[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                case 11:
                {
                    cout << "You currently have " << casualSweatersARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < casualSweatersARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < casualSweatersARRAY_SIZE - 1; j++)
                        {
                            if (casualSweaters[j][0] > casualSweaters[j + 1][0])
                            {
                                swap(casualSweaters[j], casualSweaters[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < casualSweatersARRAY_SIZE; i++)
                    {
                        cout << " - " << casualSweaters[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                case 12:
                {
                    cout << "You currently have " << lightUppersARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < lightUppersARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < lightUppersARRAY_SIZE - 1; j++)
                        {
                            if (lightUppers[j][0] > lightUppers[j + 1][0])
                            {
                                swap(lightUppers[j], lightUppers[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < lightUppersARRAY_SIZE; i++)
                    {
                        cout << " - " << lightUppers[i] << endl;
                    }
                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                case 13:
                {
                    cout << "You currently have " << accessoriesARRAY_SIZE << " items in your wardrobe" << endl;
                    for (int i = 0; i < accessoriesARRAY_SIZE; i++)
                    {
                        for (int j = 0; j < accessoriesARRAY_SIZE - 1; j++)
                        {
                            if (accessories[j][0] > accessories[j + 1][0])
                            {
                                swap(accessories[j], accessories[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < accessoriesARRAY_SIZE; i++)
                    {
                        cout << " - " << accessories[i] << endl;
                    }

                    cout << "Want to view something again? (Y/N) : ";
                    cin >> viewAgain;
                    if (viewAgain == 'Y' || viewAgain == 'y')
                    {
                        goto viewMENU;
                    }
                }
                break;
                default:
                    cout << "\nNot correct closet number";
                    break;
                }
            }
        }
        /*==============================================================================================================================================================*/
        else /*=============================================     U        S       E      R      =================================================*/
        {

            cout << "\t\t   Name of the user: ";
            cin >> nameOfPerson;
            while (nameOfPerson != "haider" && nameOfPerson != "HAIDER" && nameOfPerson != "Haider")
            {
                cout << "\t Wrong name. Enter again : ";
                cin >> nameOfPerson;
            }

            cout << "\n\t-------------**** ( Type 'Summer' ) ****--------------- \n";
            cout << "\t-------------**** ( Type 'Winter' ) ****---------------\n";
            cout << "\t-------------**** ( Type 'Spring' ) ****---------------\n";
            cout << "\t-------------**** ( Type 'Fall'   ) ****--------------- \n";
            cout << "\t-------------**** ( Type 'Exit'   ) ****--------------- \n\n";
            cout << "\t\tType here : ";
            cin >> weather;
            while (weather != "Summer" && weather != "Fall" && weather != "fall" && weather != "summer" && weather != "SUMMER" && weather != "WINTER" && weather != "Winter" && weather != "winter" && weather != "FALL" && weather != "SPRING" && weather != "spring" && weather != "Spring" && weather != "exit" &&
                weather != "EXIT" && weather != "Exit")
            {
                cout << "\t\tWrong season input again: ";
                cin >> weather;
            }

            if (weather == "summer" || weather == "Summer" || weather == "SUMMER")
            {
                HISTORY << "\n****************************   SUMMER OUTFITS   *********************************\n";

                cout << "\tAre you going formal or 'casual' ? :   ";
                cin >> occassion;
                while (occassion != "Causal" && occassion != "casual" && occassion != "CASUAL" && occassion != "Formal" && occassion != "FORMAL" && occassion != "formal")
                {
                    cout << "Invalid Ocassion Dress Code. Input again the dress code : ";
                    cin >> occassion;
                }

                if (occassion == "casual" || occassion == "Casual")
                {
                    cout << "\n\tNumber of outfits you wanna generate : ";
                    cin >> noOfOutfits;

                    for (int i = 0; i < noOfOutfits; i++)
                    {
                        cout << "\n  Outfit Recommended #" << i + 1 << "\n";
                        cout << "\t___________________________________\n\n";
                        HISTORY << "\nOutfit Generation Number #" << i + 1 << '\n';

                        random = rand() % casualShirtsARRAY_SIZE;
                        cout << "\t*  " << casualShirts[random] << endl;
                        HISTORY << '\n'
                            << casualShirts[random] << endl;
                        random = rand() % casualPantsARRAY_SIZE;
                        cout << "\t*  " << casualPants[random] << endl;
                        HISTORY << '\n'
                            << casualPants[random] << endl;

                        random = rand() % casualShoesARRAY_SIZE;
                        HISTORY << '\n'
                            << casualShoes[random] << endl;

                        cout << "\t*  " << casualShoes[random] << endl;
                        cout << "\tWanna have some accessories? (Y/N) :  ";
                        cin >> accesoryStatus;
                        while (accesoryStatus != 'y' && accesoryStatus != 'Y' && accesoryStatus != 'N' && accesoryStatus != 'n')
                        {
                            cout << "Wrong input please input again Y/N : ";
                            cin >> accesoryStatus;
                        }

                        if (accesoryStatus == 'y' || accesoryStatus == 'Y')
                        {
                            random = rand() % accessoriesARRAY_SIZE;
                            cout << "\t* Throw on " << accessories[random] << " too\n"
                                << endl;
                            HISTORY << '\n'
                                << accessories[random] << endl;
                        }
                    }
                }
                else if (occassion == "formal" || occassion == "FORMAL" || occassion == "Formal")
                {
                    cout << "\n\tNumber of outfits you wanna generate : ";
                    cin >> noOfOutfits;
                    for (int i = 0; i < noOfOutfits; i++)
                    {
                        cout << "\n\tOutfit Recommended #" << i + 1 << "\n";
                        cout << "\t______________________\n\n";
                        HISTORY << "\nOutfit Generation Number #" << i + 1 << '\n';
                        random = rand() % formalShirtsARRAY_SIZE;
                        cout << "\t*  " << formalShirts[random] << endl;
                        HISTORY << formalShirts[random] << endl;
                        random = rand() % formalPantsARRAY_SIZE;
                        cout << "\t*  " << formalPants[random] << endl;
                        HISTORY << formalPants[random] << '\n';
                        random = rand() % formalShoesARRAY_SIZE;
                        cout << "\t*  " << formalShoes[random] << endl;
                        HISTORY << formalShoes[random] << '\n';
                        cout << "\tWanna have some accessories? (Y/N) :  ";
                        cin >> accesoryStatus;
                        while (accesoryStatus != 'y' && accesoryStatus != 'Y' && accesoryStatus != 'N' && accesoryStatus != 'n')
                        {
                            cout << "Wrong input please input again Y/N : ";
                            cin >> accesoryStatus;
                        }
                        if (accesoryStatus == 'y' || accesoryStatus == 'Y')
                        {
                            cout << "\t* Throw on a Watch too\n\n"
                                << endl;
                            HISTORY << "\nWatch\n";
                        }
                    }
                }
                HISTORY << "\n...........................................\n";
            }

            /*===========================================================================================================================*/

            else if (weather == "winter" || weather == "WINTER" || weather == "Winter")
            {
                HISTORY << "\n****************************   WINTER OUTFITS   *********************************\n";
                cout << "\t Are you going 'formal' or 'casual' ? :  ";
                cin >> occassion;
                while (occassion != "Causal" && occassion != "casual" && occassion != "CASUAL" && occassion != "Formal" && occassion != "FORMAL" && occassion != "formal")
                {
                    cout << "Invalid Ocassion Dress Code. Input again the type of ocassion : \n";
                    cin >> occassion;
                }

                if (occassion == "casual" || occassion == "Casual")
                {
                    cout << "\tHow many outfits do you wanna have? : ";
                    cin >> noOfOutfits;

                    while (noOfOutfits < 0)
                    {
                        cout << "Invalid. Enter again : ";
                        cin >> noOfOutfits;
                    }

                    for (int i = 0; i < noOfOutfits; i++)
                    {
                        cout << "\n\tOutfit Recommended #" << i + 1 << "\n";
                        cout << "\t______________________\n\n";
                        HISTORY << "\nOutfit Generation Number #" << i + 1 << '\n';
                        random = rand() % casualJACKETARRAY_SIZE;
                        cout << "\t*  " << casualJackets[random] << endl;
                        HISTORY << casualJackets[random] << endl;
                        random = rand() % casualSweatersARRAY_SIZE;
                        cout << "\t*  " << casualSweaters[random] << endl;
                        HISTORY << casualSweaters[random] << endl;
                        random = rand() % casualWinterPantsARRAY_SIZE;
                        cout << "\t*  " << casualWinterPants[random] << endl;
                        HISTORY << casualWinterPants[random] << endl;
                        random = rand() % casualShoesARRAY_SIZE;
                        cout << "\t*  " << casualShoes[random] << endl;
                        HISTORY << casualShoes[random] << endl;
                        cout << "\tWanna have some accessories? (Y/N) :  ";
                        cin >> accesoryStatus;
                        while (accesoryStatus != 'y' && accesoryStatus != 'Y' && accesoryStatus != 'N' && accesoryStatus != 'n')
                        {
                            cout << "Wrong input please input again Y/N : ";
                            cin >> accesoryStatus;
                        }
                        if (accesoryStatus == 'y' || accesoryStatus == 'Y')
                        {
                            random = rand() % accessoriesARRAY_SIZE;
                            cout << "\t* Throw on " << accessories[random] << " too\n"
                                << endl;
                            HISTORY << accessories[random] << endl;
                        }
                    }
                }
                else if (occassion == "formal" || occassion == "FORMAL" || occassion == "Formal")
                {
                    cout << "\tHow many outfits do you wanna generate : ";
                    cin >> noOfOutfits;

                    for (int i = 0; i < noOfOutfits; i++)
                    {
                        cout << "\n\tOutfit Recommended #" << i + 1 << "\n";
                        cout << "\t______________________\n\n";
                        HISTORY << "\nOutfit Generation Number #" << i + 1 << '\n';
                        random = rand() % formalSweatersARRAY_SIZE;
                        cout << "\t*  " << formalSweaters[random] << endl;
                        HISTORY << formalSweaters[random] << '\n';
                        random = rand() % formalJACKETARRAY_SIZE;
                        cout << "\t*  " << formalJackets[random] << endl;
                        HISTORY << formalJackets[random] << '\n';
                        random = rand() % formalPantsARRAY_SIZE;
                        cout << "\t*  " << formalPants[random] << endl;
                        HISTORY << formalPants[random] << '\n';
                        random = rand() % formalShoesARRAY_SIZE;
                        cout << "\t*  " << formalShoes[random] << endl;
                        HISTORY << formalShoes[random] << '\n';
                        cout << "\tWanna have some accessories? (Y/N) :  ";
                        cin >> accesoryStatus;
                        while (accesoryStatus != 'y' && accesoryStatus != 'Y' && accesoryStatus != 'N' && accesoryStatus != 'n')
                        {
                            cout << "Wrong input please input again Y/N : ";
                            cin >> accesoryStatus;
                        }
                        if (accesoryStatus == 'y' || accesoryStatus == 'Y')
                        {
                            cout << "\t* Throw on a Watch too\n\n"
                                << endl;
                            HISTORY << "\nWatch\n";
                        }
                    }
                }
                HISTORY << "\n...........................................\n";
            }

            /*===================================================================================================================*/

            else if (weather == "spring" || weather == "SPRING" || weather == "Spring")
            {
                HISTORY << "\n****************************   SPRING OUTFITS   *********************************\n";
                cout << "\t Are you going 'formal' or 'casual' ? :  ";
                cin >> occassion;
                while (occassion != "Causal" && occassion != "casual" && occassion != "CASUAL" && occassion != "Formal" && occassion != "FORMAL" && occassion != "formal")
                {
                    cout << "invalid Ocassion Dress Code. Input again the type of ocassion\n";
                    cin >> occassion;
                }
                if (occassion == "casual" || occassion == "Casual")
                {
                    cout << "\tHow many outfits do you wanna have? : ";
                    cin >> noOfOutfits;

                    while (noOfOutfits < 0)
                    {
                        cout << "Invalid.Enter again : ";
                        cin >> noOfOutfits;
                    }
                    for (int i = 0; i < noOfOutfits; i++)
                    {
                        cout << "\n\tOutfit Recommended #" << i + 1 << "\n";
                        cout << "\t______________________\n\n";
                        HISTORY << "\nOutfit Generation Number #" << i + 1 << '\n';
                        random = rand() % casualShirtsARRAY_SIZE;
                        cout << "\t*  " << casualShirts[random] << endl;
                        HISTORY << casualShirts[random] << '\n';
                        random = rand() % casualPantsARRAY_SIZE;
                        cout << "\t*  " << casualPants[random] << endl;
                        HISTORY << casualPants[random] << '\n';
                        random = rand() % casualShoesARRAY_SIZE;
                        cout << "\t*  " << casualShoes[random] << endl;
                        HISTORY << casualShoes[random] << '\n';
                        cout << "\tWanna have some accessories? (Y/N) :  ";
                        cin >> accesoryStatus;
                        while (accesoryStatus != 'y' && accesoryStatus != 'Y' && accesoryStatus != 'N' && accesoryStatus != 'n')
                        {
                            cout << "Wrong input please input again Y/N : ";
                            cin >> accesoryStatus;
                        }
                        if (accesoryStatus == 'y' || accesoryStatus == 'Y')
                        {
                            random = rand() % accessoriesARRAY_SIZE;
                            cout << "\t* Throw on " << accessories[random] << " too\n"
                                << endl;
                            HISTORY << '\n'
                                << accessories[random] << '\n';
                        }
                    }
                }
                else if (occassion == "formal" || occassion == "FORMAL" || occassion == "Formal")
                {
                    cout << "\tHow many outfits do you wanna have? : ";
                    cin >> noOfOutfits;
                    while (noOfOutfits < 0)
                    {
                        cout << "Invalid.Enter again : ";
                        cin >> noOfOutfits;
                    }
                    for (int i = 0; i < noOfOutfits; i++)
                    {
                        cout << "\n\tOutfit Recommended #" << i + 1 << "\n";
                        cout << "\t__________________________\n\n";
                        HISTORY << "\nOutfit Generation Number #" << i + 1 << '\n';

                        random = rand() % formalShirtsARRAY_SIZE;
                        cout << "\t*  " << formalShirts[random] << endl;
                        HISTORY << formalShirts[random] << endl;
                        random = rand() % formalPantsARRAY_SIZE;
                        cout << "\t*  " << formalPants[random] << endl;
                        HISTORY << formalPants[random] << endl;
                        random = rand() % formalShoesARRAY_SIZE;
                        cout << "\t*  " << formalShoes[random] << endl;
                        HISTORY << formalShoes[random] << endl;
                        cout << "\tWanna have some accessories? (Y/N) :  ";
                        cin >> accesoryStatus;
                        while (accesoryStatus != 'y' && accesoryStatus != 'Y' && accesoryStatus != 'N' && accesoryStatus != 'n')
                        {
                            cout << "Wrong input please input again Y/N : ";
                            cin >> accesoryStatus;
                        }
                        if (accesoryStatus == 'y' || accesoryStatus == 'Y')
                        {
                            cout << "\t*  Throw on a Watch too\n\n"
                                << endl;
                        }
                    }
                }
                HISTORY << "\n...........................................\n";
            }
            /*====================================================================================*/
            else if (weather == "fall" || weather == "Fall" || weather == "FALL")
            {
                HISTORY << "\n******************   FALL OUTFITS    *********************";

                cout << "\t Are you going 'formal' or 'casual' ? :  ";
                cin >> occassion;
                while (occassion != "Causal" && occassion != "casual" && occassion != "CASUAL" && occassion != "Formal" && occassion != "FORMAL" && occassion != "formal")
                {
                    cout << "invalid Ocassion Dress Code. INput again the type of ocassion\n";
                    cin >> occassion;
                }
                if (occassion == "casual" || occassion == "Casual")
                {
                    cout << "\tHow many outfits do you wanna have? : ";
                    cin >> noOfOutfits;
                    while (noOfOutfits < 0)
                    {
                        cout << "Invalid.Enter again : ";
                        cin >> noOfOutfits;
                    }
                    for (int i = 0; i < noOfOutfits; i++)
                    {
                        cout << "\n\tOutfit Recommended #" << i + 1 << "\n";
                        cout << "\t______________________\n\n";
                        HISTORY << "\nOutfit Generation Number #" << i + 1 << '\n';
                        random = rand() % lightUppersARRAY_SIZE;
                        cout << "\t*  " << lightUppers[random] << endl;
                        HISTORY << lightUppers[random] << '\n';
                        random = rand() % casualPantsARRAY_SIZE;
                        cout << "\t*  " << casualPants[random] << endl;
                        HISTORY << casualPants[random] << '\n';
                        random = rand() % casualShoesARRAY_SIZE;
                        cout << "\t*  " << casualShoes[random] << endl;
                        HISTORY << casualShoes[random] << '\n';
                        cout << "\tWanna have some accessories? (Y/N) :  ";
                        cin >> accesoryStatus;
                        while (accesoryStatus != 'y' && accesoryStatus != 'Y' && accesoryStatus != 'N' && accesoryStatus != 'n')
                        {
                            cout << "Wrong input please input again Y/N : ";
                            cin >> accesoryStatus;
                        }
                        if (accesoryStatus == 'y' || accesoryStatus == 'Y')
                        {
                            random = rand() % accessoriesARRAY_SIZE;
                            cout << "\t*  Throw on " << accessories[random] << " too\n"
                                << endl;
                        }
                    }
                }
                else if (occassion == "formal" || occassion == "FORMAL" || occassion == "Formal")
                {
                    cout << "\tHow many outfits do you wanna have? : ";
                    cin >> noOfOutfits;
                    while (noOfOutfits < 0)
                    {
                        cout << "Invalid.Enter again : ";
                        cin >> noOfOutfits;
                    }
                    for (int i = 0; i < noOfOutfits; i++)
                    {
                        cout << "\n\tOutfit Recommended #" << i + 1 << "\n";
                        cout << "\t______________________\n\n";
                        HISTORY << "\nOutfit Generation Number #" << i + 1 << '\n';

                        random = rand() % formalShirtsARRAY_SIZE;
                        cout << "\t*  " << formalShirts[random] << endl;
                        HISTORY << formalShirts[random] << '\n';

                        random = rand() % formalPantsARRAY_SIZE;
                        cout << "\t*  " << formalPants[random] << endl;
                        HISTORY << formalPants[random] << '\n';
                        random = rand() % formalShoesARRAY_SIZE;
                        cout << "\t*  " << formalShoes[random] << endl;
                        HISTORY << formalShoes[random] << '\n';
                        cout << "\tWanna have some accessories? (Y/N) :  ";
                        cin >> accesoryStatus;
                        while (accesoryStatus != 'y' && accesoryStatus != 'Y' && accesoryStatus != 'N' && accesoryStatus != 'n')
                        {
                            cout << "Wrong input please input again Y/N : ";
                            cin >> accesoryStatus;
                        }
                        if (accesoryStatus == 'y' || accesoryStatus == 'Y')
                        {
                            cout << "\t* " << " Throw on a Watch too\n\n"
                                << endl;
                            HISTORY << "\nWatch" << '\n';
                        }
                    }
                }
                HISTORY << "...........................................................\n";
            }
            else
            {
                cout << "\n\n**************** Come again. Don't forget to see your history!  *******************\n\n\n";
                return 0;
            }
        }
        cout << "\n\tWanna go to the Main Menu (Y/N)  : ";
        cin >> exitStatus;
        while (exitStatus != 'n' && exitStatus != 'N' && exitStatus != 'y' && exitStatus != 'Y')
        {
            cout << "Not correct option for MENU choice. Try again : ";
        }

    } while (exitStatus == 'Y' || exitStatus == 'y');
    cout << "\n\n\t\t**************** Come again. Don't forget to see your history!  *******************\n\n\n";
    HISTORY.close();
}

/* ========================   F   u   n   c   t   i   o   n   s   ============================================*/

void menu(string& userName)
{
    cout << "\t__________________________________________________________________________________________\n\n";
    cout << "\t               (    OUTFIT RECOMMENDATION APP    )                         \n\n";
    cout << "\t                 LET'S MAKE CUSTOM OUTFITS FOR YOU                             \n\n";
    cout << "\t___________________________________________________________________________________________\n\n";

    cout << "\t                 Enter Admin for managing your Wardrobe                              \n\n";
    cout << "\t                Enter User for starting to make Outfits                              \n\n";
    cout << "\t......................................................................................\n\n";
    cout << "\tWho is this?  (admin/user) : ";
    cin >> userName;
    while (userName != "user" && userName != "admin" && userName != "USER" && userName != "ADMIN" && userName != "User" && userName != "Admin")
    {
        cout << "\tOops! Wrong input. Input again : ";
        cin >> userName;
    }
}
void arrChoice1(int& formalJACKETARRAY_SIZE, string*& formalJacketsArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[formalJACKETARRAY_SIZE];
        for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
        {
            tempArr[i] = formalJacketsArr[i];
        }
        formalJACKETARRAY_SIZE++;
        delete[] formalJacketsArr;
        formalJacketsArr = new string[formalJACKETARRAY_SIZE];
        for (int i = 0; i < formalJACKETARRAY_SIZE - 1; i++)
        {
            formalJacketsArr[i] = tempArr[i];
        }
        formalJacketsArr[formalJACKETARRAY_SIZE - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
        {
            for (int j = 0; j < formalJACKETARRAY_SIZE - 1; j++)
            {
                if (formalJacketsArr[j][0] > formalJacketsArr[j + 1][0])
                {
                    swap(formalJacketsArr[j], formalJacketsArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < formalJACKETARRAY_SIZE; i++)
        {
            cout << "\n - "
                << formalJacketsArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}
void arrChoice2(int& casualJACKETarrsize, string*& casualJacketsArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[casualJACKETarrsize];
        for (int i = 0; i < casualJACKETarrsize; i++)
        {
            tempArr[i] = casualJacketsArr[i];
        }
        casualJACKETarrsize++;
        delete[] casualJacketsArr;
        casualJacketsArr = new string[casualJACKETarrsize];
        for (int i = 0; i < casualJACKETarrsize - 1; i++)
        {
            casualJacketsArr[i] = tempArr[i];
        }
        casualJacketsArr[casualJACKETarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < casualJACKETarrsize; i++)
        {
            for (int j = 0; j < casualJACKETarrsize - 1; j++)
            {
                if (casualJacketsArr[j][0] > casualJacketsArr[j + 1][0])
                {
                    swap(casualJacketsArr[j], casualJacketsArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < casualJACKETarrsize; i++)
        {
            cout << "\n - "
                << casualJacketsArr[i] << " ";
        }
        cout << "\nEnter something to add again : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}
void arrChoice3(int& casualSHIRTSarrsize, string*& casualShirtsArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[casualSHIRTSarrsize];
        for (int i = 0; i < casualSHIRTSarrsize; i++)
        {
            tempArr[i] = casualShirtsArr[i];
        }
        casualSHIRTSarrsize++;
        delete[] casualShirtsArr;
        casualShirtsArr = new string[casualSHIRTSarrsize];
        for (int i = 0; i < casualSHIRTSarrsize - 1; i++)
        {
            casualShirtsArr[i] = tempArr[i];
        }
        casualShirtsArr[casualSHIRTSarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < casualSHIRTSarrsize; i++)
        {
            for (int j = 0; j < casualSHIRTSarrsize - 1; j++)
            {
                if (casualShirtsArr[j][0] > casualShirtsArr[j + 1][0])
                {
                    swap(casualShirtsArr[j], casualShirtsArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < casualSHIRTSarrsize; i++)
        {
            cout << "\n - " << casualShirtsArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}
void arrChoice4(int& casualPANTSarrsize, string*& casualPantsArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[casualPANTSarrsize];
        for (int i = 0; i < casualPANTSarrsize; i++)
        {
            tempArr[i] = casualPantsArr[i];
        }
        casualPANTSarrsize++;
        delete[] casualPantsArr;
        casualPantsArr = new string[casualPANTSarrsize];
        for (int i = 0; i < casualPANTSarrsize - 1; i++)
        {
            casualPantsArr[i] = tempArr[i];
        }
        casualPantsArr[casualPANTSarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < casualPANTSarrsize; i++)
        {
            for (int j = 0; j < casualPANTSarrsize - 1; j++)
            {
                if (casualPantsArr[j][0] > casualPantsArr[j + 1][0])
                {
                    swap(casualPantsArr[j], casualPantsArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < casualPANTSarrsize; i++)
        {
            cout << "\n - " << casualPantsArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}
void arrChoice5(int& formalPANTSarrsize, string*& formalPantsArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[formalPANTSarrsize];
        for (int i = 0; i < formalPANTSarrsize; i++)
        {
            tempArr[i] = formalPantsArr[i];
        }
        formalPANTSarrsize++;
        delete[] formalPantsArr;
        formalPantsArr = new string[formalPANTSarrsize];
        for (int i = 0; i < formalPANTSarrsize - 1; i++)
        {
            formalPantsArr[i] = tempArr[i];
        }
        formalPantsArr[formalPANTSarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < formalPANTSarrsize; i++)
        {
            for (int j = 0; j < formalPANTSarrsize - 1; j++)
            {
                if (formalPantsArr[j][0] > formalPantsArr[j + 1][0])
                {
                    swap(formalPantsArr[j], formalPantsArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < formalPANTSarrsize; i++)
        {
            cout << "\n - " << formalPantsArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}
void arrChoice6(int& casualWINTERPANTSarrsize, string*& casualWinterPantsArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[casualWINTERPANTSarrsize];
        for (int i = 0; i < casualWINTERPANTSarrsize; i++)
        {
            tempArr[i] = casualWinterPantsArr[i];
        }
        casualWINTERPANTSarrsize++;
        delete[] casualWinterPantsArr;
        casualWinterPantsArr = new string[casualWINTERPANTSarrsize];
        for (int i = 0; i < casualWINTERPANTSarrsize - 1; i++)
        {
            casualWinterPantsArr[i] = tempArr[i];
        }
        casualWinterPantsArr[casualWINTERPANTSarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < casualWINTERPANTSarrsize; i++)
        {
            for (int j = 0; j < casualWINTERPANTSarrsize - 1; j++)
            {
                if (casualWinterPantsArr[j][0] > casualWinterPantsArr[j + 1][0])
                {
                    swap(casualWinterPantsArr[j], casualWinterPantsArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < casualWINTERPANTSarrsize; i++)
        {
            cout << "\n - " << casualWinterPantsArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}
void arrChoice7(int& casualSHOESarrsize, string*& casualShoesArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[casualSHOESarrsize];
        for (int i = 0; i < casualSHOESarrsize; i++)
        {
            tempArr[i] = casualShoesArr[i];
        }
        casualSHOESarrsize++;
        delete[] casualShoesArr;
        casualShoesArr = new string[casualSHOESarrsize];
        for (int i = 0; i < casualSHOESarrsize - 1; i++)
        {
            casualShoesArr[i] = tempArr[i];
        }
        casualShoesArr[casualSHOESarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < casualSHOESarrsize; i++)
        {
            for (int j = 0; j < casualSHOESarrsize - 1; j++)
            {
                if (casualShoesArr[j][0] > casualShoesArr[j + 1][0])
                {
                    swap(casualShoesArr[j], casualShoesArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < casualSHOESarrsize; i++)
        {
            cout << "\n - " << casualShoesArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}
void arrChoice8(int& formalSHOESarrsize, string*& formalShoesArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[formalSHOESarrsize];
        for (int i = 0; i < formalSHOESarrsize; i++)
        {
            tempArr[i] = formalShoesArr[i];
        }
        formalSHOESarrsize++;
        delete[] formalShoesArr;
        formalShoesArr = new string[formalSHOESarrsize];
        for (int i = 0; i < formalSHOESarrsize - 1; i++)
        {
            formalShoesArr[i] = tempArr[i];
        }
        formalShoesArr[formalSHOESarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < formalSHOESarrsize; i++)
        {
            for (int j = 0; j < formalSHOESarrsize - 1; j++)
            {
                if (formalShoesArr[j][0] > formalShoesArr[j + 1][0])
                {
                    swap(formalShoesArr[j], formalShoesArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < formalSHOESarrsize; i++)
        {
            cout << "\n - " << formalShoesArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}
void arrChoice9(int& formalSHIRTSarrsize, string*& formalShirtsArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[formalSHIRTSarrsize];
        for (int i = 0; i < formalSHIRTSarrsize; i++)
        {
            tempArr[i] = formalShirtsArr[i];
        }
        formalSHIRTSarrsize++;
        delete[] formalShirtsArr;
        formalShirtsArr = new string[formalSHIRTSarrsize];
        for (int i = 0; i < formalSHIRTSarrsize - 1; i++)
        {
            formalShirtsArr[i] = tempArr[i];
        }
        formalShirtsArr[formalSHIRTSarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < formalSHIRTSarrsize; i++)
        {
            for (int j = 0; j < formalSHIRTSarrsize - 1; j++)
            {
                if (formalShirtsArr[j][0] > formalShirtsArr[j + 1][0])
                {
                    swap(formalShirtsArr[j], formalShirtsArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < formalSHIRTSarrsize; i++)
        {
            cout << "\n - " << formalShirtsArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}

void arrChoice10(int& formalSWEATERSarrsize, string*& formalSweatersArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[formalSWEATERSarrsize];
        for (int i = 0; i < formalSWEATERSarrsize; i++)
        {
            tempArr[i] = formalSweatersArr[i];
        }
        formalSWEATERSarrsize++;
        delete[] formalSweatersArr;
        formalSweatersArr = new string[formalSWEATERSarrsize];
        for (int i = 0; i < formalSWEATERSarrsize - 1; i++)
        {
            formalSweatersArr[i] = tempArr[i];
        }
        formalSweatersArr[formalSWEATERSarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < formalSWEATERSarrsize; i++)
        {
            for (int j = 0; j < formalSWEATERSarrsize - 1; j++)
            {
                if (formalSweatersArr[j][0] > formalSweatersArr[j + 1][0])
                {
                    swap(formalSweatersArr[j], formalSweatersArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < formalSWEATERSarrsize; i++)
        {
            cout << "\n - " << formalSweatersArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}

void arrChoice11(int& casualSWEATERSarrsize, string*& casualSweatersArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[casualSWEATERSarrsize];
        for (int i = 0; i < casualSWEATERSarrsize; i++)
        {
            tempArr[i] = casualSweatersArr[i];
        }
        casualSWEATERSarrsize++;
        delete[] casualSweatersArr;
        casualSweatersArr = new string[casualSWEATERSarrsize];
        for (int i = 0; i < casualSWEATERSarrsize - 1; i++)
        {
            casualSweatersArr[i] = tempArr[i];
        }
        casualSweatersArr[casualSWEATERSarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < casualSWEATERSarrsize; i++)
        {
            for (int j = 0; j < casualSWEATERSarrsize - 1; j++)
            {
                if (casualSweatersArr[j][0] > casualSweatersArr[j + 1][0])
                {
                    swap(casualSweatersArr[j], casualSweatersArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < casualSWEATERSarrsize; i++)
        {
            cout << "\n - " << casualSweatersArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}
void arrChoice12(int& lightUPPERSarrsize, string*& lightUppersArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[lightUPPERSarrsize];
        for (int i = 0; i < lightUPPERSarrsize; i++)
        {
            tempArr[i] = lightUppersArr[i];
        }
        lightUPPERSarrsize++;
        delete[] lightUppersArr;
        lightUppersArr = new string[lightUPPERSarrsize];
        for (int i = 0; i < lightUPPERSarrsize - 1; i++)
        {
            lightUppersArr[i] = tempArr[i];
        }
        lightUppersArr[lightUPPERSarrsize - 1] = thingAdded;
        cout << "Your new collection is : \n";
        for (int i = 0; i < lightUPPERSarrsize; i++)
        {
            for (int j = 0; j < lightUPPERSarrsize - 1; j++)
            {
                if (lightUppersArr[j][0] > lightUppersArr[j + 1][0])
                {
                    swap(lightUppersArr[j], lightUppersArr[j + 1]);
                }
            }
        }
        for (int i = 0; i < lightUPPERSarrsize; i++)
        {
            cout << "\n - " << lightUppersArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}
void arrChoice13(int& ACCESSORIESarrsize, string*& accessoriesArr)
{
    string thingAdded;
    cout << "\tEnter the item to add: ";
    getline(cin, thingAdded);
    while (thingAdded != "nothing")
    {
        string* tempArr = new string[ACCESSORIESarrsize];
        for (int i = 0; i < ACCESSORIESarrsize; i++)
        {
            tempArr[i] = accessoriesArr[i];
        }
        ACCESSORIESarrsize++;
        delete[] accessoriesArr;
        accessoriesArr = new string[ACCESSORIESarrsize];
        for (int i = 0; i < ACCESSORIESarrsize - 1; i++)
        {
            accessoriesArr[i] = tempArr[i];
        }
        accessoriesArr[ACCESSORIESarrsize - 1] = thingAdded;
        for (int i = 0; i < ACCESSORIESarrsize; i++)
        {
            for (int j = 0; j < ACCESSORIESarrsize - 1; j++)
            {
                if (accessoriesArr[j][0] > accessoriesArr[j + 1][0])
                {
                    swap(accessoriesArr[j], accessoriesArr[j + 1]);
                }
            }
        }

        cout << "Your new collection is : \n";
        for (int i = 0; i < ACCESSORIESarrsize; i++)
        {
            cout << "\n - " << accessoriesArr[i] << " ";
        }
        cout << "\n\nEnter something : ";
        getline(cin, thingAdded);
        delete[] tempArr;
    }
}