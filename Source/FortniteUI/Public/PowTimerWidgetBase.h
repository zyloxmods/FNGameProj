#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "LTMWidgetBase.h"
#include "PowTimerWidgetBase.generated.h"

class AFortAthenaMutator_Pow;

UCLASS(Blueprintable, EditInlineNew)
class UPowTimerWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeShowTimerAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Pow* BaseMutator;
    
public:
    UPowTimerWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedRespawnTime(int32 Minutes, int32 Seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRespawnTimeElasped();
    
private:
    UFUNCTION(BlueprintCallable)
    void NewRespawnTime(int32 NewTimeRemaining);
    
};

