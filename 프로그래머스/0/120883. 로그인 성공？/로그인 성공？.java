class Solution {
    public String solution(String[] id_pw, String[][] db) {
        String answer = "";
        String ID = id_pw[0];
        String pw = id_pw[1];
        
        for(String[] arr : db){
            if(ID.equals(arr[0])){
                if(pw.equals(arr[1])){
                    return "login";
                }else{
                    return "wrong pw";
                }
            }
        }
        
        return "fail";
    }
}