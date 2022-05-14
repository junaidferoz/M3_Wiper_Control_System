# ___TEST PLAN___
## _High level test plan_
| ID | Description | Expected output | Actual output | Type of test |
|----|-------------|-----------------|---------------|--------------|
|HT01|Car switches ON on button press | Car switches ON | Car switches ON | boundary |
|HT02|Car wiper get switched on after single press of button | Wipers get activated | Wipers start operatiing | Scenario |
|HT03|Car switches OFF after long button press | Car switches OFF | Car switches OFF | boundary |

## _Low level test plan_
| ID | Description | Expected output | Actual output | Type of test |
|----|-------------|-----------------|---------------|--------------|
|LT01|Press button for 2 secs | Red light gets ON | Red light gets ON | Boundary |
|LT02| Press button once | Green, orange and blue lights blink | all the other 3 LEDs (blue, green and orange) blink | scenario |
|LT03| Press button once while the LEDs are blinking | LEDs except the red LED will blink even faster | LEDs except the red LED will blink even faster | Scenario |
|LT04| Press button for 2 secs | blinking lights go off first. Then the red light goes off | blinking lights go off first. Then the red light goes off | Boundary |
