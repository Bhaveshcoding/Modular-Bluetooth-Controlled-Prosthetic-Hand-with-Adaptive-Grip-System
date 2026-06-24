# Bluetooth-Controlled Prosthetic Hand

---

# NOTE

This project was originally started for Stasis and is now being transferred to Horizons with permission from both organizers.

No funding was received from Stasis, and the project was never approved there. Since Stasis does not require the use of Lapse, I kindly request that project hours be evaluated based on my submitted journal entries.

Thank you for your consideration.

---

# What It Is

This is a Bluetooth-controlled prosthetic hand that uses servo motors and a simple tendon-driven mechanism to move the fingers. The hand is controlled using an HC-05 Bluetooth module and an Arduino Uno.

I designed all of the CAD myself and built the electronics around it. The goal wasn't to make a medical-grade prosthetic, but to understand how prosthetic hands work and build a working prototype from scratch.

---

## Why I Made This

I've always found prosthetics and assistive technology interesting, so I wanted to try building one myself.

This project gave me a chance to learn more about CAD, mechanical design, electronics, servo control, and how tendon-driven systems work. It also helped me understand some of the challenges involved in designing devices that assist people in everyday tasks.

The project is fairly simple, but it taught me a lot and was a fun way to combine mechanical and electrical design into one build.

---

## CAD

### NOTE

Arm + Electronics Assembly - [(.7z Archive)](CAD/Arm+electronics.7z)

Contains the mandatory **.STEP** file with the complete assembly and integrated electronics. The archive is compressed because of its size.

Google Drive Link:

https://drive.google.com/file/d/1kVEwLl6yhaGHvDUCItGak4jiyQgdJik9/view?usp=sharing

#### STEP Format Files

```text
CAD/3D%20Files%20Robo%20Hand
```

#### F3D & F3Z Format Files

```text
CAD/ROBO%20hand%20files(f3d)
```

## CAD of the Project

#### Full CAD Model

```text
CAD\ROBO hand files(f3d)\hand_3D_RENDER.f3z
```
### Picture of the 3D Printed Model

![3D printed arm Model](CAD/Full_arm.jpg)

---

### CAD Render

![Full CAD Model](CAD/3d_RENDER\(front\).jpg)

---

### Another View

![Side View](CAD/3d_RENDER\(home\).jpg)

---

## Design

### Finger Design

![Finger design](Design/FINGER.jpg)

---

### Full Hand Design

![Full Hand design](Design/FULLHNAD.jpg)

---

# Electronics

### TinkerCAD Circuit

https://www.tinkercad.com/things/5ojhNEz72F2-circuit-prosthetichand/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=ptQnLJyK70PxerSe2FhhfwA5_K1Ssgsr-BoHAHVJKSI

---

### Wiring Diagram

![Wiring Diagram](Electronics/wiring_diagram.Jpg)

---

### TinkerCAD Simulation

![TinkerCAD Setup](Electronics/Electronics_Map\(tinkercad\).jpg)

---

I didn't design a PCB for this version of the project. Everything was first prototyped on a breadboard so that testing and changes could be made easily.

---

## Main Components

* Arduino UNO R3
* 5 × SG90/MG90S Servo Motors
* HC-05 Bluetooth Module
* 18650 Battery Pack
* Breadboard
* Jumper Wires
* Nylon Thread (Tendon Mechanism)
* Elastic Thread (Finger Return Mechanism)

---

## Wiring

### Servo Connections

* D3 → Servo 1
* D5 → Servo 2
* D6 → Servo 3
* D9 → Servo 4
* D10 → Servo 5

### Bluetooth Connections

* HC-05 TX → Arduino RX
* HC-05 RX → Arduino TX

### Power

* External battery pack → Servo power
* Common ground shared between all components

---

# Firmware

The firmware allows the hand to perform a few preset grip patterns as well as individual finger control.

Firmware:

[Firmware](Firmware/hand_control.ino)

---

## Grip Modes

* **O** → Open Hand
* **P** → Power Grip
* **I** → Pinch Grip
* **H** → Partial Grip

---

## Individual Finger Control

