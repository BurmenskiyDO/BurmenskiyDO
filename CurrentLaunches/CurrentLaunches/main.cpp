#include<stdio.h>
#include<Windows.h>

int main()

{
	HKEY hKey;
	DWORD RegistryHolder=0;
	 if(RegCreateKeyEx(HKEY_CURRENT_USER,L"Launches",0,NULL,REG_OPTION_NON_VOLATILE, KEY_WOW64_64KEY|KEY_ALL_ACCESS,NULL,&hKey,NULL)!=ERROR_SUCCESS)
	 {
		printf_s("UNABLE TO CREATE THE KEY\n");
	}
	else printf_s("KEY CREATED SUCCESSFULLY\n");
	 int i = RegistryHolder + 1;
	 
	 RegSetValueEx(hKey, L"Counter", NULL, REG_DWORD, (LPBYTE)&RegistryHolder, sizeof(RegistryHolder));



	 RegCloseKey(hKey);
	system("PAUSE");
}