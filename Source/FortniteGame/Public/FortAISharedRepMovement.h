#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EFortAILODLevel.h"
#include "GameplayAbilityRepSharedAnim_Index.h"
#include "FortAISharedRepMovement.generated.h"

USTRUCT(BlueprintType)
struct FFortAISharedRepMovement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRepMovement RepMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RepTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 RepMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortAILODLevel RepCurrentFortAILODLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilityRepSharedAnim_Index RepSharedAnimInfo;
    
    FORTNITEGAME_API FFortAISharedRepMovement();
};

