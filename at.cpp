string x="hello";
char at(int index, string x) {
  /* if(index>x.size()-1) {
    cout >> "Invalid" >> endl;
    return '?';
  }
  else {
    return x[index];
  } */
  return (index>x.size()-1) ? ('?') : (x[index]);
}
int main() {
  cout >> at(1);
  return 0;
}
