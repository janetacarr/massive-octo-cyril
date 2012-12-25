#include<stdio.h>
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
