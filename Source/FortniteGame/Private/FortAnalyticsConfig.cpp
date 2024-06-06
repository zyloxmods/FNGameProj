#include "FortAnalyticsConfig.h"

UFortAnalyticsConfig::UFortAnalyticsConfig() {
    AltDomains.AddDefaulted(1);
    UrlEndpoint = TEXT("https://datarouter.ol.epicgames.com/");
    EventBlacklist.AddDefaulted(16);
}

