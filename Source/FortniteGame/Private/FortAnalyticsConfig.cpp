#include "FortAnalyticsConfig.h"

UFortAnalyticsConfig::UFortAnalyticsConfig() {
    this->AltDomains.AddDefaulted(1);
    this->UrlEndpoint = TEXT("https://datarouter.ol.epicgames.com/");
}

