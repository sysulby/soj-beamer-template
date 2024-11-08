struct Time {
  int hour, minute;
  void input() {
    cin >> hour >> minute;
  }
  void output() {
    cout << hour << " " << minute << endl;
  }
  Time operator + (const Time &o) {
    Time res;   // res 记录当前时间和 o 时间相加的结果
    res.hour = hour + o.hour;
    res.minute = minute + o.minute;
    if (res.minute >= 60) {
      res.hour++;
      res.minute -= 60;
    }
    return res;
  }
};