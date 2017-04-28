
??? read_laser_range_finder() {
  
}

#define MAX_VALUES 25
int values[MAX_VALUES];

void takeMeasurements() {
  for(int i = 0; i < MAX_VALUES; i++)
    values[i] = read_laser_range_finder();
}

float getAverage() {
  int sum = 0;
  for (int i = 0; i < MAX_VALUES; i++)
    sum += values;
  return (float) sum / MAX_VALUES;
}

float getVelocity(float newVel) {
  static float oldVel = 0;

  avg = (oldVel - newVel) / 2; // next version maybe integrate that values array?

  oldVel = newVel;
  return avg;
}



void setup() {
  // set up screen
  // print hello world
  
  // setup range finder
}

void loop() {
  takeMeasurements();
  float avg = getAverage();
  float vel = getVelocity(avg);

  // clear the screen
  // print to console
  // print to screen
}
