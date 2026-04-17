#include <Servo.h>

// Servo objects
Servo s1, s2, s3, s4, s5;

// Current positions
int p1 = 10, p2 = 10, p3 = 10, p4 = 10, p5 = 10;

// Limits
int openPos = 10;
int closePos = 90;

// Smooth move
void moveServo(Servo &servo, int &currentPos, int target) {
    int step = (target > currentPos) ? 1 : -1;

    while (currentPos != target) {
    currentPos += step;
    servo.write(currentPos);
    delay(10);
    }
}

// Move all
void moveAll(int t1, int t2, int t3, int t4, int t5) {
    moveServo(s1, p1, t1);
    moveServo(s2, p2, t2);
    moveServo(s3, p3, t3);
    moveServo(s4, p4, t4);
    moveServo(s5, p5, t5);
}

// Grip Modes
void openHand() {
    moveAll(openPos, openPos, openPos, openPos, openPos);
}

void powerGrip() {
    moveAll(closePos, closePos, closePos, closePos, closePos);
}

void pinchGrip() {
    moveAll(closePos, closePos, openPos, openPos, openPos);
}

void partialGrip() {
    int mid = (openPos + closePos) / 2;
    moveAll(mid, mid, mid, mid, mid);
}

// Individual control
void openFinger(int id) {
    switch (id) {
    case 1: moveServo(s1, p1, openPos); break;
    case 2: moveServo(s2, p2, openPos); break;
    case 3: moveServo(s3, p3, openPos); break;
    case 4: moveServo(s4, p4, openPos); break;
    case 5: moveServo(s5, p5, openPos); break;
    }
}

void closeFinger(int id) {
    switch (id) {
    case 1: moveServo(s1, p1, closePos); break;
    case 2: moveServo(s2, p2, closePos); break;
    case 3: moveServo(s3, p3, closePos); break;
    case 4: moveServo(s4, p4, closePos); break;
    case 5: moveServo(s5, p5, closePos); break;
    }
}

void setup() {
    Serial.begin(9600);

    s1.attach(3);
    s2.attach(5);
    s3.attach(6);
    s4.attach(9);
    s5.attach(10);

    openHand();
}

void loop() {
    if (Serial.available()) {
    char cmd = Serial.read();

    switch (cmd) {

      // Grip modes
        case 'O': openHand(); break;
        case 'P': powerGrip(); break;
        case 'I': pinchGrip(); break;
        case 'H': partialGrip(); break;

      // Individual OPEN (A–E)
        case 'A': openFinger(1); break;
        case 'B': openFinger(2); break;
        case 'C': openFinger(3); break;
        case 'D': openFinger(4); break;
        case 'E': openFinger(5); break;

      // Individual CLOSE (a–e)
        case 'a': closeFinger(1); break;
        case 'b': closeFinger(2); break;
        case 'c': closeFinger(3); break;
        case 'd': closeFinger(4); break;
        case 'e': closeFinger(5); break;
    }
    }
}