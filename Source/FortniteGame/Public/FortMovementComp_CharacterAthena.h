#pragma once
#include "CoreMinimal.h"
#include "AthenaJumpPenalty.h"
#include "FortMovementComp_Character.h"
#include "FortMovementComp_CharacterAthena.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMovementComp_CharacterAthena : public UFortMovementComp_Character {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaJumpPenalty> JumpPenalties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpPenaltyResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetworkSkipSkyDivingCollisionForPawnLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAccelerationFlying;
    
    UFortMovementComp_CharacterAthena();
};

