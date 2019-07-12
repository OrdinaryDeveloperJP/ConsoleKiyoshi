// ConsoleKiyoshi.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

inline int ZunKiyoRandum()
{
	return rand() % 2;
}
int main()
{
	const std::string ZunDoko[] = { "ズン", "ドコ" };
	std::string zundokoResult;
	int count = 0;;
	bool isEnd = false;
	while (!isEnd)
	{
		count++;
		int zundokoId = ZunKiyoRandum();
		std::string zundokoValue = ZunDoko[zundokoId];
		if (count > 5)
		{
			zundokoResult.erase(0, 1);
		}
		zundokoResult += std::to_string(zundokoId);

		std::cout << zundokoValue << std::endl;
		if (zundokoResult == "00001")
		{
			isEnd = true;
			std::cout << "キ・ヨ・シ！" << std::endl;
			std::cout << "あなたは" << std::to_string(count) << "回目でキヨシになれました" << std::endl;
		}
	}

	return 0;
}
