/*
    Jvav Programmer Ver.1.2 Pre3 Preview
    By 30266 & Orange
    Compilation time 2020-04-19 21:00
*/
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{
    cout << "Initializing Program...\n";
    string language;
    string command, type, inputcharacter;
    language = "English";
    cout << "Configuring the online update service...\n";
    system("del upgrade.txt");
    system("cls");
    /*en_main*/
en_main:
    cout << "---------------------------------------------\n";
    cout << "| Jvav Program           Ver.114514.1919810 |\n";
    cout << "| By Dr.ZhangHaoYang                        |\n";
    cout << "| Programmer: 30266 & TZG-Official & Orange |\n";
    cout << "| Rebuilder: Orange                         |\n";
    cout << "| Enter'help'to get help!                   |\n";
    cout << "| Online push updates are now NOT supported!|\n";
    cout << "| �л�����������language                    |\n";
    cout << "---------------------------------------------\n";
main:
    cout << "Jvav>";
    cin >> command;
    if (command == "help") {
        cout << "----Jvav help------Page(1/1)---\n";
        cout << "  help [Page]:Get help\n  leave:Exit Jvav\n  output:Output characters\n  input:Input characters\n  upgrade:Online detection of version updates\n  language:setting the program language\n  info:Jvav information\n  cwebsite:Check Jvav Official Site.\n";
        cout << "----Jvav help------Page(1/1)---\n";
        goto main;
    }
    else if (command == "leave") {
        cout << "Are you sure to leave jvav?(y/n)";
        string L;
        cin >> L;
        if (L == "y" or L == "yes") {
            return 0;
        }
        else {
            goto main;
        }
    }
    else if (command == "output") {
        cout << "Jvav>output>";
        cin >> type;
        cout << type << endl;
        goto main;
    }
    else if (command == "info") {
        cout << "Jvav Programm Ver.1.2 Pre3\nIt's just a joke, but we still make it, and the joke was first brought by Zhang Haoyang.\nThe person writing the program is 30266 & Orange.\n";
        goto main;
    }
    else if (command == "input") {
        cout << "Jvav>input>";
        cin >> inputcharacter;
        goto main;
    }
    else if (command == "upgrade") {
        cout << "Jvav>upgrade>Nope\n";
        //goto upgrade;
    }
    else if (command == "language") {
        cout << "Please enter the setting language(English/��������):";
        string language;
        cin >> language;
        if (language == "English") {
            goto main;
        }
        else if (language == "��������") {
            system("cls");
            goto ch;
        }
        else {
            cout << "Unknown language.\n";
            goto main;
        }
    }
    else if (command == "cwebsite") {
        system("start https://nibeipianle.top/Jvav");
        goto main;
}
    else {
        cout << "Unknown command\n";
        goto main;
    }

    /*cn_main*/
ch:
    language = "��������";
    cout << "--------------------------------------------\n";
    cout << "| Jvav������          �汾��114514.1919810 |\n";
    cout << "| ���ߣ��ź����ʦ                         |\n";
    cout << "| ��д��: 30266 & TZG-Official & Orange    |\n";
    cout << "| ��д��: Orange                           |\n";
    cout << "| ͨ������'����'����ð���                 |\n";
    cout << "| ���Ѳ�֧���������͸��£�                 |\n";
    cout << "| Switch language command:����(can copy it)|\n";
    cout << "--------------------------------------------\n";
cn_main:
    cout << "Jvav>";
    cin >> command;
    if (command == "����") {
        cout << "----Jvav����---��(1/1)ҳ----\n";
        cout << "  ���� [ҳ��]:��ȡ����\n  �˳�:�˳�Jvav\n  ���:����ַ�\n  ����:�����ַ��Ա����\n  ����:���߼��汾����\n  ����:����Jvav������\n  ����:��ȡ����Jvav����Ϣ\n  �鿴����:�鿴Jvav����\n";
        cout << "----Jvav����---��(1/1)ҳ----\n";
        goto cn_main;
    }
    else if (command == "�˳�") {
        cout << "��ȷ��Ҫ�˳�Jvav��(��/��)";
        string exit;
        cin >> exit;
        if (exit == "��" or exit == "y" or exit == "yes") {
            return 0;
        }
        else {
            goto cn_main;
        }
    }
    else if (command == "���") {
        cout << "Jvav>���>";
        cin >> type;
        cout << type << endl;
        goto cn_main;
    }
    else if (command == "����") {
        cout << "Jvav>����>";
        cin >> inputcharacter;
        goto cn_main;
    }
    else if (command == "����") {
        cout << "Jvav��������汾: 1.2 Beta3��\n��ֻ��һ����������������Ȼ�����������ʵ���������ź���������������\n�ó����д��Ϊ30266 & Orange��\n�ع������ۣ�����Jvav����Ҫ��C++������������°�����������\n";
        goto cn_main;
    }
    else if (command == "����") {
//        cout << "Jvav>����>���ڻ�ȡ�汾�б�...\n";
		cout<<"Jvav>����>�ź������ɶ�أ�˵��ֹ֧ͣ����"; 
        //goto upgrade;
    }
    else if (command == "����") {
        cout << "��������Ҫ�л�������(��������/English):";
        string lang;
        cin >> lang;
        if (lang == "��������") {
            goto cn_main;
        }
        else if (lang == "English") {
            system("cls");
            language = "English";
            goto en_main;
        }
        else {
            cout << "δ֪�����ԡ�\n";
            goto cn_main;
        }
    }
    else if (command == "�鿴����") {
        system("start https://nibeipianle.top/Jvav");
        goto cn_main;
}
    else {
        cout << "δ֪�����\n";
        goto cn_main;
    }
    /*upgrade*/
upgrade:
    system("java -jar upgrade.jar > upgrade.txt");
    ifstream readFile("upgrade.txt");
    int ret;
    readFile >> ret; 
    readFile.close();
    if (ret == -1) {
        if (language == "English") {
            cout << "Jvav>upgrade>Error! The update failed! Because the version list cannot be obtained on the authentication server!\n";
            goto main;
        }
        else if (language == "��������") {
            cout << "Jvav>����>�����޷�����֤��������ȡ�汾�б�\n";
            goto cn_main;
        }
    }
    else if (ret > 6) {
        if (language == "English") {
            string up;
            cout << "Jvav>upgrade>Updated versionavailable for upgrades,do you want to upgrade?(y/n)\n";
            cin >> up;
            if (up == "y") {
                system("start update.exe");
                return 0;
            }
            else {
                goto main;
            }
        }
        else if (language == "��������") {
            string up;
            cout << "�и��°汾�ɹ��������Ƿ�������(��/��)\n";
            cin >> up;
            if (up == "��") {
                system("start update.exe");
                return 0;
            }
            else {
                goto cn_main;
            }
        }
    }
    else if (ret == 6) {
        if (language == "English") {
            cout << "Congratulations! You've upgraded to the latest version!\n";
            goto main;
        }
        else {
            cout << "��ϲ�㣡�������������°汾��\n";
            goto cn_main;
        }
    }
    else {
        if (language == "English") {
            cout << "Jvav>upgrade>Error!We can't get a version list because your version is coming from a future version, so we don't support it.\n";
            goto main;
            cout << ret;
        }
        else if (language == "��������") {
            cout << "Jvav>����>���������޷���ȡ�汾�б���Ϊ���İ汾������δ���İ汾�������ǲ��ṩ֧�֡�\n";
            goto cn_main;
        }
    }
}
