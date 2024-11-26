#include <stdio.h>
#include <iostream>
#include <list>
#include <stdlib.h>
#include <vector>

using namespace std;

int main() {

	list<const char*>rosen = { "Tokyo", "Kanda", "Akihabara","Okachimachi","Ueno",
		 "Uguisudani","Noppori","Tabata","Komagome","Sugamo",
		 "Otuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
		 "shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
		 "Meguro","Gotanda","Osaki","Shinagawa","Tamachi",
		 "Hamamathucho","Shimbashi","Yurakucho" };

	printf("1970\n");

	for (auto itr = rosen.begin(); itr != rosen.end(); ++itr)
	{
		cout << *itr << endl;
	}

	std::cout << std::endl;
	for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = rosen.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	printf("2019\n");
	for (auto itr = rosen.begin(); itr != rosen.end(); ++itr) {
		cout << *itr << ",";
	}
	std::cout << std::endl;

	for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = rosen.insert(itr, "Takanawa-Gateway");
			++itr;
		}
	}
	printf("2022\n");
	for (auto itr = rosen.begin(); itr != rosen.end(); ++itr) {
		cout << *itr << ",";
	}
	std::cout << std::endl;

	return 0;
}

//リストで駅名の配列を定義して表示するサンプル
//このサンプルに2回駅を追加して2回for文で表示する処理を追加する