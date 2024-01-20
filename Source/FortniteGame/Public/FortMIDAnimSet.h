#pragma once
#include "CoreMinimal.h"
#include "FortFloatParamAnimationInfo.h"
#include "FortLinearColorCurveParamAnimationInfo.h"
#include "FortLinearColorParamAnimationInfo.h"
#include "FortMIDAnimSet.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FFortMIDAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortFloatParamAnimationInfo> FloatParamAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortLinearColorParamAnimationInfo> ColorParamAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortLinearColorCurveParamAnimationInfo> ColorCurveParamAnims;
    
    FORTNITEGAME_API FFortMIDAnimSet();
};

