# include <stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d", a+i); //ԭ������ &a[i] �����ߵȼۣ������ a+i��ʵ����һ����ַ��*��a+i�����ǵ�ַ��ֵ 
	}
	for(int i = 0;i<10;i++){
		printf("%d ",*(a+i));
	}
	return 0;
}
