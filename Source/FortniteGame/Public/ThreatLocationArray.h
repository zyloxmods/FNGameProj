#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ThreatLocationInfo.h"
#include "ThreatLocationArray.generated.h"

USTRUCT(BlueprintType)
struct FThreatLocationArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FThreatLocationInfo> Locations;
    
    FORTNITEGAME_API FThreatLocationArray();
};

