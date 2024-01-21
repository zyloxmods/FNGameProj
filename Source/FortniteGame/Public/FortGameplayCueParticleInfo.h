#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueAttachInfo.h"
#include "FortGameplayCueSpawnCondition.h"
#include "FortGameplayCueParticleInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FFortGameplayCueParticleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueSpawnCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueAttachInfo Attachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastShadow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCondition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAttachment: 1;
    
    FORTNITEGAME_API FFortGameplayCueParticleInfo();
};

