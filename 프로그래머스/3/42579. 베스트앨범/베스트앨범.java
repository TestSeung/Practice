import java.util.*;
import java.util.stream.*;

class Solution {
    public int[] solution(String[] genres, int[] plays) {
        
        HashMap<String,List<Streaming>> map = new HashMap<>();
        
        for(int i =0; i< genres.length;i++){
            Streaming streaming = new Streaming(genres[i],plays[i],i);
            List<Streaming> total;
            
            if(map.containsKey(genres[i])){
                total = map.get(genres[i]);
            }
            else{
                total = new ArrayList<>();
            }
            
            total.add(streaming);
            map.put(genres[i],total);
        }
        
        for(List<Streaming> value: map.values()){
            Collections.sort(value);
        }

       List<String> sortGenres = map.keySet().stream().sorted((s1,s2)->{return getGenrePlayTime(map.get(s2))-getGenrePlayTime(map.get(s1));}).collect(Collectors.toList());
        
        
        List<Integer> answer = new ArrayList<>();
        for(int i=0;i<sortGenres.size();i++){
            String genre = sortGenres.get(i);
            for(int j=0;j < Math.min(map.get(genre).size(), 2); j++){
                answer.add(map.get(genre).get(j).num);
            }
            
        }
        return answer.stream().mapToInt(Integer::intValue).toArray();
    }
    public int getGenrePlayTime(List<Streaming> streams){
            return streams.stream().mapToInt(m->m.play).sum();
        }
    
}
class Streaming implements Comparable<Streaming>{
    public String genres;
    public int play;
    public int num;
    
    Streaming(String genres,int play,int num){
        this.genres = genres;
        this.play = play;
        this.num = num;
    }
    
    @Override
    public int compareTo(Streaming streaming){
        return streaming.play - play;
    }
        
}