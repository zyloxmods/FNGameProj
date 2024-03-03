#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WaitingRoomState.generated.h"

UCLASS(Blueprintable, Config=Game)
class UWaitingRoomState : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GracePeriodMins;
    
public:
    UWaitingRoomState();
};

