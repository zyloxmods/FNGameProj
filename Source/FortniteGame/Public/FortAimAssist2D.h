#pragma once
#include "CoreMinimal.h"
#include "FortAimAssist2D_InputParams.h"
#include "FortAimAssist2D_OwnerInfo.h"
#include "FortAimAssist2D_Target.h"
#include "FortAimAssist2D.generated.h"

USTRUCT(BlueprintType)
struct FFortAimAssist2D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAimAssist2D_InputParams InputParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAimAssist2D_OwnerInfo OwnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAimAssist2D_Target> TargetCache0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAimAssist2D_Target> TargetCache1;
    
public:
    FORTNITEGAME_API FFortAimAssist2D();
};

