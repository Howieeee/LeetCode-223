#include <stdlib.h>
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int totalArea = 0;
        //直接假設無重疊 將兩個矩形面積相加
        totalArea += ( abs(ax1-ax2)*abs(ay1-ay2) + abs(bx1-bx2)*abs(by1-by2) );
        
        
        //如果沒重疊 用左下角點 >= 右上角點來判斷 無重疊
        if( ax1 >= bx2 || ay1 >= by2 || bx1 >= ax2 || by1 >= ay2)
            return totalArea;
        
        //有重疊狀況 找重複的交點
        //從左下頂點開始
        int x = abs( max(ax1,bx1) - min(ax2,bx2) );
        
        //右上頂點開始
        int y = abs( max(ay1,by1) - min(ay2,by2)); 
        
        totalArea -= x*y;
        
        //cout << totalArea ;
        
        return totalArea;
    }
};
