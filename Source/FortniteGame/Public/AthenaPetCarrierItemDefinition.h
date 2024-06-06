#pragma once
#include "CoreMinimal.h"
#include "AthenaBackpackItemDefinition.h"
#include "FortItemPreviewBoundsInterface.h"
#include "FortUICameraFrameTargetBounds.h"
#include "AthenaPetCarrierItemDefinition.generated.h"

class UAthenaPetItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaPetCarrierItemDefinition : public UAthenaBackpackItemDefinition, public IFortItemPreviewBoundsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaPetItemDefinition* DefaultPet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUICameraFrameTargetBounds CameraFramingBounds;
    
    UAthenaPetCarrierItemDefinition(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

