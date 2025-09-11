#define _CRT_SECURE_NO_WARNINGS //scanf 처리
#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__) // 메모리 할당했는데 delete 알려주는
#include <crtdbg.h>
#include <iostream>   // 입출력 관련
#include <stdio.h>
#include <cstdio>     // stdio.h에 네임스페이스 추가한 래퍼 
#include <time.h>     // 시간 값
#include <random>
#include <limits.h>
#include "Hello.h"   // 헤더 파일
#include "Practice.h"
#include "Day2025.09.11.h"
#include <direct.h>
#include <fstream>
#include <string>




	/*
	심화문제
	미로 탈출 게임을 수정하여 맵 데이터파일에서 읽은 내용을 기반으로 맵 만들기
	데이터 파일 구조
	첫줄은 가로 길이와 세로 길이가 저장되어 있다.
	ex) 20, 10 ⇒ 가로 20, 세로 10
	두번째 줄 부터는 미로의 각 셀을 콤마(, )로 구분하여 셀의 타입을 나타낸다.
	콤마(, ),
	\n으로 다음 줄로 이동한다.
	*/

	/*
	void ReadFile()
	{
		//#include <fstream>	#include <string> 필요
		const char* FilePath = "C:\\Users\\KGA\\Desktop\\c\\Data\\TestData.txt";

		std::ifstream InputFile(FilePath);
		if (!InputFile.is_open())	// 파일이 열렸는지 확인하는 함수
		{
			printf("파일을 열 수 없습니다.\n");
			printf("[%s] 경로를 확인하세요.\n", FilePath);
			return;
		}

		std::string FileContents(
		(std::istreambuf_iterator<char>(InputFile)),
		std::istreambuf_iterator<char>());	//InputFile에 있는 글자들을 모두 읽어서 FileContents에 저장하기

		printf("파일 내용은 다음과 같습니다.\n");
		printf("%s\n", FileContents.c_str());	// FileContents안에 있는 문자열을 const char*로 돌려주는 함수

		const char* CharPoint = FileContents.c_str();
		int Row = 0, col = 0;
		int Value = 0;
		bool firstLine = true;
	*/

	

	
	std::random_device Random;
	std::mt19937 RandomEngine(Random());
	std::uniform_int_distribution<int> DamageDist(5, 15);
	std::uniform_int_distribution<int> PercentDist(1, 100); // 확률

	int MazeWidth = 20;
	int MazeHeight = 10;
	int** Maze = nullptr;

	enum EventType
	{
		Battle = 0,
		Heal = 1,
		EventNone = 2,
	};

	EventType GetMoveEvent()
	{
		int RandomNumber = PercentDist(RandomEngine);

		if (RandomNumber <= 20)
			return Battle;
		else if (RandomNumber <= 30)
			return Heal;
		else
			return EventNone;
	}

	void RunBattle(int& PlayerHp)
	{
		const int StartHp = 100;
		int EnemyHp = StartHp;

		while (PlayerHp > 0 && EnemyHp > 0)
		{
			int PlayerDamage = DamageDist(RandomEngine);
			int CriticalDamage = PercentDist(RandomEngine);  // 크리티컬 데미지

			if (CriticalDamage <= 10)
			{
				PlayerDamage = PlayerDamage * 2;
				printf("플레이어 크리티컬 공격!\n");
			}
			else
			{
				printf("플에이어 공격!\n");
			}
			EnemyHp = EnemyHp - PlayerDamage;

			if (EnemyHp <= 0)
			{
				printf("적에게 %d 데미지 -> 적 체력: 0\n", PlayerDamage);
				break;
			}
			else
			{
				printf("적에게 %d 데미지 -> 적 체력: %d\n", PlayerDamage, EnemyHp);
			}

			//적 턴
			int EnemyDamage = DamageDist(RandomEngine);
			int EnemyCritical = PercentDist(RandomEngine);

			if (EnemyCritical <= 10)
			{
				EnemyDamage = EnemyDamage * 2;
				printf("적 크리티컬 공격! ");
			}
			else
			{
				printf("적 공격! ");
			}
			PlayerHp = PlayerHp - EnemyDamage;

			if (PlayerHp <= 0)
			{
				printf("플레이어에게 %d 데미지 → 플레이어 HP: 0\n", EnemyDamage);
				break;
			}
			else
			{
				printf("플레이어에게 %d 데미지 → 플레이어 HP: %d\n", EnemyDamage, PlayerHp);
			}
		}

		if (PlayerHp > 0 && EnemyHp <= 0)
		{
			printf("플레이어 승리!");
		}
		else if (EnemyHp > 0 && PlayerHp <= 0)   // 중복 없애
		{
			printf("적 승리!\n");
		}
	}

	int main()
	{
		const int MazeHeight = 10;
		const int MazeWidth = 20;

		// 미로 배열 (0:길, 1:벽, 2:시작, 3:출구)
		int Maze[MazeHeight][MazeWidth] =
		{
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
			{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
			{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
			{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
			{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
			{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
			{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
			{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
		};

		// 플레이어 시작점 
		int PlayerX = 0;
		int PlayerY = 0;

		for (int y = 0; y < MazeHeight; y++)
		{
			for (int x = 0; x < MazeWidth; x++)
			{
				if (Maze[y][x] == 2)
				{
					PlayerX = x;
					PlayerY = y;
				}
			}
		}
		while (true)
		{
			// 미로 변신
			for (int y = 0; y < MazeHeight; y++)
			{
				for (int x = 0; x < MazeWidth; x++)
				{
					if (x == PlayerX && y == PlayerY)
					{
						printf("P ");          // 플레이어
					}
					else if (Maze[y][x] == 0)  // 길
					{
						printf(". ");
					}
					else if (Maze[y][x] == 1)  // 벽
					{
						printf("# ");
					}
					else if (Maze[y][x] == 2)  // 시작점
					{
						printf("S ");
					}
					else if (Maze[y][x] == 3)  // 출구
					{
						printf("E ");
					}
				}
				printf("\n");
			}
			// 이동
			char Input = 0;
			printf("이동할 수 있는 방향을 선택하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽): \n");
			printf("방향 입력: ");
			std::cin >> Input;

			int PlayerNewX = PlayerX;  // 바로 PlayerX로 하면 벽에 끼어서 되돌리는 코드 또 넣어야 됨.
			int PlayerNewY = PlayerY;
			if
				(Input == 'w' || Input == 'W')
				PlayerNewY--;
			else if
				(Input == 's' || Input == 'S')
				PlayerNewY++;
			else if
				(Input == 'a' || Input == 'A')
				PlayerNewX--;
			else if
				(Input == 'd' || Input == 'D')
				PlayerNewX++;
			// 이동 벽 확인 0 이면 가고 1이면 안감
			if (PlayerNewX >= 0 && PlayerNewX < MazeWidth &&
				PlayerNewY >= 0 && PlayerNewY < MazeHeight)
			{
				if (Maze[PlayerNewY][PlayerNewX] != 1)   // 벽이 아니면 이동
				{
					PlayerX = PlayerNewX;
					PlayerY = PlayerNewY;
				}
				//이벤트
				EventType Result = GetMoveEvent();
				int PlayerHp = 100;

				if (Result == Battle)
				{
					printf("전투 발생!\n");
					RunBattle(PlayerHp);                 // 전투 시작
					if (PlayerHp <= 0)
					{
						printf("게임 오버!\n");
						break;
					}
				}
				else if (Result == Heal)
				{
					int RecoverHp = 100;                    // 고정 회복
					PlayerHp += RecoverHp;
					if (PlayerHp > 100)
						PlayerHp = 100;                  // 최대치 보정
					printf("체력 회복! +%d → 현재 체력: %d/100\n", RecoverHp, PlayerHp);
				}
				else
				{
					printf("아무 일도 없음!\n");
				}
			}
			// 출구
			if (Maze[PlayerY][PlayerX] == 3)  // 아마 플레이어 위치를 임의로 정해서 그런듯
			{
				printf("축하합니다! 출구에 도착했습니다!\n");
				break;
			}
		}
		return 0;
	}





	const char* DirectoryName = ".\\Data\\";

	bool ReadMapFile(const char* MapFileName, std::string& OutDataString) // ReadMapFile(TestData.txt, Data)
	{
		//const char* FilePath = "C:\\Users\\KGA\\Desktop\\c\\Data\\TestData.txt";
		char FilePath[256];
		//MyStringCopy(DirectoryName, FilePath);      // 
		//MyStringCat(FilePath, MapFileName);
		strcpy(FilePath, DirectoryName);              // data 폴더까지만
		strcat(FilePath, MapFileName);                // .txt MyStringCopy MyStringCat 와 같다

		std::ifstream InputFile(FilePath);            // std::ifstream InputFile 한덩어리 (파일)을 읽어오라
		if (!InputFile.is_open())	                  // 파일이 열렸는지 확인하는 함수
		{
			printf("파일을 열 수 없습니다.\n");
			printf("[%s] 경로를 확인하세요.\n", FilePath);
			return false;
		}

		OutDataString = std::string((std::istreambuf_iterator<char>(InputFile)),
		std::istreambuf_iterator<char>());            // InputFile에 있는 글자들을 모두 읽어서 OutDataString에 저장하기

		//printf("파일 내용은 다음과 같습니다.\n");
		//printf("%s\n", FileContents.c_str());       // FileContents안에 있는 문자열을 const char*로 돌려주는 함수
		//const char* temp = DataString.c_str();      // 위에 OutDataString 

		return true;
	}

	bool ParseMapData(std::string & DataString)
	{
		// 소스는 10,20 에 10 앞을 가리킴
		// Current는 1,0,1 에서 1을 가리킴, 10,20 뒤에 \0 를 추가 해서 복사 
		char Source[512];
		char* Current = Source;
		strcpy(Source, DataString.c_str());


		// 첫째 줄 처리
		// 라인 분리하기
		char* LinePtr = GetLine(&Current);             //원래 위치에서 Current 까지 복사

		// 라인 파싱하기
		int SizeNumbers[2] = { 0 };
		ParseLineData(LinePtr, 2, SizeNumbers);


		//printf("Size : %d, %d\n", SizeNumbers[0], SizeNumbers[1]);  // 테스트

		// 맵의 크기를 알았다.
		MazeWidth = SizeNumbers[0];
		MazeHeight = SizeNumbers[1];

		Maze = new int* [MazeHeight];
		for (int y = 0; y < MazeHeight; y++)
		{
			Maze[y] = new int[MazeWidth];
			//memset(&Maze[y], 0, sizeof(int) * MazeWidth);
		}

		//Current가 \0 dl 될때까지 반복
		//Current = GetNextLine(Current);  // 한줄 잘라내고
		//ParseLineData(Line, MazeWidth, Maze[Index]);          // 파싱해서 데이터 넣고
		int HeightIndex = 0;
		while ((*Current) != '\0')
		{
			LinePtr = GetLine(&Current);
			ParseLineData(LinePtr, MazeWidth, Maze[HeightIndex]);
			HeightIndex++;

			if (HeightIndex >= MazeHeight)
				break;
		}
		return true;
	}

char* GetLine(char** InOutSource)
{
	char* Result = (*InOutSource);                            // char* 
	int Index = FindCharIndex((*InOutSource), '\n');
	if (Index == -1)                                          // 못찾았을때
	{
		(*InOutSource) = (*InOutSource) + FindCharIndex((*InOutSource), '\0');
	}
	else
	{
		*((*InOutSource) + Index) = '\0';                     // 한칸 이동해서 직접 \0 채우고
		(*InOutSource) = (*InOutSource) + Index + 1;          // 자신의 값으로 갈아치움
	}
	return Result;
	//return strtok(Source, "\n") + 1;               
	//strtok : " " 안에 문자 찾아서 위치를 준다. 연속에서 할 수 있다.
}

void ParseLineData(char* LineData, int ArraySize, int* OutArray)  // 한줄 파싱
{
	const char* LinePointer = LineData;
	int SizeIndex = 0;
	while ((*LinePointer) != '\0')
	{
		int Result = 0;
		while ((*LinePointer) != ',' && (*LinePointer) != '\0')
		{
			Result = Result * 10 + (*LinePointer) - '0';	      // 숫자 만들기
			LinePointer++;
		}
		OutArray[SizeIndex] = Result;	                          // 숫자 결과 저장
		SizeIndex++;

		if (ArraySize <= SizeIndex)	                              // 배열 크기 이상으로 넣는 것을 방지
			break;

		if (*LinePointer < '0' || *LinePointer > '9')	          // 숫자 외에는 스킵
			LinePointer++;
	}
}

void InitializeMaze()
{
	std::string Data;
	ReadMapFile("MapData.txt", Data);	// 파일 읽기

	ParseMapData(Data);	                // 읽은 데이터로 맵 정보 구성하기
}

void ClearMaze()
{
	if (Maze != nullptr)
	{
		for (int i = 0; i < MazeHeight; i++)
		{
			delete[] Maze[i];
			Maze[i] = nullptr;
		}
		delete[] Maze;
		Maze = nullptr;
	}
}


void Day202050911()
{
	InitializeMaze();

	ClearMaze();
}




//int FindCharIndex(const char* TargetString, const char TargetCharacter)
//{
//	int Index = 0;
//	bool IsFind = false;
//	while (TargetString[Index] != '\0')
//	{
//		if (TargetString[Index] == TargetCharacter)
//		{
//			IsFind = true;
//			break;
//		}
//		Index++;
//	}
//	if (!IsFind)
//	{
//		Index = -1;
//	}
//	return Index;
//}

int FindCharIndex(const char* TargetString, const char TargetCharacter)
{
	int Index = 0;

	while (TargetString[Index] != '\0')
	{
		if (TargetString[Index] == TargetCharacter)
		{
			return Index;
		}
	}
	Index++;
}

