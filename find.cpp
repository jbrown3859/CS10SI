// RETURN INDEX, IF NOT, RETURN -1
int find(string s1, string s2) {
  string bigger;
  string smaller;

  bigger=(s1.size()>s2.size()) ? (s1) : (s2);
  smaller=(s1.size()<=s2.size()) ? (s1) : (s2);

  for(int i=0;i<bigger.size();i++) {
    if(bigger[i]==smaller[0]) {
      for(int j=1;j<smaller.size();j++) {
        if(bigger[i+j]==smaller[j]) {
          // DOESNT WORK
        }
      }
    }
  }
  return -1;
}
