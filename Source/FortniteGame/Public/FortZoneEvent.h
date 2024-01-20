#pragma once
#include "CoreMinimal.h"
#include "FortZoneEvent.generated.h"

class AActor;
class UDataAsset;
class UObject;

USTRUCT(BlueprintType)
struct FFortZoneEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EventFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* EventContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EventInstigator;
    
    FORTNITEGAME_API FFortZoneEvent();
};

