void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT); //merah1
pinMode(12, OUTPUT); //kuning1
pinMode(11, OUTPUT); //hijau1

pinMode(10, OUTPUT); //a1
pinMode(9, OUTPUT); //b1
pinMode(8, OUTPUT); //c1
pinMode(7, OUTPUT); //d1
pinMode(6, OUTPUT); //e1
pinMode(5, OUTPUT); //f1
pinMode(4, OUTPUT); //g1

pinMode(3, OUTPUT); //merah2
pinMode(2, OUTPUT); //kuning2
pinMode(1, OUTPUT); //hijau2

pinMode(14, OUTPUT); //a2
pinMode(15, OUTPUT); //b2
pinMode(16, OUTPUT); //c2
pinMode(17, OUTPUT); //d2
pinMode(18, OUTPUT); //e2
pinMode(19, OUTPUT); //f2
pinMode(20, OUTPUT); //g2

pinMode(22, OUTPUT); //merah3
pinMode(23, OUTPUT); //kuning3
pinMode(24, OUTPUT); //hijau3

pinMode(39, OUTPUT); //a3
pinMode(40, OUTPUT); //b3
pinMode(41, OUTPUT); //c3
pinMode(43, OUTPUT); //d3
pinMode(44, OUTPUT); //e3
pinMode(45, OUTPUT); //f3
pinMode(47, OUTPUT); //g3
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, 1); //merah1 on
digitalWrite(2, 1); //kuning2 on
digitalWrite(24, 1); //hijau3 on

// angka 9
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 8
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 7
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 0); //g1 on

// angka 6
digitalWrite(10, 1); //a1 on
digitalWrite(9, 0); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 5
digitalWrite(10, 1); //a1 on
digitalWrite(9, 0); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 4
digitalWrite(10, 0); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 3
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 1); //g1 on

// angka 2
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 0); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 1); //g1 on

// angka 1
digitalWrite(10, 0); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 0); //g1 on

// angka 0
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 0); //g1 on

delay(1000);

digitalWrite(13, 0); //merah1 off
digitalWrite(2, 0); //kuning2 off
digitalWrite(24, 0); //hijau3 off

delay(1000);

digitalWrite(12, 1); //kuning1 on
digitalWrite(3, 1); //merah2 on
digitalWrite(23, 1); //kuning3 on

// angka 9
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 8
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 7
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 0); //g1 on

// angka 6
digitalWrite(10, 1); //a1 on
digitalWrite(9, 0); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 5
digitalWrite(10, 1); //a1 on
digitalWrite(9, 0); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 4
digitalWrite(10, 0); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 3
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 1); //g1 on

// angka 2
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 0); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 1); //g1 on

// angka 1
digitalWrite(10, 0); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 0); //g1 on

// angka 0
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 0); //g1 on

delay(1000);

digitalWrite(12, 0); //kuning1 off
digitalWrite(3, 0); //merah2 off
digitalWrite(23, 0); //kuning3 off

delay(1000);

digitalWrite(11, 1); //hijau1 on
digitalWrite(2, 1); //kuning2 on
digitalWrite(22, 1); //merah3 on

// angka 9
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 8
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 7
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 0); //g1 on

// angka 6
digitalWrite(10, 1); //a1 on
digitalWrite(9, 0); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 5
digitalWrite(10, 1); //a1 on
digitalWrite(9, 0); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 4
digitalWrite(10, 0); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 3
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 1); //g1 on

// angka 2
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 0); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 1); //g1 on

// angka 1
digitalWrite(10, 0); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 0); //g1 on

// angka 0
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 0); //g1 on

delay(1000);

digitalWrite(11, 0); //hijau1 off
digitalWrite(2, 0); //kuning2 off
digitalWrite(22, 0); //merah3 off

delay(1000);

digitalWrite(12, 1); //kuning1 on
digitalWrite(1, 1); //hijau2 on
digitalWrite(23, 1); //kuning3 on

// angka 9
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 8
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 7
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 0); //g1 on

// angka 6
digitalWrite(10, 1); //a1 on
digitalWrite(9, 0); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 5
digitalWrite(10, 1); //a1 on
digitalWrite(9, 0); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 4
digitalWrite(10, 0); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 1); //g1 on

// angka 3
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 1); //g1 on

// angka 2
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 0); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 1); //g1 on

// angka 1
digitalWrite(10, 0); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 0); //d1 on
digitalWrite(6, 0); //e1 on
digitalWrite(5, 0); //f1 on
digitalWrite(4, 0); //g1 on

// angka 0
digitalWrite(10, 1); //a1 on
digitalWrite(9, 1); //b1 on
digitalWrite(8, 1); //c1 on
digitalWrite(7, 1); //d1 on
digitalWrite(6, 1); //e1 on
digitalWrite(5, 1); //f1 on
digitalWrite(4, 0); //g1 on

delay(1000);

digitalWrite(12, 0); //kuning1 off
digitalWrite(1, 0); //hijau2 off
digitalWrite(23, 0); //kuning3 off

delay(1000);
}
