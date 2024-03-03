#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InputCoreTypes.h"
#include "InputCoreTypes.h"
#include "FortItemPlacementActor.generated.h"

class AFortPlayerPawn;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable)
class AFortItemPlacementActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent_LoadingIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActorHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* CurrentPawn;
    
public:
    AFortItemPlacementActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemovePreviewActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewActorSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeroPawnSetupCompleted();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePawnTouchBegin(TEnumAsByte<ETouchIndex::Type> FingerIndex, AActor* TouchedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnFinishedApplyingCharacterParts(AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnEndCursorOver(AActor* TouchedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnClicked(AActor* TouchedActor, FKey ButtonPressed);
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnBeginCursorOver(AActor* TouchedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleFinishedCharacterCustomization(AFortPlayerPawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleBoneTransformsFinalized();
    
};

