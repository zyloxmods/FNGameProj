#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFortScriptedActionEnvironment.h"
#include "FortClientEventInterface.h"
#include "FortClientEventName.h"
#include "FortScriptedActionParams.h"
#include "FortScriptedAction.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortScriptedAction : public AActor, public IFortClientEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortScriptedActionEnvironment ActionEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortClientEventName ClientEventTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOtherActionsWhenActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortScriptedActionParams CachedParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    AFortScriptedAction();
    UFUNCTION(BlueprintCallable)
    void GetParams(FFortScriptedActionParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(const FFortScriptedActionParams& Params);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CompleteAction(bool bRegisterActionAgain);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanExecute(const FFortScriptedActionParams& Params) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAction(bool bRegisterActionAgain);
    
    
    // Fix for true pure virtual functions not being implemented
};

