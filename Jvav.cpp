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
	cout << "| 切换语言请输入language                    |\n";
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
		cout << "Please enter the setting language(English/简体中文):";
		string language;
		cin >> language;

		if (language == "English") {
			goto main;
		} else if (language == "简体中文") {
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
	language = "简体中文";
	cout << "--------------------------------------------\n";
	cout << "| Jvav编译器          版本：114514.1919810 |\n";
	cout << "| 作者：张浩洋大师                         |\n";
	cout << "| 编写者: 30266 & TZG-Official & Orange    |\n";
	cout << "| 重写者: Orange                           |\n";
	cout << "| 通过输入'帮助'来获得帮助                 |\n";
	cout << "| 现已支持在线推送更新！                   |\n";
	cout << "| Switch language command:语言(can copy it)|\n";
	cout << "--------------------------------------------\n";
cn_main:
	cout << "Jvav>";
	cin >> command;

	if (command == "帮助") {
		cout << "----Jvav帮助---第(1/1)页----\n";
		cout << "  帮助 [页码]:获取帮助\n  退出:退出Jvav\n  编写:编写程序\n  编写帮助:如何编写Jvav\n  输出:输出字符\n  输入:输入字符以便调用\n  更新:在线检测版本更新\n  语言:设置Jvav的语言\n  关于:获取关于Jvav的信息\n  查看官网:查看Jvav官网\n";
		cout << "----Jvav帮助---第(1/1)页----\n";
		goto cn_main;
	} else if (command == "退出") {
		cout << "你确定要退出Jvav吗？(是/否)";
		string exit;
		cin >> exit;

		if (exit == "是" or exit == "y" or exit == "yes") {
			return 0;
		} else {
			goto cn_main;
		}
	} else if (command == "输出") {
		cout << "Jvav>输出>";
		cin >> type;
		cout << type << endl;
		goto cn_main;
	} else if (command == "输入") {
		cout << "Jvav>输入>";
		cin >> inputcharacter;
		goto cn_main;
	} else if (command == "关于") {
		cout << "Jvav编程器，版本: 114514.1919810。\n这只是一个梗，但是我们依然把它变成了现实。最早是张浩洋提出的这个梗。\n该程序编写者为30266 & Orange。\n重构者评论：关于Jvav语言要用C++做启动器这件事啊哈哈哈哈哈\n";
		goto cn_main;
	} else if (command == "更新") {
		goto upgrade;
	} else if (command == "语言") {
		cout << "请输入您要切换的语言(简体中文/English):";
		string lang;
		cin >> lang;

		if (lang == "简体中文") {
			goto cn_main;
		} else if (lang == "English") {
			system("cls");
			language = "English";
			goto en_main;
		} else {
			cout << "未知的语言。\n";
			goto cn_main;
		}
	} else if (command == "查看官网") {
		system("start https://nibeipianle.top/Jvav");
		goto cn_main;
	} else if (command == "编写帮助") {
		system("start https://github.com/orangezsclite/Jvav-Windows/blob/master/how_to_use_jvav_cn.md");
		goto cn_main;
	} else if (command == "编写") {
		cout << "开发人员们正在编写这个Feature！\n";
		goto cn_main;
	} else {
		cout << "未知的命令！\n";
		goto cn_main;
	}

	/*upgrade*/
upgrade:

	if (language == "简体中文") {
		cout << "即将自动从官网下载最新版本......\n";
		Sleep(5000);
		cout << "获得最新版本的下载链接......\n";
		Sleep(5000);
		cout << "成功获取！\n";
		Sleep(3000);
		cout << "注意！您的反间谍软件可能会询问您该不该下载\n";
		cout << "要是想正常更新请点“是”。\n";
		cout << "正在做最后的准备，大约十秒后开始下载......";
		Sleep(10000);
	} else if (language == "English") {
		cout << "The latest version will be automatically download from the official website... \n";
		Sleep(5000);
		cout << "Getting the new version's download link......\n";
		Sleep(5000);
		cout << "Get sucessful!\n";
		Sleep(3000);
		cout << "Attention! Your antispyware software may ask if you should download\n";
		cout << "Click‘ Yes ’if you want to update normally.\n";
		cout << "The final preparations are being made, and the download will start in about ten seconds...";
		Sleep(10000);
	}

	system("certutil -urlcache -split -f https://orangezscb.gitee.io/jvav/download/sources/Jvav114514u1919810.exe Jvav.exe");
	cout << "Download successful!下载成功啦！";
	system("start Jvav.exe");
	return 0;
}
