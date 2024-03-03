#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EQuestUpdateType.h"
#include "EQuestVisibilityResponse.h"
#include "QuestComponentCustomUpdatedOjectiveDelegate.h"
#include "QuestComponentCustomVisualsPassedDelegate.h"
#include "SimpleQuestComponentDelegateDelegate.h"
#include "ConsolidatedQuestComponent.generated.h"

class AFortGameStateAthena;
class AFortPlayerController;
class UFortPlaylist;
class UFortQuestItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UConsolidatedQuestComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleQuestComponentDelegate OnQuestNotReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleQuestComponentDelegate OnQuestReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleQuestComponentDelegate OnQuestComponentScuccesEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleQuestComponentDelegate OnCustomSetVisualsToFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestComponentCustomVisualsPassed OnCustomSetVisualsToPassed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestComponentCustomUpdatedOjective OnCustomUpdateObjective;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestComponentCustomUpdatedOjective OnCustomUpdateQuest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEnableEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockedPlaylistTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveBackendName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestVisibilityResponse ComponentResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestUpdateType UpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInteractable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayUntilCurrentQuestsReady;
    
public:
    UConsolidatedQuestComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCompletedForPlayer(AFortPlayerController* InPlayerController, bool bCompleted);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestActivated(const UFortQuestItem* QuestItem, FName ObjectiveName);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags);
    
    UFUNCTION(BlueprintCallable)
    void OnCalendarUpdated();
    
    UFUNCTION(BlueprintCallable)
    bool IsInteractable(AFortPlayerController* InteractingController);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FName> Editor_GetValidObjectives() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DelayBeginPlay();
    
};

