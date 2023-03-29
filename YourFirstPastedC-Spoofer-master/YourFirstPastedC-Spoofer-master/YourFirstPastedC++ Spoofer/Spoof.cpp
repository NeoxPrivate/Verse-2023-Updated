
#include "Main.h"		
#include <direct.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

std::string generateRandomString(int length) {
	static const std::string charset = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	static std::mt19937 rng(std::random_device{}());
	static std::uniform_int_distribution<std::size_t> dist(0, charset.size() - 1);
	std::string result(length, ' ');
	std::generate_n(result.begin(), length, [&] { return charset[dist(rng)]; });
	return result;
}

#include <cstdio>

void spoof() {
	std::cout << L"Spoof function called." << std::endl;


	std::string amideWinPath = "https://cdn.discordapp.com/attachments/952354350506836018/1087471002511999078/AMIDEWINx64.EXE";
	std::string amiFLDrvPath = "https://cdn.discordapp.com/attachments/952354350506836018/1087471002944020562/AMIFLDRV64.SYS";
	std::string entriesBatPath = "https://cdn.discordapp.com/attachments/952354350506836018/1087471003459911770/entries.bat";


	std::string destFolder = "C:\\Windows\\security\\database\\";

	// Download and install the files
	std::string amideWinDestPath = destFolder + "AMIDEWINx64.EXE";
	std::string amiFLDrvDestPath = destFolder + "AMIFLDRV64.SYS";
	std::string entriesBatDestPath = destFolder + "entries.bat";

	if (URLDownloadToFileA(NULL, amideWinPath.c_str(), amideWinDestPath.c_str(), 0, NULL) != S_OK) {
		std::wcout << L"Failed to download AMIDEWINx64.EXE." << std::endl;
		return;
	}

	if (URLDownloadToFileA(NULL, amiFLDrvPath.c_str(), amiFLDrvDestPath.c_str(), 0, NULL) != S_OK) {
		std::wcout << L"Failed to download AMIFLDRV64.SYS." << std::endl;

		return;
	}

	if (URLDownloadToFileA(NULL, entriesBatPath.c_str(), entriesBatDestPath.c_str(), 0, NULL) != S_OK) {
		std::wcout << L"Failed to download entries.bat." << std::endl;

		return;
	}


	std::string randomString = generateRandomString(12);


	std::string amideWinCmd = amideWinDestPath + " /su auto";
	system(amideWinCmd.c_str());
	amideWinCmd = amideWinDestPath + " /bs " + randomString;
	system(amideWinCmd.c_str());
	system(entriesBatDestPath.c_str());


	std::remove(amideWinDestPath.c_str());
	std::remove(amiFLDrvDestPath.c_str());
	system("cls");
	std::remove(entriesBatDestPath.c_str());
	system("cls");
	std::cout << L"Spoof function finished." << std::endl;
}





