#define USE_ARDUINO_INTERRUPTS true  // Enable interrupts for accuracy
#include <PulseSensorPlayground.h>   // Include PulseSensor library

// Define the Pulse Sensor signal pin
const int PULSE_PIN = A0;

// Create a PulseSensorPlayground object
PulseSensorPlayground pulseSensor;

void setup() {
  Serial.begin(9600);  // Start Serial communication

  // Configure the Pulse Sensor
  pulseSensor.analogInput(PULSE_PIN);   // Set the input pin for the sensor
  pulseSensor.setThreshold(550);        // Adjust threshold as needed for sensitivity

  // Start the Pulse Sensor
  if (pulseSensor.begin()) {
    Serial.println("Pulse Sensor initialized.");
  } else {
    Serial.println("Pulse Sensor initialization failed.");
  }
}

void loop() {
  // Get the BPM value
  int bpm = pulseSensor.getBeatsPerMinute();

  // Check if a heartbeat is detected
  if (pulseSensor.sawStartOfBeat()) {
    Serial.println(bpm);  // Output BPM to Serial
  }

  // Process sensor data
  pulseSensor.outputSample();
}
