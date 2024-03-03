#pragma once
#include "CoreMinimal.h"
#include "FortAimAssist2D_InputParams.h"
#include "FortAimAssist2D_OwnerInfo.h"
#include "FortAimAssist2D_Target.h"
#include "FortTouchAimAssist.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortTouchAimAssist {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AutoFireTargetActor;
    
public:
    FORTNITEGAME_API FFortTouchAimAssist();
};

