#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ScriptedAction.h"
#include "ScriptedBehavior.h"
#include "ScriptedBehaviorScriptCompleteDelegate.h"
#include "FortPawnScriptedBehavior.generated.h"

UCLASS(Blueprintable, Config=Game, Within=FortPlayerPawn)
class UFortPawnScriptedBehavior : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptedAction> ActionTemplates;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptedBehavior> ScriptedBehaviors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptedBehavior CurrentBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptedAction CurrentCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptedBehaviorScriptComplete ScriptComplete;
    
public:
    UFortPawnScriptedBehavior();
private:
    UFUNCTION(BlueprintCallable)
    void PlaceStructure();
    
};

