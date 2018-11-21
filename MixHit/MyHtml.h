#ifndef _MY_HTML_H_
#define _MY_HTML_H_

#include "cCocktailMixer.h"
#include "MyString.h"
#include <WiFi.h>
#include "esp_wifi.h"

#define pageHeader "<!DOCTYPE html><html><head><title>MixHit-ESP32-Webserver</title></head><body>"

#define pageFooter "</body></html>"


// HTML-Seite "startpage" erzeugen
#define mStartPage "<h1>Herzlich Willkommen zum MixHit!</h1><a href=\"/listCocktails\">Bestellungen</a>"

// HTML-Seite "alcohol" erzeugen
#define pageOrderListHead "<ul>"

#define pageOrderListFoot  "</ul>"



#endif