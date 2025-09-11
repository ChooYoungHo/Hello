#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <stdio.h>
#include <cstdio>  

// extern : 다른 cpp에 이 변수나 함수가 있다고 알려주는 용도.
extern int MazeWidth;
extern int MazeHeight;
extern int** Maze;




int FindCharIndex(const char* TargetString, const char TargetCharacter);

/// <summary>
/// 맵 파일을 읽는 함수
/// </summary>
/// <param name="MapFileName">맵 파일 이름</param>
/// <param name="OutDataString">출력용. 파일에서 읽은 텍스트를 돌려준다.</param>
/// <returns>파일을 읽는데 성공하면 true, 실패하면 false</returns>
bool ReadMapFile(const char* MapFileName, std::string& OutDataString);

/// <summary>
/// string을 받아서 Maze를 채우는데 필요한 데이터를 파싱하는 함수
/// </summary>
/// <param name="DataString">소스용 문자열</param>
/// <returns>true :  파싱 성공, false : 맵 데이터(DataString)가 잘못된 경우</returns>
bool ParseMapData(std::string& DataString);


/// <summary>
/// Source에서 발견되는 \n 다음 위치를 리턴하는 함수
/// </summary>
/// <param name="Source">\n을 찾을 원본 데이터</param>
/// <returns>Source에서 첫줄의 주소</returns>
char* GetLine(char** InOutSource);  //Source 여기서 엔터를 찾아서 다음 라인을 char*에 줄거다


/// <summary>
/// 문자열 한줄을 파싱하는 함수;
/// </summary>
/// <param name="LineData">파싱할 문자열</param>
/// <param name="OutSize">결과가 저장될 배열</param>
/// <param name="Size">결과가 저장될 배열</param>
void ParseLineData(char* LineData, int Size, int* OutSize);



/// <summary>
/// 미로 게임을 초기화 하는 함수
/// </summary>
void InitializeMaze();


/// <summary>
//  할당된 메모리를 해제하는 함수
/// </summary>
void ClearMaze();


/// <summary>
/// 미로 탈출 게임 코드 실행용
/// </summary>


void Day202050911();