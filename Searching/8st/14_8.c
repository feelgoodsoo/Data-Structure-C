// ���̾�-��������� ���ڿ��� �˻��ϴ� ���α׷�
#include <stdio.h>
#include <string.h>
#include <limits.h>

/*--- ���̾�-��������� ���ڿ��� �˻��ϴ� �Լ� ---*/
int bm_match(const char txt[], const char pat[])
{
    int pt;                         // txt Ŀ��
    int pp;                         // pat Ŀ��
    int txt_len = strlen(txt);      // txt ���� ����
    int pat_len = strlen(pat);      // pat ���� ����
    int skip[UCHAR_MAX + 1];        // �ǳʶٱ� ǥ
    for (pt = 0; pt <= UCHAR_MAX; pt++)     // �ǳʶٱ� ǥ �����
        skip[pt] = pat_len;
    for (pt = 0; pt < pat_len - 1; pt++)
        skip[pat[pt]] = pat_len - pt - 1;
    // pt == pat_len - 1
    while (pt < txt_len) {
        pp = pat_len - 1;                   // pat�� ������ ���ں��� �˻�
        while (txt[pt] == pat[pp]) {
            if (pp == 0)
                return pt;
            pp--;
            pt--;
        }
        pt += (skip[txt[pt]] > pat_len - pp) ? skip[txt[pt]] : pat_len - pp;
    }
    return -1;
}

int main(void)
{
    char s1[256];       // �ؽ�Ʈ
    char s2[256];       // ����
    puts("���̾�-�����");
    printf("�ؽ�Ʈ: ");
    scanf("%255s", s1);
    printf("����: ");
    scanf("%255s", s2);
    int idx = bm_match(s1, s2); // ���ڿ� s1���� ���ڿ� s2�� ���̾�-������� ����� �˻�
    if (idx == -1)
        puts("�ؽ�Ʈ�� ������ �����ϴ�.");
    else
        printf("%d��° ���ں��� match�մϴ�.\n", idx + 1);

    return 0;
}