#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <stdio.h>
#include <cstdio>  

// extern : �ٸ� cpp�� �� ������ �Լ��� �ִٰ� �˷��ִ� �뵵.
extern int MazeWidth;
extern int MazeHeight;
extern int** Maze;




int FindCharIndex(const char* TargetString, const char TargetCharacter);

/// <summary>
/// �� ������ �д� �Լ�
/// </summary>
/// <param name="MapFileName">�� ���� �̸�</param>
/// <param name="OutDataString">��¿�. ���Ͽ��� ���� �ؽ�Ʈ�� �����ش�.</param>
/// <returns>������ �дµ� �����ϸ� true, �����ϸ� false</returns>
bool ReadMapFile(const char* MapFileName, std::string& OutDataString);

/// <summary>
/// string�� �޾Ƽ� Maze�� ä��µ� �ʿ��� �����͸� �Ľ��ϴ� �Լ�
/// </summary>
/// <param name="DataString">�ҽ��� ���ڿ�</param>
/// <returns>true :  �Ľ� ����, false : �� ������(DataString)�� �߸��� ���</returns>
bool ParseMapData(std::string& DataString);


/// <summary>
/// Source���� �߰ߵǴ� \n ���� ��ġ�� �����ϴ� �Լ�
/// </summary>
/// <param name="Source">\n�� ã�� ���� ������</param>
/// <returns>Source���� ù���� �ּ�</returns>
char* GetLine(char** InOutSource);  //Source ���⼭ ���͸� ã�Ƽ� ���� ������ char*�� �ٰŴ�


/// <summary>
/// ���ڿ� ������ �Ľ��ϴ� �Լ�;
/// </summary>
/// <param name="LineData">�Ľ��� ���ڿ�</param>
/// <param name="OutSize">����� ����� �迭</param>
/// <param name="Size">����� ����� �迭</param>
void ParseLineData(char* LineData, int Size, int* OutSize);



/// <summary>
/// �̷� ������ �ʱ�ȭ �ϴ� �Լ�
/// </summary>
void InitializeMaze();


/// <summary>
//  �Ҵ�� �޸𸮸� �����ϴ� �Լ�
/// </summary>
void ClearMaze();


/// <summary>
/// �̷� Ż�� ���� �ڵ� �����
/// </summary>


void Day202050911();