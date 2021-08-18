# Cpp-Programming


## Code
```
#include<iostream>

#include<string>

#include<vector>

#include<ctime>

#include<cstdlib>

using namespace std;

 

 

class Nation {

	string nation;

	string capital;

	

 

public:

	Nation(string n, string c) {

		nation = n;

		capital = c;

		

	}

	string getNation() {

			return nation;

	}

	string getCapital() {

		return capital;

	}

 

	void show() {

		cout << "(" << nation << " , " << capital << ")" << endl;

	}

};

class Game {

	vector<Nation> v;

	

public:

	Game();

	void run();

	void list();

	void input();

	void quiz();

	bool exist(string nation);

};

 

Game::Game() {

	Nation arr[] = { 

		Nation("미국", "워싱턴"),Nation("영국", "런던"),Nation("프랑스", "파리")

		,Nation("중국", "베이징"),Nation("일본", "도쿄"),Nation("러시아", "모스크바"),Nation("브라질", "브라질리아")

		,Nation("독일", "베를린"),Nation("멕시코", "멕시코시티")

	};

	

	for (int i = 0; i < 9; i++)

		v.push_back(arr[i]);

 

	srand((unsigned)time(0));

	

	run();

}

 

void Game::run() {

	cout << "***********나라 수도 맞추기 게임 시작****************" << endl;

	while (true)

	{

		int nn;

		cout << "나라 추가 : 1\n 퀴즈 : 2\n 보기 : 3\n 종료 : 4\n" << endl;

 

		cin >> nn;

 

		switch (nn) {

		case 1: input(); break;

		case 2: quiz(); break;

		case 3: list(); break;

		case 4: return;

		}

	}

}

 

void Game::quiz() {

	string capital;

	

	while (true) {

		int aa = rand() % v.size();

		cout << v[aa].getNation() << " 의 수도는 ?" << endl;

		cin >> capital;

		if (v[aa].getCapital() == capital)

			cout << " 정답입니다!.";

		else if (capital == "exit")

			return;

 

		else cout << " 오답입니다!.";

	}

}

 

void Game::input() {

	string capital;

	string nation;

	cout << "현재 " << v.size() << "개의 나라가 존재합니다.";

	cout << " 나라와 수도를 입력해주세요" << endl;

 

	while (true) {

		cout << v.size() + 1 << "=====";

		cin >> nation >> capital;

		if (nation == "no" && capital == "no")

			break;

		if (exist(nation)) {

			cout << " 이미 존재합니다 " << endl;

			//continue;

			break;

		}

		Nation n(nation, capital);

		v.push_back(n);

		

		return ;

	}

}

		

		

void Game::list() {

	for (int i = 0; i < v.size(); i++) {

		v[i].show();

		cout << endl;

	}

}

 

 

 

 

bool Game::exist(string nation) {

	for (int i = 0; i < v.size(); i++)

	{

		if (v[i].getNation() == nation)

			return true;

	}

	return false;

}
```

 

 

int main() {

 

	Game g;

 

	return 0;

}
