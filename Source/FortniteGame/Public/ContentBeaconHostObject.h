#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "ContentBeaconHostObject.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Game)
class FORTNITEGAME_API AContentBeaconHostObject : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    AContentBeaconHostObject();
};

