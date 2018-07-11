
#include <CMMC_Legend.h>
#include <modules/PRAJ_ESPNowModule.h>
#include <CMMC_Sensor.h>

CMMC_Legend os;



void setup()
{
  os.addModule(new PRAJ_ESPNowModule()); 
  os.setup();
  Serial.printf("APP VERSION: %s\r\n", LEGEND_APP_VERSION);
}

void loop()
{
  os.run();
}