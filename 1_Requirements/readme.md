# WIPER CONTROL SYSTEM
## INTRODUCTION
* Wipers are a common feature in all automobiles now a days (except bikes).
* Wipers are used to keep the windshield clear of any thhing that blocks the vision of the driver.
* It can be rain, snow, sand, etc.<br>
![Car Wiper image](https://user-images.githubusercontent.com/60928280/168252285-7f0a9138-1f9f-4c37-b57b-de87b408b486.png)
* The image shown above is a wiper from a car. <br>
![Wiper operation](https://user-images.githubusercontent.com/60928280/168252556-6f5e5ffe-cad3-45b4-a749-6fe97ad8325b.png)
1. The wipers are connected to a motor. 
2. The motor is operated from a switch inside the car<br>
![wiper switch](https://user-images.githubusercontent.com/60928280/168252725-22061b3d-f85f-4ac4-98ad-28ceda963965.png)
3. When the wiper is switched on, the wiper rotates in standard speed.
4. When the switch is set in speed_high position, it rotates faster.
5. When the switch returns back to the original position, the wipers go back to its original position (OFF position) and stop.
## 4W's and 1H
| __QUESTION__ | __EXPLANATION__ |
|-----------|-----------------------------------------------------|
| ___What?___ | It is a wiper control system that is used to operate the wipers |
| ___Who?___ | This system can be used by anyone operating a vehicle using the wiper system |
| ___When___| This system can be used when the weather conditions prevent clear view of anything in front of the vehicle when driving |
| ___Where?___ | It can be used anywhere like roads in cities, deserts, etc. |
| ___How?___ | First the switch is pressed to operate the wiper. Then the switch positions are changes to vary the wiper speeds |
## HIGH LEVEL REQUIREMENTS
| ID | Description | status |
|----|-------------|--------|
| HLR01 | vehicle switched ON | Implemented |
| HLR02 | Wiper switched ON | Implemented |
| HLR03 | Wiper switched OFF | Implemented |
| HLR04 | Car turned OFF | Implemented |
## LOW LEVEL REQUIREMENTS
| ID | Description | Status |
|----|-------------|--------|
|LLR01|Button makes RED light on (turn on the engine)|Implemented|
|LLR02|LED lights blink (green, blue and orange) indicating wiper action | Implemented |
|LLR03|LEDs blink faster indicating heavy rain, etc. | Implemented |
|LLR04|Long press button makes all blinking lights OFF then RED light OFF | Implemented | 
