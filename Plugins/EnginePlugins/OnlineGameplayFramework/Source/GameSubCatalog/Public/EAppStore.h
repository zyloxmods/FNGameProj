#pragma once
#include "CoreMinimal.h"
#include "EAppStore.generated.h"

UENUM(BlueprintType)
enum class EAppStore : uint8 {
    DebugStore,
    EpicPurchasingService,
    IOSAppStore,
    WeGameStore,
    GooglePlayAppStore,
    KindleStore,
    PlayStation4Store,
    XboxLiveStore,
    NintendoEShop,
    SamsungGalaxyAppStore,
    MicrosoftStore,
    PlayStation5Store,
    MAX,
};

