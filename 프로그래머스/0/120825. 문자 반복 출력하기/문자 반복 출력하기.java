class Solution {
    public String solution(String my_string, int n) {
        StringBuilder sb = new StringBuilder();
        int temp = 0;
        for(int i =0 ; i<my_string.length();i++){
            for(int j=0;j<n;j++){
                sb.insert(temp+j,my_string.charAt(i));
            }
            temp += n;
        }
        return sb.toString();
    }
}