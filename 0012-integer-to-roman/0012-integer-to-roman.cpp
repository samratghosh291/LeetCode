class Solution {
public:
    string intToRoman(int num) {
        
        string one_place[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string ten_place[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundred_place[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thousand_place[]={"","M","MM","MMM"};
        
        return  thousand_place[(num/1000)]+hundred_place[(num%1000)/100]+ ten_place[(num%100)/10]+one_place[(num%10)];
        
    }
};