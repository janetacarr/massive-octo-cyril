#include<stdio.h>
void str_reverse(char *str,int length,int pos);
int main(){
	char st[5];
	st[0]='h';
	st[1]='e';
	st[2]='l';
	st[3]='l';
	st[4]='o';
	char *ptr;
	ptr=st;
	str_reverse(ptr,5,1);
	int i;
	for(i=0;i<5;i++)
		printf("%c",*(ptr+i));
	return 0;
}
void str_reverse(char *str,int length,int pos){
	if((length%2)!=0){//odd length
		*(str+pos+((length-1)/2)) ^= *(str+((length-1)/2)-pos);//XOR swap
		*(str+((length-1)/2)-pos) ^= *(str+pos+((length-1)/2));
		*(str+pos+((length-1)/2)) ^= *(str+((length-1)/2)-pos);
		
		if(pos==((length-1)/2))
			return;
		str_reverse(str,length,pos+1);
	}else if(((length%2)==0)&&(pos==1)){
		*(str+(length/2)) ^= *(str+(length/2)-pos);
		*(str+(length/2)-pos) ^= *(str+(length/2));
		*(str+(length/2)) ^= *(str+(length/2)-pos);

		str_reverse(str,length,pos+1);
	}else{
		*(str+(length/2)-pos) ^= *(str+(length/2)+pos-1);
		*(str+(length/2)+pos-1) ^= *(str+(length/2)-pos);
		*(str+(length/2)-pos) ^= *(str+(length/2)+pos-1);

		if(pos==(length/2))
			return;
		str_reverse(str,length,pos+1);
	}
	return;
}
