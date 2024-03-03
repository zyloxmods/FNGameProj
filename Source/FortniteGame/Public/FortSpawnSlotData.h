#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortRiftSlotStatus.h"
#include "FortSpawnSlotData.generated.h"

class AFortAIPawn;

USTRUCT(BlueprintType)
struct FFortSpawnSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnSlotLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAIPawn* OccupyingAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortRiftSlotStatus::Type> SlotStatus;
    
    FORTNITEGAME_API FFortSpawnSlotData();
};

