#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIHotSpotSlotGenerator.h"
#include "EBoundingBoxSlotDirectionCalculation.h"
#include "Templates/SubclassOf.h"
#include "AIHotSpotSlotGenerator_OnBoundingBox.generated.h"

class UAIHotSpotSlot;

UCLASS(Blueprintable, EditInlineNew)
class UAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIHotSpotSlot> SlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpandBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetFromEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Spacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLimitMaxExtent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMustHitFocusActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoundingBoxSlotDirectionCalculation SlotDirectionCalculation;
    
    UAIHotSpotSlotGenerator_OnBoundingBox();
};

