#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EFortFootstepSurfaceType.h"
#include "FortSurfaceTypeToSurfaceTypeTag.generated.h"

USTRUCT(BlueprintType)
struct FFortSurfaceTypeToSurfaceTypeTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFootstepSurfaceType::Type> FootSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SurfaceTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowsSurfaceRetriggerOfEvents;
    
    FORTNITEGAME_API FFortSurfaceTypeToSurfaceTypeTag();
};

