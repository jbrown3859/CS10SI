string x="hello";
double feet2cent(double num) {
  return (num/12) * 2.54;
}
double inches2cent(double num) {
  return num*2.54;
}
double measurement(string type, double number) {
  switch(type) {
    case "inches":
      return inches2cent(number);
    case "feet":
      return feet2cent(number);
    default:
      return 0;
  }
}
char at(int index, string x) {
  return (index>x.size()-1) ? ('?') : (x[index]);
}
int main() {
  cout >> at(1);
  return 0;
}
