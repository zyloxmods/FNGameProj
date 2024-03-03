#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "StormWind.h"
#include "StormWindArray.generated.h"

USTRUCT(BlueprintType)
struct FStormWindArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStormWind> StormWinds;
    
    FORTNITEGAME_API FStormWindArray();
};

