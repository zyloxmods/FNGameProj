#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/UserWidgetPool.h"
#include "ButtonInteractionPair.h"
#include "Templates/SubclassOf.h"
#include "FortTouchInteractionLayer.generated.h"

class AActor;
class AFortPlayerController;
class UCanvasPanel;
class UFortControllerComponent_Interaction;
class UFortInteractContextInfo;
class UFortTouchInteractionButton;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortTouchInteractionLayer : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTouchInteractionButton> WidgetClass;
    
  //  UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
//    FUserWidgetPool WidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ContentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FButtonInteractionPair> InteractableButtonMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* FocusedInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* OwningPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_Interaction* InteractionComponent;
    
public:
    UFortTouchInteractionLayer();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateButtonTimer(AActor* In, float TotalDuration, float Remaining);
    
    UFUNCTION(BlueprintCallable)
    void UpdateButtonFocusForInteraction(UFortInteractContextInfo* NewInteraction);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInteraction(AActor* In);
    
    UFUNCTION(BlueprintCallable)
    void AddInteraction(AActor* In);
    
};

