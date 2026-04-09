class Solution {
    public int solution(int chicken) {
        int mod = 0;
        int coupon = chicken;
        int service = 0;
        
        int ans = 0;
        
        while(coupon >= 10){
            
            service = coupon/10;
            mod = coupon%10;
            ans += service;
            
            coupon = service+mod;

            
        }
        
        return ans;
    }
}