* **A / a** → Open / Close Finger 1
* **B / b** → Open / Close Finger 2
* **C / c** → Open / Close Finger 3
* **D / d** → Open / Close Finger 4
* **E / e** → Open / Close Finger 5

To make the movement look less jerky, the servos move gradually instead of jumping directly between positions.
# Files Included

* `/CAD` → STEP, F3D, and F3Z CAD files
* `/Firmware` → Arduino source code
* `/Electronics` → Wiring diagrams and TinkerCAD files
* `/Design` → Design images and references
* `BOM.csv` → Complete bill of materials

---

# Bill of Materials (BOM)

| Name                           | Purpose                      | Quantity | Total Cost (USD) | Link                                                                                            | Distributor   |
| ------------------------------ | ---------------------------- | -------- | ---------------- | ----------------------------------------------------------------------------------------------- | ------------- |
| Loctite Super Glue Power Gel   | Joining 3D-printed parts     | 1        | 4.00             | https://www.amazon.in/Loctite-Flexible-Superglue-Non-Drip-Applications/dp/B001C42J9I            | AMAZON        |
| 3D Printing Material (PLA/ABS) | Printing the hand components | 1        | 4.00             | https://almightyfila.com/product/pla-3d-printing-filament/                                      | ALMIGHTY FILA |
| Screws & Fasteners             | Mechanical assembly          | 6        | 0.50             | https://robu.in/product/easymech-ss-304-csk-countersunk-philips-head-m2-5-x-6-mm-bolt-25-pcs-2/ | ROBU          |
| Nylon Thread                   | Tendon mechanism             | 1        | 2.00             | https://www.meesho.com/ultra-thin-strong-bright-nylon-high-tensile-strength-thread              | MEESHO        |
| Elastic Thread 2mm             | Finger return mechanism      | 1        | 1.00             | https://www.meesho.com/elastic-band-cord-2mm                                                    | MEESHO        |
| Breadboard                     | Circuit prototyping          | 1        | 0.50             | https://robocraze.com/products/half-breadboard                                                  | ROBOCRAZE     |
| Jumper Wires (M-M & M-F)       | Electrical connections       | 20       | 0.50             | https://robocraze.com/products/f2m-jumper-wires-20cm-40pcs                                      | ROBOCRAZE     |
| 3.7V 2900mAh 18650 Battery     | Power source                 | 2        | 3.00             | https://robocraze.com/products/3-7v-2900mah-18650-battery                                       | ROBOCRAZE     |
| HC-05 Bluetooth Module         | Wireless control             | 1        | 2.50             | https://robocraze.com/products/hc-05-bluetooth-module                                           | ROBOCRAZE     |
| Arduino UNO R3                 | Main controller              | 1        | 19.00            | https://robocraze.com/products/arduino-uno-original                                             | ROBOCRAZE     |
| Servo Motor (SG90/MG90S)       | Finger movement              | 5        | 5.00             | https://robocraze.com/products/sg90-micro-servo-motor                                           | ROBOCRAZE     |

---

# Current Status

At the time of writing this README:

* CAD design is complete.
* Electronics design is complete.
* Firmware has been written.
* Wiring diagrams and documentation are finished.

The next step is full assembly and real-world testing of the hand.

---

# Future Improvements

There are quite a few things I'd like to improve in future versions:

* Assemble and test the full system
* Improve tendon routing and reduce friction
* Add force feedback or grip sensing
* Design a custom PCB instead of using a breadboard
* Make the hand more durable and compact
* Experiment with additional grip patterns

---

# AI-Generated Content Notice

AI tools were used to assist with parts of the documentation and writing process. All design work, CAD models, electronics, firmware, and project development were completed by me.

---

# Final Thoughts

This project started as a way for me to learn more about prosthetics, CAD, and electronics.

While it's still a prototype, I learned a lot about designing mechanical systems, working with servos, routing tendon mechanisms, and integrating hardware with software. Building everything from the CAD model to the control system gave me a much better understanding of how prosthetic devices work.

I hope this repository is useful to anyone interested in robotics, assistive technology, or building their own prosthetic hand projects.
