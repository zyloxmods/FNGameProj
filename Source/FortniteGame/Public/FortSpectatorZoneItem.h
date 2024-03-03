#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortSpectatorZoneItem.generated.h"

class AFortPlayerStateZone;

USTRUCT(BlueprintType)
struct FFortSpectatorZoneItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateZone* PlayerState;
    
    FORTNITEGAME_API FFortSpectatorZoneItem();
};

