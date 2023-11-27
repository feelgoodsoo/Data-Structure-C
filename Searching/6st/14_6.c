// ���Ʈ-���������� ���ڿ��� �˻��ϴ� ���α׷�
#include <stdio.h>

/*--- ���Ʈ-���������� ���ڿ��� �˻��ϴ� �Լ� ---*/
int bf_match(const char txt[], const char pat[])
{
    int pt = 0;     // txt Ŀ��
    int pp = 0;     // pat Ŀ��
    while (txt[pt] != '\0' && pat[pp] != '\0') {
        if (txt[pt] == pat[pp]) {
            pt++;
            pp++;
        }
        else {
            pt = pt - pp + 1;
            pp = 0;
        }
    }
    if (pat[pp] == '\0')
        return pt - pp;
    return -1;
}

int main(void)
{
    char s1[256];       // �ؽ�Ʈ
    char s2[256];       // ����
    puts("���Ʈ-������");
    printf("�ؽ�Ʈ: ");
    scanf("%255s", s1);
    printf("����: ");
    scanf("%255s", s2);
    int idx = bf_match(s1, s2);     // �ؽ�Ʈ(s1)���� ����(s2)�� ���Ʈ-���������� �˻�
    if (idx == -1)
        puts("�ؽ�Ʈ�� ������ �����ϴ�.");
    else
        printf("%d��° ���ں��� match�մϴ�.\n", idx + 1);

    return 0;
}
