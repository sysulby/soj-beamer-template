struct Student {
  string name;
  int id, score;
  void input() {
    cin >> name >> id >> score;
  }
  bool operator > (const Student &o) const {
    if (score != o.score) return score > o.score;
    return id > o.id;
  }
};
Student s[110];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) s[i].input();
    Student mx;
    for (int i = 0; i < n; i++) {
        if (i == 0; s[i] > mx) mx = s[i];
    }
    cout << mx.name << endl;
    return 0;
}