#include <stdio.h>
#include "LinkedList.h"

LinkedList::~LinkedList()                 // 소멸자
{
	ListNode* Current = Head;             // 헤드 주소 
	while (Current != nullptr) 
	{
		ListNode* NodeToDelete = Current;
		Current = Current->Next;
		delete NodeToDelete;
		NodeToDelete = nullptr;
	}
}

//Add는 항상 Tail 뒤에 새 노드 붙이고 Tail 갱신하는 과정
void LinkedList::Add(int32 InData)
{
	ListNode* NewNode = new ListNode(InData);  

	if (Head == nullptr)
	{
		Head = NewNode;          
		Tail = NewNode;
	}
	else
	{
		Tail->Next = NewNode;    
		Tail = NewNode;          
	}
	Size++;
}

// 데이터를 특정 위치에 추가하는 함수(범위를 벗어나면 마지막에 추가)
void LinkedList::InsertAt(int32 InData, uint32 InPosition)
{
	if (InPosition > Size)
	{
		InPosition = Size; 
	}
	if (InPosition == Size)
	{
		Add(InData);      
		return;
	}

	ListNode* NewNode = new ListNode(InData);  
	if (InPosition == 0)
	{
		NewNode->Next = Head; 
		Head = NewNode;      
	}
	else
	{
		ListNode* Prev = Head;                      
		const uint32 TargetIndex = InPosition - 1;
		for (uint32 i = 0; i < TargetIndex; i++)
		{
			Prev = Prev->Next;
		}
		NewNode->Next = Prev->Next;                
		Prev->Next = NewNode;                     
	}
	Size++;   
}

//데이터를 삭제하는 함수(InData와 같은 값을 가지는 노드를 삭제하는 함수.중복 없음.)
void LinkedList::Remove(int32 InData)
{
	if (IsEmpty()) 
		return;

	ListNode* NodeToDelete = nullptr;   
	ListNode* PrevNode = nullptr;      

	if (Head->Data == InData)
	{
		NodeToDelete = Head;   
		Head = Head->Next;     
		if (IsEmpty())
		{
			Tail = nullptr;    
		}
	}
	else
	{
		PrevNode = Head;      
		while (PrevNode->Next != nullptr        
			&& PrevNode->Next->Data != InData) 
		{
			PrevNode = PrevNode->Next;
		}
		if (PrevNode->Next != nullptr)
		{
			NodeToDelete = PrevNode->Next;      
			PrevNode->Next = NodeToDelete->Next; 
			if (NodeToDelete == Tail)
				Tail = PrevNode;                 
		}
	}
	if (NodeToDelete != nullptr)   
	{
		delete NodeToDelete;       
		NodeToDelete = nullptr;
		Size--;                     
	}
	else
	{
		printf("오류 : %d값을 가진 노드가 없습니다.\n", InData);
	}
}

// 데이터를 삭제하는 함수 (Position 번째의 데이터를 삭제하는 함수, 범위 벗어나면 에러만 출력.)
void LinkedList::RemoveAt(uint32 InPosition)
{
	if (InPosition >= Size)
	{
		printf("오류: %u위치는 범위를 벗어났습니다.(현재 크기: %u)\n", InPosition, Size);
		return;
	}

	ListNode* NodeToDelete = nullptr;   
	if (InPosition == 0)
	{
		NodeToDelete = Head;
		Head = Head->Next;
		if (IsEmpty())
		{
			Tail = nullptr; 
		}
	}
	else
	{
		ListNode* Prev = Head;
		const uint32 TargetIndex = InPosition - 1;
		for (uint32 i = 0; i < TargetIndex; i++)
		{
			Prev = Prev->Next;           
		}
		NodeToDelete = Prev->Next;        
		Prev->Next = NodeToDelete->Next; 
		if (NodeToDelete == Tail)
		{
			Tail = Prev;       
		}
	}

	delete NodeToDelete;       
	NodeToDelete = nullptr;    
	Size--;                    
}

