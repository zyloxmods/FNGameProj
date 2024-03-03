#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CreativeItemInfo.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FCreativeItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DesiredSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseVolumeToSpawn;
    
    FORTNITEGAME_API FCreativeItemInfo();
};