void main1() {
	std::cout << "Main1 function called." << std::endl;

	std::string amideWinPath = "https://cdn.discordapp.com/attachments/952354350506836018/1087471002511999078/AMIDEWINx64.EXE";
	std::string amiFLDrvPath = "https://cdn.discordapp.com/attachments/952354350506836018/1087471002944020562/AMIFLDRV64.SYS";
	std::string entriesBatPath = "https://cdn.discordapp.com/attachments/952354350506836018/1087471003459911770/entries.bat";
	std::string volumeidBatPath = "https://cdn.discordapp.com/attachments/952354350506836018/1087507503673245796/Volumeid.exe";
	std::string DevconPath = "https://cdn.discordapp.com/attachments/952354350506836018/1087510220206510151/devcon.exe";
	std::string ChangerPath = "https://cdn.discordapp.com/attachments/952354350506836018/1087510239261245470/changer.exe";

	std::string destFolder = "C:\\Windows\\security\\database\\";

	// Download and install the files
	std::string amideWinDestPath = destFolder + "AMIDEWINx64.EXE";
	std::string amiFLDrvDestPath = destFolder + "AMIFLDRV64.SYS";
	std::string entriesBatDestPath = destFolder + "entries.bat";
	std::string VolumeIdDestPath = destFolder + "Volumeid.exe";
	std::string DevconDestPath = destFolder + "devcon.exe";
	std::string ChangerDestPath = destFolder + "changer.exe";

	if (URLDownloadToFileA(NULL, amideWinPath.c_str(), amideWinDestPath.c_str(), 0, NULL) != S_OK) {
		std::wcout << L"Failed to download AMIDEWINx64.EXE." << std::endl;
		return;
	}

	if (URLDownloadToFileA(NULL, amiFLDrvPath.c_str(), amiFLDrvDestPath.c_str(), 0, NULL) != S_OK) {
		std::wcout << L"Failed to download AMIFLDRV64.SYS." << std::endl;

		return;
	}

	if (URLDownloadToFileA(NULL, entriesBatPath.c_str(), entriesBatDestPath.c_str(), 0, NULL) != S_OK) {
		std::wcout << L"Failed to download entries.bat." << std::endl;

		return;
	}
	if (URLDownloadToFileA(NULL, entriesBatPath.c_str(), entriesBatDestPath.c_str(), 0, NULL) != S_OK) {
		std::wcout << L"Failed to download entries.bat." << std::endl;

		return;
	} 
	if (URLDownloadToFileA(NULL, volumeidBatPath.c_str(), VolumeIdDestPath.c_str(), 0, NULL) != S_OK) { // calling the same thing twice = op
		std::wcout << L"Failed to download Volumeid.exe" << std::endl;

		return;
	}
	/* if (URLDownloadToFileA(NULL, volumeidBatPaths.c_str(), VolumeIdDestPaths.c_str(), 0, NULL) != S_OK) { // calling the same thing twice = op
		std::wcout << L"Failed to download Volumeid.exe" << std::endl;

		return;
	}*/
	if (URLDownloadToFileA(NULL, DevconPath.c_str(), DevconDestPath.c_str(), 0, NULL) != S_OK) { // calling the same thing twice = op 
		std::wcout << L"Failed to download DevconPath.exe" << std::endl;

		return;
	}
	if (URLDownloadToFileA(NULL, ChangerPath.c_str(), ChangerDestPath.c_str(), 0, NULL) != S_OK) { // calling the same thing twice = op
		std::wcout << L"Failed to download ChangerPath.exe" << std::endl;

		return;
	}
	std::string randomString = generateRandomString(12);

	std::string randomString1 = generateRandomString(4);

	std::string amideWinCmd = amideWinDestPath + " /su auto";
	system(amideWinCmd.c_str());
	amideWinCmd = amideWinDestPath + " /bs " + randomString;
	system(amideWinCmd.c_str());
	system(entriesBatDestPath.c_str());


	std::remove(amideWinDestPath.c_str());
	std::remove(amiFLDrvDestPath.c_str());
	system("cls");
	std::remove(entriesBatDestPath.c_str());
	system("cls");
	system(entriesBatPath.c_str());
	system("cls");
	system("cls");
	system(ChangerDestPath.c_str());
	system("cls");
	std::remove(ChangerDestPath.c_str());
	system("cls");

	std::cout << L"Main function finished." << std::endl;

}	

void serial() {
	std::cout << L"Serial function called." << std::endl;


	std::string batchFilePath = "https://cdn.discordapp.com/attachments/952354350506836018/1087475797956243526/SerialChecker.bat";


	std::string destFolder = "C:\\Windows\\security\\database\\";


	std::string batchFileDestPath = destFolder + "SerialChecker.bat";
	if (URLDownloadToFileA(NULL, batchFilePath.c_str(), batchFileDestPath.c_str(), 0, NULL) != S_OK) {
		std::wcout << L"Failed to download SerialChecker.bat." << std::endl;
		return;
	}

	// Run the batch file
	system(batchFileDestPath.c_str());

	// Delete the batch file
	std::remove(batchFileDestPath.c_str());


}

