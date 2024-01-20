#pragma once
#include "CoreMinimal.h"
#include "ESurvivalObjectiveIconState.h"
#include "SurvivalObjectiveIconData.generated.h"

USTRUCT(BlueprintType)
struct FSurvivalObjectiveIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESurvivalObjectiveIconState IconState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESurvivalObjectiveIconState PrevIconState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpecialActorID;
    
    FORTNITEUI_API FSurvivalObjectiveIconData();
};

