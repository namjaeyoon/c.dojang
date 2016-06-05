#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

struct NODE {    // 연결 리스트의 노드 구조체
    struct NODE *next;    // 다음 노드의 주소를 저장할 포인터
    int data;             // 데이터를 저장할 멤버
};

int main()
{
    struct NODE *head = malloc(sizeof(struct NODE));    // 머리 노드 생성
                                                        // 머리 노드는 데이터를 저장하지 않음

    struct NODE *node1 = malloc(sizeof(struct NODE));   // 첫 번째 노드 생성
    head->next = node1;                                 // 머리 노드 다음은 첫 번째 노드
    node1->data = 10;                                   // 첫 번째 노드에 10 저장

    struct NODE *node2 = malloc(sizeof(struct NODE));   // 두 번째 노드 생성
    node1->next = node2;                                // 첫 번째 노드 다음은 두 번째 노드
    node2->data = 20;                                   // 두 번째 노드에 20 저장

    node2->next = NULL;                                 // 두 번째 노드 다음은 노드가 없음(NULL)

    struct NODE *curr = head->next;    // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
    while (curr != NULL)               // 포인터가 NULL이 아닐 때 계속 반복
    {
        printf("%d\n", curr->data);    // 현재 노드의 데이터 출력
        curr = curr->next;             // 포인터에 다음 노드의 주소 저장
    }

    free(node2);    // 노드 메모리 해제
    free(node1);    // 노드 메모리 해제
    free(head);     // 머리 노드 메모리 해제

    return 0;
}