void menu()
{
	SetConsoleTextAttribute(hConsole, 9);
	std::wcout << L"        db    db d88888b d8888b. .d8888. d88888b      .d8888. d8888b.  .d88b.   .d88b.  d88888b d88888b d8888b." << std::endl;
	std::wcout << L"        88    88 88'     88  `8D 88'  YP 88'          88'  YP 88  `8D .8P  Y8. .8P  Y8. 88'     88'     88  `8D" << std::endl;
	std::wcout << L"        Y8    8P 88ooooo 88oobY' `8bo.   88ooooo      `8bo.   88oodD' 88    88 88    88 88ooo   88ooooo 88oobY'" << std::endl;
	std::wcout << L"        `8b  d8' 88~~~~~ 88`8b     `Y8b. 88~~~~~        `Y8b. 88~~~   88    88 88    88 88~~~   88~~~~~ 88`8b" << std::endl;
	std::wcout << L"         `8bd8'  88.     88 `88. db   8D 88.          db   8D 88      `8b  d8' `8b  d8' 88      88.     88 `88." << std::endl;
	std::wcout << L"           YP    Y88888P 88   YD `8888Y' Y88888P      `8888Y' 88       `Y88P'   `Y88P'  YP      Y88888P 88   YD " << std::endl;
	SetConsoleTextAttribute(hConsole, 4);

	std::wcout << L"           [+] Sync.top x Neox crack " << std::endl;

		SetConsoleTextAttribute(hConsole, 11);
		std::wcout << L"        " << std::endl;
		std::wcout << L"        " << std::endl;
		std::wcout << L"        " << std::endl;
		std::wcout << L"        " << std::endl;
		std::wcout << L"        " << std::endl;
		std::wcout << L"        " << std::endl;


	std::wcout << L"\n[+] Asset utilization done " << std::endl;
	std::wcout << L"\n[+] Login field required.. " << std::endl;
	SetConsoleTextAttribute(hConsole, 4);

	std::wcout << L"\n[+] LICENSE: ";
	getchar();


}
void SpoofMenu()
{
	SetConsoleTextAttribute(hConsole, 9);
	std::wcout << L"        db    db d88888b d8888b. .d8888. d88888b      .d8888. d8888b.  .d88b.   .d88b.  d88888b d88888b d8888b." << std::endl;
	std::wcout << L"        88    88 88'     88  `8D 88'  YP 88'          88'  YP 88  `8D .8P  Y8. .8P  Y8. 88'     88'     88  `8D" << std::endl;
	std::wcout << L"        Y8    8P 88ooooo 88oobY' `8bo.   88ooooo      `8bo.   88oodD' 88    88 88    88 88ooo   88ooooo 88oobY'" << std::endl;
	std::wcout << L"        `8b  d8' 88~~~~~ 88`8b     `Y8b. 88~~~~~        `Y8b. 88~~~   88    88 88    88 88~~~   88~~~~~ 88`8b" << std::endl;
	std::wcout << L"         `8bd8'  88.     88 `88. db   8D 88.          db   8D 88      `8b  d8' `8b  d8' 88      88.     88 `88." << std::endl;
	std::wcout << L"           YP    Y88888P 88   YD `8888Y' Y88888P      `8888Y' 88       `Y88P'   `Y88P'  YP      Y88888P 88   YD " << std::endl;
	std::wcout << L"        " << std::endl;
	std::wcout << L"        " << std::endl;
	std::wcout << L"        " << std::endl;
	std::wcout << L"        " << std::endl;
	std::wcout << L"        " << std::endl;
	std::wcout << L"        " << std::endl;
	SetConsoleTextAttribute(hConsole, 7);

	std::wcout << L"[+] Libaries downloaded." << std::endl;

	SetConsoleTextAttribute(hConsole, 13);
	std::wcout << L"        " << std::endl;

	std::wcout << L"[1] Temp (Asus)" << std::endl;
	std::wcout << L"[2] Permenent spoofer" << std::endl;
	std::wcout << L"[3] Serialchecker" << std::endl;

	SetConsoleTextAttribute(hConsole, 7);
	std::wcout << L"        " << std::endl;

		std::wcout << L"Select: ";
		int choice;
		std::cin >> choice;

		switch (choice) {
		case 1:
			spoof();
			return;
		case 2:
			main1();
			return;
		case 3:
			serial();
			return;
		default:
			std::cout << "Invalid choice. Please try again." << std::endl;
			exit(0);
	}
}

int main()
{
	
	menu();
	system("cls");
	SpoofMenu();
	Sleep(10000);
	return 1;

}
