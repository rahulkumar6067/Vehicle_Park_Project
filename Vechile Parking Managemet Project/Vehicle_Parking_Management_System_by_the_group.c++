#include <iostream>
#include <map>
using namespace std;
int main()
{
    int name;
    map<int, string> Twowheeler;
    map<int, string> Threewheeler;
    map<int, string> Fourwheeler;
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    int vehicle_id = 0;
    int three_id = 0;
    int four_id = 0;

    while (true)
    {
        cout << "-----Main Menu-----" << endl;
        cout << "1.Name of Two wheeler" << endl;
        cout << "2.List of Two wheeler And cost " << endl;
        cout << "3.Name of Three wheeler" << endl;
        cout << "4.List of Three wheeler And cost " << endl;
        cout << "5.Name of Four wheeler" << endl;
        cout << "6.List of four wheeler and cost" << endl;
        cout << "7.withdraw Two wheeler" << endl;
        cout << "8.withdraw Three wheeler" << endl;
        cout << "9.withdraw Four wheeler" << endl;

        cout << "select Item From Menu" << endl;
        cin >> name;

        switch (name)
        {
        case 1:
        {
            while (true)
            {
                string Two_name;
                char sub_selection;
                cout << "Enter the name of Two wheeler" << endl;
                cin >> Two_name;
                ++count;

                if (Twowheeler.empty())
                {
                    vehicle_id = 1;
                }
                else
                {
                    vehicle_id = vehicle_id + 1;
                }
                Twowheeler[vehicle_id] = Two_name;
                cout << "Do you want to Add more vehicle Press {A} or to go back Press B : " << endl;
                cin >> sub_selection;
                if (sub_selection == 'b')
                {
                    break;
                }
            }
            break;
        }
        case 2:
        {
            cout << "Two wheeler Details : " << endl;
            if (vehicle_id != 0)
            {
                map<int, string>::iterator itr; //  :: is a inheritance
                for (itr = Twowheeler.begin(); itr != Twowheeler.end(); itr++)
                {
                    cout << itr->first << " " << itr->second << endl;
                }
                cout << "you have to pay " << 50 * count << endl;
            }
            else
            {
                cout << "There are no one vehicle Sparked" << endl;
            }

            break;
        }
        case 3:
        {
            while (true)
            {
                string Three_name;
                char sub_selection;
                cout << "Enter the name of Three wheeler" << endl;
                cin >> Three_name;
                ++count1;

                if (Threewheeler.empty())
                {
                    three_id = 1;
                }
                else
                {
                    three_id = three_id + 1;
                }
                Threewheeler[three_id] = Three_name;
                cout << "Do you want to Add more vehicle Press {A} or to go back Press B : " << endl;
                cin >> sub_selection;
                if (sub_selection == 'b')
                {
                    break;
                }
            }
            break;
        }
        case 4:
        {
            cout << "Three wheeler Details : " << endl;
            if (three_id != 0)
            {
                map<int, string>::iterator itr; //  :: is a inheritance
                for (itr = Threewheeler.begin(); itr != Threewheeler.end(); itr++)
                {
                    cout << itr->first << " " << itr->second << endl;
                }
                cout << "you have to pay " << 70 * count1 << endl;
            }
            else
            {
                cout << "There are no one vehicle is parked" << endl;
            }

            break;
        }
        case 5:
        {
            while (true)
            {

                string four_name;
                char sub;
                cout << "Enter the name of four wheeler" << endl;
                cin >> four_name;
                ++count2;

                if (Fourwheeler.empty())
                {
                    four_id = 1;
                }
                else
                {
                    four_id = four_id + 1;
                }
                Fourwheeler[four_id] = four_name;
                cout << "Do you want to Add more vehicle Press {A} or to go back Press B : " << endl;
                cin >> sub;
                if (sub == 'b')
                {
                    break;
                }
            }
            break;
        }
        case 6:
        {
            cout << "Four wheeler Details : " << endl;
            if (four_id != 0)
            {
                map<int, string>::iterator itr; //  :: is a inheritance
                for (itr = Fourwheeler.begin(); itr != Fourwheeler.end(); itr++)
                {
                    cout << itr->first << " " << itr->second << endl;
                }
                cout << "you have to pay " << 100 * count2 << endl;
            }
            else
            {
                cout << "There are no one vehicle is parked" << endl;
            }

            break;
        }
        case 7:
        {
            int two_vid;
            cout << "enter Two wheeler Id" << endl;
            cin >> two_vid;
            if (two_vid == vehicle_id)
            {
                cout << "You can withdraw your " << Twowheeler[two_vid] << endl;
            }
            else
            {
                cout << "Invalid" << endl;
            }
            break;
        }
        case 8:
        {
            int three_vid;
            cout << "enter Three wheeler Id" << endl;
            cin >> three_vid;
            if (three_vid == three_id)
            {
                cout << "You can withdraw your " << Threewheeler[three_vid] << endl;
            }
            else
            {
                cout << "Invalid" << endl;
            }
            break;
        }
        case 9:
        {
            int Four_vid;
            cout << "enter Four wheeler Id" << endl;
            cin >> Four_vid;
            if (Four_vid == four_id)
            {
                cout << "You can withdraw your " << Fourwheeler[Four_vid] << endl;
            }
            else
            {
                cout << "Invalid" << endl;
            }
            break;
            }
        }
    }
}