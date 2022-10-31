class Solution {
    public int romanToInt(String s) {
        int num = 0;
		Map<Character,Integer> map = new HashMap<>();
		map.put('I', 1);
		map.put('V', 5);
		map.put('X', 10);
		map.put('L', 50);
		map.put('C', 100);
		map.put('D', 500);
		map.put('M', 1000);
		int i =0;
		while(i+1<s.length()) {
			char c1 = s.charAt(i);
			char c2 = s.charAt(i+1);
			int first = map.get(c1);
			int second = map.get(c2);
			if(first>=second) {      
				num = num+first;
				i=i+1;
				
			}else {
				num = num + (second-first); 
				i=i+2;
			}
		}
		if(i<s.length()) { 
			num = num + map.get(s.charAt(i));
		}
		return num;
    }
}
