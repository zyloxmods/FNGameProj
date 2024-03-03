#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "FortAthenaBTTask_PlayEmote.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTTask_PlayEmote : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayEmoteExecutionStatusKeyName;
    
public:
    UFortAthenaBTTask_PlayEmote();
};

