#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AthenaCosmeticItemDefinition.h"
#include "FortItemPreviewBoundsInterface.h"
#include "FortUICameraFrameTargetBounds.h"
#include "AthenaPickaxeItemDefinition.generated.h"

class UFortWeaponMeleeItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaPickaxeItemDefinition : public UAthenaCosmeticItemDefinition, public IFortItemPreviewBoundsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponMeleeItemDefinition* WeaponDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PickaxeImpactFXPreviewOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PickaxeDualWieldPreviewOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PickaxeDualWieldPreviewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUICameraFrameTargetBounds CameraFramingBounds;
    
    UAthenaPickaxeItemDefinition();
    
    // Fix for true pure virtual functions not being implemented
};

