#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortHUDElementWidget.h"
#include "AthenaAerialFeedback.generated.h"

class AFortPlayerState;
class UCommonTextBlock;
class UFortItemDefinition;
class UFortKeybindWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaAerialFeedback : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GliderRedeployTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AirbagDeployTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* AirbagItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeyBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Feedback;
    
public:
    UAthenaAerialFeedback();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSkydiveLeaderChanged(bool bEnabled, bool bLocal, AFortPlayerState* LeaderPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandleKeybindsChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleBalloonMovementChanged(bool bUsingBalloonMovement);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleTextChanged();
    
};

