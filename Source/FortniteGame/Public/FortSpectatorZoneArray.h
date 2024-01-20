#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortSpectatorZoneItem.h"
#include "FortSpectatorZoneArray.generated.h"

class AFortPlayerStateZone;

USTRUCT(BlueprintType)
struct FFortSpectatorZoneArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSpectatorZoneItem> SpectatorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AFortPlayerStateZone* OwningState;
    
public:
    FORTNITEGAME_API FFortSpectatorZoneArray();
};

