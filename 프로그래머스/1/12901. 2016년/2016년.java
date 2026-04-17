import java.util.*;

class Solution {
    public String solution(int a, int b) {
        String[] dayWeeks = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
        
        int idx = 5;
        HashMap<Day,String> map = new HashMap<>();

        for(int i = 1;i<=12;i++){
            int monthEnd = 31;
            if(i==2){
                monthEnd = 29;
            }
            else if((i%2==0 && i<7 )||( i%2==1 && 7<i && i<=12))
                monthEnd = 30;

            for(int j=1;j<=monthEnd;j++){
                
                Day d = new Day(i,j);
                map.put(d,dayWeeks[idx]);
                if(idx==6){
                    idx = 0;
                    continue;
                }
                idx++;
            }
            
        }
        Day today = new Day(a,b);
        
        return map.get(today);
    }
    
    class Day{
        int month = 1;
        int day = 1;
        
        public Day(int month,int day){
            this.month = month;
            this.day = day;
        }
     
    @Override
    public boolean equals(Object o){
        if(this == o) return true;
        if(o == null || getClass() != o.getClass()) return false;
        
        Day other = (Day)o;
        
        return other.month == month && other.day == day;
    }
        @Override
        public int hashCode(){
            int result = (int)(month ^ (month >>> 32));
            result = 31 * result + (int)(day ^ (day >>> 32));
            
            return result;
        }
    }
}