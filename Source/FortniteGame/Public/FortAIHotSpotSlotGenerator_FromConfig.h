#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIHotSpotSlotGenerator.h"
#include "FortAIHotSpotSlotGenerator_FromConfig.generated.h"

class UAIHotSpotConfig;

UCLASS(Blueprintable, EditInlineNew)
class UFortAIHotSpotSlotGenerator_FromConfig : public UAIHotSpotSlotGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIHotSpotConfig* BuildingConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bMirrorX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bMirrorY: 1;
    
    UFortAIHotSpotSlotGenerator_FromConfig();
};

