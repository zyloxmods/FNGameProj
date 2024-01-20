#pragma once
#include "CoreMinimal.h"
#include "EAppStore.generated.h"

UENUM(BlueprintType)
namespace EAppStore {
    enum Type {
        DebugStore,
        EpicPurchasingService,
        IOSAppStore,
        WeGameStore,
        GooglePlayAppStore,
        KindleStore,
        PlayStationStore,
        XboxLiveStore,
        NintendoEShop,
        SamsungGalaxyAppStore,
        MAX,
    };
}

