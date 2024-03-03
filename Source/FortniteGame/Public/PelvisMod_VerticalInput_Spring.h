#pragma once
#include "CoreMinimal.h"
#include "PelvisMod_VerticalInput_Spring.generated.h"

USTRUCT(BlueprintType)
struct FPelvisMod_VerticalInput_Spring {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalLeanForwardA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalLeanForwardB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalLeanForwardStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalLeanForwardDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalLeanForwardMass;
    
    FORTNITEGAME_API FPelvisMod_VerticalInput_Spring();
};

