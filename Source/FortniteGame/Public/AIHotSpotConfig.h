#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIHotSpotSlotConfig.h"
#include "AIHotSpotConfig.generated.h"

class UAIHotSpotSlotGenerator;

UCLASS(Blueprintable)
class UAIHotSpotConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIHotSpotSlotConfig> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDetectUnreachableSlots: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIHotSpotSlotGenerator* SlotGenerator;
    
    UAIHotSpotConfig();
};

