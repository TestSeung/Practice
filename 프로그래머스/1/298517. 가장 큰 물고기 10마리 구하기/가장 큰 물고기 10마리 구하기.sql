SELECT ID,LENGTH
FROM FISH_INFO
ORDER BY IFNULL(LENGTH,10) DESC, ID
LIMIT 10;

