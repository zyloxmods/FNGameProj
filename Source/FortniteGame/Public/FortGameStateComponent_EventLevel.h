#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AnalyticsNavActorClickedData.h"
#include "EndRestedXpDripDelegate.h"
#include "FortGameStateComponent_DynamicStreamingLevel.h"
#include "HiddenActors.h"
#include "OnActiveCameraChangedDelegate.h"
#include "OnRoomOwnerChangedDelegate.h"
#include "SpecialNavActorInteractionDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortGameStateComponent_EventLevel.generated.h"

class AActor;
class AFortEventLevelCamera;
class AFortEventLevelNavigationActor;
class AFortPlayerController;
class ALevelSequenceActor;
class UAthenaRewardEventGraph;
class UCameraComponent;
class UFortCinematicCamera;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameStateComponent_EventLevel : public UFortGameStateComponent_DynamicStreamingLevel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialNavActorInteraction OnSpecialInterationTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndRestedXpDrip OnRestedXpDripStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoomOwnerChanged RoomOwnerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveCameraChanged ActiveCameraChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> BangStateTracker;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortEventLevelCamera>> SceneCameras;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerController> RoomOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaRewardEventGraph> AssignedRewardGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaRewardEventGraph* RewardGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RewardGraphNodesVisuallyDisplayed;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortEventLevelNavigationActor>> ClickableActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHiddenActors> HiddenActorsToShowOnceClaimed;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortEventLevelNavigationActor> CurrentSelectedNavObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCinematicCamera> EventLevelCinematicOverrideClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ActiveCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraToTurnLightSwitchOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALevelSequenceActor> TransitionSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag SelectedCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag LastSelectedNavObj;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortEventLevelCamera>> CamerasPendingRegistration;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortEventLevelNavigationActor>> NavigationActorsPendingRegistration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticsNavActorClickedData> NavigationActorClickedData;
    
public:
    UFortGameStateComponent_EventLevel();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TryToClaimRewardGraphNode(FGameplayTag NodeTag) const;
    
    UFUNCTION(BlueprintCallable)
    void StartRestedXpTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCamera(FGameplayTag NewActiveCamera, bool bUseTransition);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterNavigationActor(AFortEventLevelNavigationActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHiddenActor(AActor* InActor, FGameplayTag EventGraphNode);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterCamera(AFortEventLevelCamera* InCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavActorSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavActorHovered();
    
    UFUNCTION(BlueprintCallable)
    void NotifyRestedXpGenAmount(int32 RestedXp);
    
    UFUNCTION(BlueprintCallable)
    void LinkNavActorToCamera(AFortEventLevelNavigationActor* InActor, FGameplayTag CameraTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnCameraCut(UCameraComponent* CameraComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCameraBlendComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleObjectSpecialInteraction(FGameplayTag ActionTag, FGameplayTag CameraTag, AFortEventLevelNavigationActor* InActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void GoToCamera(FGameplayTag CameraToViewFrom);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortEventLevelNavigationActor* GetLastNavObject() const;
    
    UFUNCTION(BlueprintCallable)
    void EndRestXpTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanGainRestedXp(bool& bResult) const;
    
};

