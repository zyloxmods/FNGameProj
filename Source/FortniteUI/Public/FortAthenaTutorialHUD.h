#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "FortAthenaTutorialHUD.generated.h"

class AActor;
class AFortAthenaTutorialManager;
class UCommonButton;
class UFortAthenaTutorialProgressBar;
class UFortAthenaTutorialScreen;
class UFortAthenaTutorialTargetCounter;
class UFortAthenaTutorialTextPrompt;
class UOverlay;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaTutorialHUD : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> HighlightTagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaTutorialManager* TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTrackedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_TutorialScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Athena_Tutorial_Skip_Mobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaTutorialTargetCounter* Athena_Tutorial_TargetCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaTutorialProgressBar* Athena_Tutorial_ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaTutorialScreen* Athena_Tutorial_ModalPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaTutorialTextPrompt* TextPrompt_Tutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Finger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Gradient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget_EasyInteractFinger;
    
public:
    UFortAthenaTutorialHUD();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFingerPointingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DragToTurnEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CompletedEnabled();
    
public:
    UFUNCTION(BlueprintCallable)
    void BroadcastSkipMenuOpened();
    
};

