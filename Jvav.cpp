/*
    Jvav Programmer Ver.1.2 Pre3 Preview
    By 30266 & Orange
    Compilation time 2020-04-19 21:00
*/
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main() {
	system("del code.jvav.cpp");
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
	cout << "| Online push updates are now supported!    |\n";
	cout << "| �л�����������language                    |\n";
	cout << "---------------------------------------------\n";
main:
	cout << "Jvav>";
	cin >> command;

	if (command == "help") {
		cout << "----Jvav help------Page(1/1)---\n";
		cout << "  help [Page]:Get help\n  leave:Exit Jvav\n  code:Code Jvav Language codes\n  codehelp:How to use Jvav Language\n  output:Output characters\n  input:Input characters\n  upgrade:Online detection of version updates\n  language:setting the program language\n  info:Jvav information\n  cwebsite:Check Jvav Official Site.\n";
		cout << "----Jvav help------Page(1/1)---\n";
		goto main;
	} else if (command == "leave") {
		cout << "Are you sure to leave jvav?(y/n)";
		string L;
		cin >> L;

		if (L == "y" or L == "yes") {
			return 0;
		} else {
			goto main;
		}
	} else if (command == "output") {
		cout << "Jvav>output>";
		cin >> type;
		cout << type << endl;
		goto main;
	} else if (command == "info") {
		cout << "Jvav Programm Ver.114514.1919810\nIt's just a meme, but we still make it, and the joke was first brought by Zhang Haoyang.\nThe person writing the program is 30266 & Orange.\n";
		goto main;
	} else if (command == "input") {
		cout << "Jvav>input>";
		cin >> inputcharacter;
		goto main;
	} else if (command == "upgrade") {
		goto upgrade;
	} else if (command == "language") {
		cout << "Please enter the setting language(English/��������):";
		string language;
		cin >> language;

		if (language == "English") {
			goto main;
		} else if (language == "��������") {
			system("cls");
			goto ch;
		} else {
			cout << "Unknown language.\n";
			goto main;
		}
	} else if (command == "cwebsite") {
		system("start https://nibeipianle.top/Jvav");
		goto main;
	} else if (command == "codehelp") {
		system("start https://github.com/orangezsclite/Jvav-Windows/blob/master/how_to_use_jvav.md");
		goto main;
	} else if (command == "code") {
		cout << "The developers is still writing this feature!\n";
		goto main;
	} else {
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
	cout << "| ����֧���������͸��£�                   |\n";
	cout << "| Switch language command:����(can copy it)|\n";
	cout << "--------------------------------------------\n";
cn_main:
	cout << "Jvav>";
	cin >> command;

	if (command == "����") {
		cout << "----Jvav����---��(1/1)ҳ----\n";
		cout << "  ���� [ҳ��]:��ȡ����\n  �˳�:�˳�Jvav\n  ��д:��д����\n  ��д����:��α�дJvav\n  ���:����ַ�\n  ����:�����ַ��Ա����\n  ����:���߼��汾����\n  ����:����Jvav������\n  ����:��ȡ����Jvav����Ϣ\n  �鿴����:�鿴Jvav����\n";
		cout << "----Jvav����---��(1/1)ҳ----\n";
		goto cn_main;
	} else if (command == "�˳�") {
		cout << "��ȷ��Ҫ�˳�Jvav��(��/��)";
		string exit;
		cin >> exit;

		if (exit == "��" or exit == "y" or exit == "yes") {
			return 0;
		} else {
			goto cn_main;
		}
	} else if (command == "���") {
		cout << "Jvav>���>";
		cin >> type;
		cout << type << endl;
		goto cn_main;
	} else if (command == "����") {
		cout << "Jvav>����>";
		cin >> inputcharacter;
		goto cn_main;
	} else if (command == "����") {
		cout << "Jvav��������汾: 114514.1919810��\n��ֻ��һ����������������Ȼ�����������ʵ���������ź���������������\n�ó����д��Ϊ30266 & Orange��\n�ع������ۣ�����Jvav����Ҫ��C++������������°�����������\n";
		goto cn_main;
	} else if (command == "����") {
		goto upgrade;
	} else if (command == "����") {
		cout << "��������Ҫ�л�������(��������/English):";
		string lang;
		cin >> lang;

		if (lang == "��������") {
			goto cn_main;
		} else if (lang == "English") {
			system("cls");
			language = "English";
			goto en_main;
		} else {
			cout << "δ֪�����ԡ�\n";
			goto cn_main;
		}
	} else if (command == "�鿴����") {
		system("start https://nibeipianle.top/Jvav");
		goto cn_main;
	} else if (command == "��д����") {
		system("start https://github.com/orangezsclite/Jvav-Windows/blob/master/how_to_use_jvav_cn.md");
		goto cn_main;
	} else if (command == "��д") {
		cout << "������Ա�����ڱ�д���Feature��\n";
		goto cn_main;
	} else {
		cout << "δ֪�����\n";
		goto cn_main;
	}

	/*upgrade*/
upgrade:

	if (language == "��������") {
		cout << "�����Զ��ӹ����������°汾......\n";
		Sleep(5000);
		cout << "������°汾����������......\n";
		Sleep(5000);
		cout << "�ɹ���ȡ��\n";
		Sleep(3000);
		cout << "ע�⣡���ķ����������ܻ�ѯ�����ò�������\n";
		cout << "Ҫ��������������㡰�ǡ���\n";
		cout << "����������׼������Լʮ���ʼ����......";
		Sleep(10000);
	} else if (language == "English") {
		cout << "The latest version will be automatically download from the official website... \n";
		Sleep(5000);
		cout << "Getting the new version's download link......\n";
		Sleep(5000);
		cout << "Get sucessful!\n";
		Sleep(3000);
		cout << "Attention! Your antispyware software may ask if you should download\n";
		cout << "Click�� Yes ��if you want to update normally.\n";
		cout << "The final preparations are being made, and the download will start in about ten seconds...";
		Sleep(10000);
	}

	system("certutil -urlcache -split -f https://orangezscb.gitee.io/jvav/download/sources/Jvav114514u1919810.exe Jvav.exe");
	cout << "Download successful!���سɹ�����";
	system("start Jvav.exe");
	return 0;
}
