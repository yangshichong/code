#include <stdio.h>
int main () {
long long a , b; //ʹ����������long longȷ���������
int m,i;
while (scanf ("%d",&m) != EOF) {
if (m == 0) break; //��m����0ʱ�˳�
scanf ("%lld%lld",&a,&b); //��%lld��long long������ֵ
a = a + b; //����a+b
int ans[50],size = 0;//ans������������ת���õ��ĸ�����λ���ֵ�ֵ,size��ʾ

do { //������ĸ�����λ�ϵ�����ֵ
ans[size ++] = a % m; //��m��ģ
a /= m; //����m
} while (a != 0); //��a��Ϊ0ʱ�ظ��ù���
for (i = size - 1;i >= 0;i --) {
printf("%d",ans[i]);
} //���,ע��˳��Ϊ�Ӹ�λ����λ
printf("\n"); //�������
}
return 0;
}