// InData를 가진 노드를 찾아 리턴하는 함수(없으면 nullptr 리턴)
ListNode* LinkedList::Search(int32 InData) const
{
	ListNode* Result = nullptr;  
	ListNode* Current = Head;   
	while (Current != nullptr)   
	{
		if (Current->Data == InData)
		{
			Result = Current;    
			break;
		}
		Current = Current->Next;
	}

	return Result;
}

void LinkedList::PrintList() const
{
	if (IsEmpty())
	{
		printf("리스트가 비어있습니다.\n");
		return;
	}

	printf("리스트(크기:%u) : ", Size);
	ListNode* Current = Head;
	while (Current)                       
	{
		printf("%d -> ", Current->Data); 
		Current = Current->Next;
	}
	printf("nullptr\n");
}




















/*
LinkedList::~LinkedList()    // 소멸자
{
	ListNode* Current = Head;
	while (Current)  // Current != nullptr  Current가 있으면 반복해라
	{
		ListNode* NodeToDelete = Current;
		Current = Current->Next;
		delete NodeToDelete;
		NodeToDelete = nullptr;
	}
}

//Add는 항상 Tail 뒤에 새 노드 붙이고 Tail 갱신하는 과정
void LinkedList::Add(int32 InData)
{
	// 데이터를 리스트에 하나 추가하는 함수 (리스트의 마지막에 추가)
	ListNode* NewNode = new ListNode(InData);  // 새 노드 하나 생성

	if (IsEmpty())               // if(Head == nullptr) 리스트가 비었다.
	{
		Head = NewNode;          // 하나밖에 없으니까 새노드가 Head
		Tail = NewNode;
	}
	else
	{
		Tail->Next = NewNode;    // 마지막 노드 뒤에 새 노드 추가
		Tail = NewNode;          // 새 노드를 새로운 마지막 노드로 설정
	}
	Size++;
}

// 데이터를 특정 위치에 추가하는 함수(범위를 벗어나면 마지막에 추가)
void LinkedList::InsertAt(int32 InData, uint32 InPosition)
{
	if (InPosition > Size)
	{
		InPosition = Size; // InPosition이 범위를 벗어나면 최대치로 설정
	}
	if (InPosition == Size)
	{
		Add(InData);       // 마지막 위치에 추가하는 경우는 Add를 쓰자.
		return;
	}

	ListNode* NewNode = new ListNode(InData);   // 새 노드 생성
	if (InPosition == 0)
	{
		// 맨 앞에 추가하는 경우
		NewNode->Next = Head; // 새 노드 뒤에 기존 Head를 붙이고
		Head = NewNode;       // 새 노드를 새 Head로 설정
	}
	else
	{
		// 중간에 추가하는 경우
		ListNode* Prev = Head;                      // Prev노드를 찾기 위해 Head부터 하나씩 전진
		const uint32 TargetIndex = InPosition - 1;
		for (uint32 i = 0; i < TargetIndex; i++)
		{
			Prev = Prev->Next;
		}
		NewNode->Next = Prev->Next;                 // 새 노드의 다음 노드를 이전 노드의 다음 노드로 설정
		Prev->Next = NewNode;                       // 이전 노드의 다음 노드를, 새 노드로 설정
	}

	Size++;   // 노드가 추가되었으니 사이즈 증가
}


//ListNode* Next = nullptr;  // 다음 노드의 주소(nullptr이면 다음 노드가 없다)
//데이터를 삭제하는 함수(InData와 같은 값을 가지는 노드를 삭제하는 함수.중복 없음.)
void LinkedList::Remove(int32 InData)
{
	if (IsEmpty())  // 비어있으면 무조건 없으니 그냥 끝낸다.
		return;

	ListNode* NodeToDelete = nullptr;   // 삭제할 노드
	ListNode* PrevNode = nullptr;       // 삭제할 노드의 앞 노드

	if (Head->Data == InData)
	{
		// 삭제할 데이터가 Head다 
		NodeToDelete = Head;   // 삭제할 데이터로 Head를 설정
		Head = Head->Next;     // Head를 Head의 다음 노드로 설정
		if (IsEmpty())
		{
			Tail = nullptr;    // Head의 삭제 결과 리스트가 비게 되면 Tail로 nullptr 설정
		}
	}
	else
	{
		// 삭제할 데이터가 Head가 아니다.
		PrevNode = Head;       // PrevNode를 찾기. Head에서 시작해서 계속 다음으로 전진하며 찾는다.
		while (PrevNode->Next != nullptr         // Prev의 다음 노드가 비어있지 않다.
			&& PrevNode->Next->Data != InData)   // 그리고 Prev의 다음 노드의 데이터가 찾는 데이터가 아니다.
		{
			PrevNode = PrevNode->Next;
		}
		if (PrevNode->Next != nullptr)
		{
			// PrevNode를 찾았다면
			NodeToDelete = PrevNode->Next;       // Prev의 다음 노드를 삭제할 노드로 설정
			PrevNode->Next = NodeToDelete->Next; // Prev의 다음 노드를 삭제할 노드의 다음 노드로 설정
			if (NodeToDelete == Tail)
				Tail = PrevNode;                 // 삭제할 노드가 마지막 노드면 Prev가 새로운 마지막 노드
		}
	}
	if (NodeToDelete != nullptr)    // if (NodeToDelete) 같은 식
	{
		delete NodeToDelete;        // NodeToDelete를 찾았으면 delete
		NodeToDelete = nullptr;
		Size--;                     // Size 1 줄이기
	}
	else
	{
		// NodeToDelete를 못 찾았으면 에러 출력
		printf("오류 : %d값을 가진 노드가 없습니다.\n", InData);
	}
}

// 데이터를 삭제하는 함수 (Position 번째의 데이터를 삭제하는 함수, 범위 벗어나면 에러만 출력.)
void LinkedList::RemoveAt(uint32 InPosition)
{
	if (InPosition >= Size)
	{
		printf("오류: %u위치는 범위를 벗어났습니다.(현재 크기: %u)\n", InPosition, Size);
		return;
	}
	
	ListNode* NodeToDelete = nullptr;   // 삭제할 노드의 주소가 저장될 변수
	if (InPosition == 0)
	{
		// 해드를 삭제하는 경우
		NodeToDelete = Head;
		Head = Head->Next;
		if (IsEmpty())
		{
			Tail = nullptr; // 리스트가 비게 되면 Tail도 nullptr로 설정
		}
	}
	else
	{
		// 해드가 아닌 경우
		ListNode* Prev = Head;
		const uint32 TargetIndex = InPosition - 1;
		for (uint32 i = 0; i < TargetIndex; i++)
		{
			Prev = Prev->Next;            // 해드부터 시작해서 삭제할 노드의 앞 노드 찾기
		}
		NodeToDelete = Prev->Next;        // 삭제할 노드는, 앞노드의 다음 노드
		Prev->Next = NodeToDelete->Next;  // 앞노드의 다음 노드는, 삭제할 노드의 다음 노드
		if (NodeToDelete == Tail)
		{
			Tail = Prev;       // 삭제할 노드가 Tail이면, 이전 노드가 새 Tail
		}
	}

	delete NodeToDelete;       // 실제 삭제하고
	NodeToDelete = nullptr;    // 무조건 하는 습관 들이기(좋은 습관)
	Size--;                    // 사이즈 줄이기
}

// InData를 가진 노드를 찾아 리턴하는 함수(없으면 nullptr 리턴)
ListNode* LinkedList::Search(int32 InData) const
{
	ListNode* Result = nullptr;  // 찾은 결과가 들어갈 포인터 변수
	ListNode* Current = Head;    // 하나씩 진행해 나가기 위한 임시 변수
	while (Current != nullptr)   // while(Current)
	{
		if (Current->Data == InData)
		{
			Result = Current;    // 찾았으면 Result에 기록하고 while 종료
			break;
		}
		Current = Current->Next;
	}

	return Result;
}

void LinkedList::PrintList() const
{ 
	if (IsEmpty())
	{
		printf("리스트가 비어있습니다.\n");
		return;
	}

	printf("리스트(크기:%u) : ", Size);
	ListNode* Current = Head;
	while (Current)                       // Current !- nullptr
	{
		printf("%d -> ", Current->Data);  // Head부터 하나씩 출력
		Current = Current->Next;
	}
	printf("nullptr\n");
}
*/
