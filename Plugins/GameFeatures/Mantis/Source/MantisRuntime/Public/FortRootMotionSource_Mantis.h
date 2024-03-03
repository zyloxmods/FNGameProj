#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "FortRootMotionSource_Mantis.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FFortRootMotionSource_Mantis : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTechniqueTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TechniqueMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LatestRepMovementLocation;
    
    MANTISRUNTIME_API FFortRootMotionSource_Mantis();
};

