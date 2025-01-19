//int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
int main(){
    int cow_l=66566,cow_r=66566,line_l=66566,line_r=66566;
    int index;
    for(index=ay1;index<=ay2;index++){
        if((cow_l==66566)&&((index>=by1)&&(index<=by2)))cow_l=index;
        else if((cow_l!=66566)&&(cow_r==66566)&&((index<by1)||(index>by2)))cow_r=index;
    }
    if(cow_l==66566)return (ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1);
    if((cow_l!=66566)&&(cow_r==66566))cow_r=index;

    for(index=ax1;index<=ax2;index++){
        if((line_l==66566)&&((index>=bx1)&&(index<=bx2)))line_l=index;
        else if((line_l!=66566)&&(line_r==66566)&&((index<bx1)||(index>bx2)))line_r=index;
    }
    if(line_l==66566)return (ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1);
    if((line_l!=66566)&&(line_r==66566))line_r=index;
    return (ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1)-((line_r-line_l-1)*(cow_r-cow_l-1));n 0;
    if((line_l!=66566)&&(line_r==66566))line_r=index;
    return (line_r-line_l)*(cow_r-cow_l);
}
