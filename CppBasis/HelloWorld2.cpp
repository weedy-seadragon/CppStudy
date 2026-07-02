#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
	//コンソール出力をUTF-8として扱う（文字化け対策）
	SetConsoleOutputCP(CP_UTF8);
#endif
	//コンソールに成仏アクメを出力
	std::cout << "い゛や゛あ゛あ゛あ゛あ゛あ゛あ゛あ゛あ゛あ゛！！！！！ミヤコを消さないでな゛の゛お゛お゛お゛お゛お゛お゛お゛お゛！！！！！逝゛く゛っ゛！！逝゛っ゛ぢゃ゛う゛な゛の゛お゛お゛お゛お゛お゛！！！！！成仏する！！成仏アクメするな゛の゛お゛お゛お゛お゛お゛お゛お゛お゛！！！！！！" << std::endl;
}