class Solution {
    public int lengthOfLastWord(String s) {
        String[] tokens = s.split(" ");
    String last= tokens[tokens.length - 1];
        return last.length();
    }
}
