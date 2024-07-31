#include <stdio.h>

int main()
{
    int m_num, n_num;
    scanf("%d %d", &m_num, &n_num);

    if (m_num >= n_num) {
        for (m_num; m_num >= n_num; m_num--) {
            printf("%d ", m_num);
        }
    }
    else {
        for (m_num; m_num <= n_num; m_num++) {
            printf("%d ", m_num);
        }
    }
    return 0;
}