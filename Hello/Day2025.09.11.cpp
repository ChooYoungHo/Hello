#define _CRT_SECURE_NO_WARNINGS //scanf ó��
#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__) // �޸� �Ҵ��ߴµ� delete �˷��ִ�
#include <crtdbg.h>
#include <iostream>   // ����� ����
#include <stdio.h>
#include <cstdio>     // stdio.h�� ���ӽ����̽� �߰��� ���� 
#include <time.h>     // �ð� ��
#include <random>
#include <limits.h>
#include "Hello.h"   // ��� ����
#include "Practice.h"
#include "Day2025.09.11.h"
#include <direct.h>
#include <fstream>
#include <string>




	/*
	��ȭ����
	�̷� Ż�� ������ �����Ͽ� �� ���������Ͽ��� ���� ������ ������� �� �����
	������ ���� ����
	ù���� ���� ���̿� ���� ���̰� ����Ǿ� �ִ�.
	ex) 20, 10 �� ���� 20, ���� 10
	�ι�° �� ���ʹ� �̷��� �� ���� �޸�(, )�� �����Ͽ� ���� Ÿ���� ��Ÿ����.
	�޸�(, ),
	\n���� ���� �ٷ� �̵��Ѵ�.
	*/

	/*
	void ReadFile()
	{
		//#include <fstream>	#include <string> �ʿ�
		const char* FilePath = "C:\\Users\\KGA\\Desktop\\c\\Data\\TestData.txt";

		std::ifstream InputFile(FilePath);
		if (!InputFile.is_open())	// ������ ���ȴ��� Ȯ���ϴ� �Լ�
		{
			printf("������ �� �� �����ϴ�.\n");
			printf("[%s] ��θ� Ȯ���ϼ���.\n", FilePath);
			return;
		}

		std::string FileContents(
		(std::istreambuf_iterator<char>(InputFile)),
		std::istreambuf_iterator<char>());	//InputFile�� �ִ� ���ڵ��� ��� �о FileContents�� �����ϱ�

		printf("���� ������ ������ �����ϴ�.\n");
		printf("%s\n", FileContents.c_str());	// FileContents�ȿ� �ִ� ���ڿ��� const char*�� �����ִ� �Լ�

		const char* CharPoint = FileContents.c_str();
		int Row = 0, col = 0;
		int Value = 0;
		bool firstLine = true;
	*/

	

	
	std::random_device Random;
	std::mt19937 RandomEngine(Random());
	std::uniform_int_distribution<int> DamageDist(5, 15);
	std::uniform_int_distribution<int> PercentDist(1, 100); // Ȯ��

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
			int CriticalDamage = PercentDist(RandomEngine);  // ũ��Ƽ�� ������

			if (CriticalDamage <= 10)
			{
				PlayerDamage = PlayerDamage * 2;
				printf("�÷��̾� ũ��Ƽ�� ����!\n");
			}
			else
			{
				printf("�ÿ��̾� ����!\n");
			}
			EnemyHp = EnemyHp - PlayerDamage;

			if (EnemyHp <= 0)
			{
				printf("������ %d ������ -> �� ü��: 0\n", PlayerDamage);
				break;
			}
			else
			{
				printf("������ %d ������ -> �� ü��: %d\n", PlayerDamage, EnemyHp);
			}

			//�� ��
			int EnemyDamage = DamageDist(RandomEngine);
			int EnemyCritical = PercentDist(RandomEngine);

			if (EnemyCritical <= 10)
			{
				EnemyDamage = EnemyDamage * 2;
				printf("�� ũ��Ƽ�� ����! ");
			}
			else
			{
				printf("�� ����! ");
			}
			PlayerHp = PlayerHp - EnemyDamage;

			if (PlayerHp <= 0)
			{
				printf("�÷��̾�� %d ������ �� �÷��̾� HP: 0\n", EnemyDamage);
				break;
			}
			else
			{
				printf("�÷��̾�� %d ������ �� �÷��̾� HP: %d\n", EnemyDamage, PlayerHp);
			}
		}

		if (PlayerHp > 0 && EnemyHp <= 0)
		{
			printf("�÷��̾� �¸�!");
		}
		else if (EnemyHp > 0 && PlayerHp <= 0)   // �ߺ� ����
		{
			printf("�� �¸�!\n");
		}
	}

	int main()
	{
		const int MazeHeight = 10;
		const int MazeWidth = 20;

		// �̷� �迭 (0:��, 1:��, 2:����, 3:�ⱸ)
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

		// �÷��̾� ������ 
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
			// �̷� ����
			for (int y = 0; y < MazeHeight; y++)
			{
				for (int x = 0; x < MazeWidth; x++)
				{
					if (x == PlayerX && y == PlayerY)
					{
						printf("P ");          // �÷��̾�
					}
					else if (Maze[y][x] == 0)  // ��
					{
						printf(". ");
					}
					else if (Maze[y][x] == 1)  // ��
					{
						printf("# ");
					}
					else if (Maze[y][x] == 2)  // ������
					{
						printf("S ");
					}
					else if (Maze[y][x] == 3)  // �ⱸ
					{
						printf("E ");
					}
				}
				printf("\n");
			}
			// �̵�
			char Input = 0;
			printf("�̵��� �� �ִ� ������ �����ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������): \n");
			printf("���� �Է�: ");
			std::cin >> Input;

			int PlayerNewX = PlayerX;  // �ٷ� PlayerX�� �ϸ� ���� ��� �ǵ����� �ڵ� �� �־�� ��.
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
			// �̵� �� Ȯ�� 0 �̸� ���� 1�̸� �Ȱ�
			if (PlayerNewX >= 0 && PlayerNewX < MazeWidth &&
				PlayerNewY >= 0 && PlayerNewY < MazeHeight)
			{
				if (Maze[PlayerNewY][PlayerNewX] != 1)   // ���� �ƴϸ� �̵�
				{
					PlayerX = PlayerNewX;
					PlayerY = PlayerNewY;
				}
				//�̺�Ʈ
				EventType Result = GetMoveEvent();
				int PlayerHp = 100;

				if (Result == Battle)
				{
					printf("���� �߻�!\n");
					RunBattle(PlayerHp);                 // ���� ����
					if (PlayerHp <= 0)
					{
						printf("���� ����!\n");
						break;
					}
				}
				else if (Result == Heal)
				{
					int RecoverHp = 100;                    // ���� ȸ��
					PlayerHp += RecoverHp;
					if (PlayerHp > 100)
						PlayerHp = 100;                  // �ִ�ġ ����
					printf("ü�� ȸ��! +%d �� ���� ü��: %d/100\n", RecoverHp, PlayerHp);
				}
				else
				{
					printf("�ƹ� �ϵ� ����!\n");
				}
			}
			// �ⱸ
			if (Maze[PlayerY][PlayerX] == 3)  // �Ƹ� �÷��̾� ��ġ�� ���Ƿ� ���ؼ� �׷���
			{
				printf("�����մϴ�! �ⱸ�� �����߽��ϴ�!\n");
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
		strcpy(FilePath, DirectoryName);              // data ����������
		strcat(FilePath, MapFileName);                // .txt MyStringCopy MyStringCat �� ����

		std::ifstream InputFile(FilePath);            // std::ifstream InputFile �ѵ�� (����)�� �о����
		if (!InputFile.is_open())	                  // ������ ���ȴ��� Ȯ���ϴ� �Լ�
		{
			printf("������ �� �� �����ϴ�.\n");
			printf("[%s] ��θ� Ȯ���ϼ���.\n", FilePath);
			return false;
		}

		OutDataString = std::string((std::istreambuf_iterator<char>(InputFile)),
		std::istreambuf_iterator<char>());            // InputFile�� �ִ� ���ڵ��� ��� �о OutDataString�� �����ϱ�

		//printf("���� ������ ������ �����ϴ�.\n");
		//printf("%s\n", FileContents.c_str());       // FileContents�ȿ� �ִ� ���ڿ��� const char*�� �����ִ� �Լ�
		//const char* temp = DataString.c_str();      // ���� OutDataString 

		return true;
	}

	bool ParseMapData(std::string & DataString)
	{
		// �ҽ��� 10,20 �� 10 ���� ����Ŵ
		// Current�� 1,0,1 ���� 1�� ����Ŵ, 10,20 �ڿ� \0 �� �߰� �ؼ� ���� 
		char Source[512];
		char* Current = Source;
		strcpy(Source, DataString.c_str());


		// ù° �� ó��
		// ���� �и��ϱ�
		char* LinePtr = GetLine(&Current);             //���� ��ġ���� Current ���� ����

		// ���� �Ľ��ϱ�
		int SizeNumbers[2] = { 0 };
		ParseLineData(LinePtr, 2, SizeNumbers);


		//printf("Size : %d, %d\n", SizeNumbers[0], SizeNumbers[1]);  // �׽�Ʈ

		// ���� ũ�⸦ �˾Ҵ�.
		MazeWidth = SizeNumbers[0];
		MazeHeight = SizeNumbers[1];

		Maze = new int* [MazeHeight];
		for (int y = 0; y < MazeHeight; y++)
		{
			Maze[y] = new int[MazeWidth];
			//memset(&Maze[y], 0, sizeof(int) * MazeWidth);
		}

		//Current�� \0 dl �ɶ����� �ݺ�
		//Current = GetNextLine(Current);  // ���� �߶󳻰�
		//ParseLineData(Line, MazeWidth, Maze[Index]);          // �Ľ��ؼ� ������ �ְ�
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
	if (Index == -1)                                          // ��ã������
	{
		(*InOutSource) = (*InOutSource) + FindCharIndex((*InOutSource), '\0');
	}
	else
	{
		*((*InOutSource) + Index) = '\0';                     // ��ĭ �̵��ؼ� ���� \0 ä���
		(*InOutSource) = (*InOutSource) + Index + 1;          // �ڽ��� ������ ����ġ��
	}
	return Result;
	//return strtok(Source, "\n") + 1;               
	//strtok : " " �ȿ� ���� ã�Ƽ� ��ġ�� �ش�. ���ӿ��� �� �� �ִ�.
}

void ParseLineData(char* LineData, int ArraySize, int* OutArray)  // ���� �Ľ�
{
	const char* LinePointer = LineData;
	int SizeIndex = 0;
	while ((*LinePointer) != '\0')
	{
		int Result = 0;
		while ((*LinePointer) != ',' && (*LinePointer) != '\0')
		{
			Result = Result * 10 + (*LinePointer) - '0';	      // ���� �����
			LinePointer++;
		}
		OutArray[SizeIndex] = Result;	                          // ���� ��� ����
		SizeIndex++;

		if (ArraySize <= SizeIndex)	                              // �迭 ũ�� �̻����� �ִ� ���� ����
			break;

		if (*LinePointer < '0' || *LinePointer > '9')	          // ���� �ܿ��� ��ŵ
			LinePointer++;
	}
}

void InitializeMaze()
{
	std::string Data;
	ReadMapFile("MapData.txt", Data);	// ���� �б�

	ParseMapData(Data);	                // ���� �����ͷ� �� ���� �����ϱ�
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

