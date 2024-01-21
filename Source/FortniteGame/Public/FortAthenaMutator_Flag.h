#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_Flag.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_Flag : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameMsgText_Intro;
    
public:
    AFortAthenaMutator_Flag();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3);
    
};

