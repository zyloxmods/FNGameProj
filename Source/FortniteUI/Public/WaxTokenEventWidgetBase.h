#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "WaxTokenEventWidgetBase.generated.h"

class AFortAthenaMutator_Wax;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class UWaxTokenEventWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Wax* WaxMutator;
    
public:
    UWaxTokenEventWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTokensCollected(AFortPlayerStateAthena* Player, int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTokensAwarded(AFortPlayerStateAthena* Player, int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlyingTokensApplied(AFortPlayerStateAthena* Player, int32 Amount);
    
};

