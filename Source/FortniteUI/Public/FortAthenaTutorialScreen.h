#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "Engine/DataTable.h"
#include "Blueprint/UserWidget.h"
#include "FortAthenaTutorialScreen.generated.h"

class UCommonWidgetSwitcher;
class UFortAthenaTutorialBaseInteraction;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaTutorialScreen : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitedDisplayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InputAction_NameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GamepadInputAction_NameArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaTutorialBaseInteraction* Interaction_TutorialStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaTutorialBaseInteraction* InteractionRegular_TutorialStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MoveableHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MoveableHighlight_Regular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher;
    
public:
    UFortAthenaTutorialScreen();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInputDisplay(ECommonInputType CurrentInputType);
    
    UFUNCTION(BlueprintCallable)
    void SkipGuidedTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupInputActionNames(const TArray<FName>& Names);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTutorialProgressUpdated(int32 CurrentPhase);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastTutorialPopupCanceled();
    
};

