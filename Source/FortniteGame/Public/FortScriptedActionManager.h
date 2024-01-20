#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortAvailableScriptedAction.h"
#include "FortClientEvent.h"
#include "FortClientEventInterface.h"
#include "FortClientEventName.h"
#include "FortScriptedActionManager.generated.h"

class AFortScriptedAction;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortScriptedActionManager : public AActor, public IFortClientEventInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortScriptedAction*> ActiveScriptedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAvailableScriptedAction> AvailableScriptedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAvailableScriptedAction> PendingAvailableScriptedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortClientEventName> PendingClientEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsProcessingClientEvent;
    
public:
    AFortScriptedActionManager();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void HandleClientEvent_Undefined(UObject* EventSource, UObject* EventFocus, const FFortClientEvent& ClientEvent);
    
    
    // Fix for true pure virtual functions not being implemented
};

