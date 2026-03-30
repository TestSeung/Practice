import java.util.*;

class Solution {
    public int solution(int[] priorities, int location) {
        int answer = 1;
        Deque<Process> dq = new ArrayDeque<>();
        int loc = 0;
        for(int i:priorities){
            dq.add(new Process(i,loc));
            loc++;
        }
      
        while(dq.size()!=0){
            int first = dq.peek().priorities;
            boolean flag = false;
            for(Process i : dq){
                if(first < i.priorities){
                    flag = true;
                }
            }
            if(flag){
                dq.add(dq.peek());
                dq.removeFirst();
            }
            else{
                if(location == dq.peek().location){
                    break;
                }
                dq.removeFirst();
                
                answer++;
            }
            
        }
       
        
        return answer;
    }
    
}

class Process{
    int priorities;
    int location;
    
    Process(int priorities,int location){
        this.priorities = priorities;
        this.location = location;
    }
}