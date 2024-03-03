#pragma once
#include "CoreMinimal.h"
#include "ParticleHelper.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EFortGameplayCueSourceCondition.h"
#include "FortGameplayCueSpawnCondition.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayCueSpawnCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGameplayCueSourceCondition SourceCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> AllowedSurfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> DisallowedSurfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParticleSignificanceLevel Significance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredDetailMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequireVisible: 1;
    
    FORTNITEGAME_API FFortGameplayCueSpawnCondition();
};

