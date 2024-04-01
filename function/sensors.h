// untrasonic
long duration;
/**
 * returned cm (centi meter)
 * Do this on setup
 
    ```
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    ```
 */
int Ultrasonic(const uint8_t trigPin, const uint8_t echoPin){
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    duration = pulseIn(echoPin, HIGH);
    return duration * 0.034 / 2;
}

float Percent(const int max, const int val){
    return (val / max) * 100;
}

/**
 * Do this on setup
 
    ```
    pinMode(pin, INPUT);
    ```
 */
float PercentAnalog(const uint8_t pin, bool reverse){
    if (reverse){
        return Percent(1024, (analogRead(pin) - 1024));
    }else{
        return Percent(1024, analogRead(pin));
    }
}