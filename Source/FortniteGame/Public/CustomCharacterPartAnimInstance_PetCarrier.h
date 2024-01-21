#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartAnimInstance.h"
#include "CustomCharacterPartAnimInstance_PetCarrier.generated.h"

class AFortPlayerPawn;

UCLASS(Blueprintable, NonTransient)
class UCustomCharacterPartAnimInstance_PetCarrier : public UCustomCharacterPartAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsZiplining: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsBallooning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsFlying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInAirNotJumping: 1;
    
    UCustomCharacterPartAnimInstance_PetCarrier();
};

