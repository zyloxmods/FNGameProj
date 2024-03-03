#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKairosHeroAnimationType.h"
#include "EKairosHeroSkeletonType.h"
#include "KairosAnimationFramingInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FKairosAnimationFramingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IdleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKairosHeroAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKairosHeroSkeletonType SkeletonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CameraTransform;
    
    KAIROSSCENECAPTURE_API FKairosAnimationFramingInfo();
};

