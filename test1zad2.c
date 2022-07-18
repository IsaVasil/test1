#include <stdio.h>
#include <stdint.h>


unsigned zerosCount(uint64_t mask1, uint32_t mask2, uint16_t mask3, uint8_t mask4){
    int cnt=0;
   
for (int i=0;i<sizeof(mask1);i++){
    for(int a=0;a<sizeof(mask1);a++){
    if(!(mask1[i]&(1ull << a))==0){
        cnt++;
    }
    }
}
   for (int i=0;i<sizeof(mask2);i++){
    for(int a=0;a<sizeof(mask2);a++){
    if(!(mask2[i]&(1ull << a))==0){
        cnt++;
    }
    }
}
    for (int i=0;i<sizeof(mask3);i++){
    for(int a=0;a<sizeof(mask3);a++){
    if(!(mask3[i]&(1ull << a))==0){
        cnt++;
    }
    }
}
    for (int i=0;i<sizeof(mask4);i++){
    for(int a=0;a<sizeof(mask4);a++){
    if(!(mask4[i]&(1ull << a))==0){
        cnt++;
    }
    }
}
    
    printf("%d",cnt);
}
    


void flipOddBits(uint64_t* mask,, size_t bit){

    int index = bit / (sizeof(*mask) * __CHAR_BIT__);
    for(int i=0;i<(sizeof(*mask) * __CHAR_BIT__);i+2){
     mask[index] ^= ~(1ull << i); 
    }

}
void mirrorBits(uint16_t* mask,size_t n, size_t bit){
    int index = bit / (sizeof(*mask) * __CHAR_BIT__);;
    int a[index];
    for(int i=0;i<index;i++){
   a[i]=mask[i];
    }
    for(int i=index;i>0;i--){
        int k=0;
   a[k]=mask[i];
    }
}

int main(){
uint64_t mask1[] = {0, 0};
uint32_t mask2[] = {0, 0};
uint16_t mask3[] = {0, 0};
uint8_t mask4[] = {0, 0};

//printf("%ld",*mask1);

    return 0;
}