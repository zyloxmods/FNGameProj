#include "FortGameFeaturePluginManager.h"

UFortGameFeaturePluginManager::UFortGameFeaturePluginManager() {
    this->DisabledPlugins.AddDefaulted(1);
    this->BuiltInGameFeaturePluginsFolder = TEXT("C:/Users/joshu/Desktop/Fortnite Builds/14.40/FortniteGame/Plugins/GameFeatures/");
}

