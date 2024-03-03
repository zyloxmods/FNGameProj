#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CalendarRequirement.h"
#include "EVisibilityResponse.h"
#include "ItemRequirement.h"
#include "ProfileStatRequirement.h"
#include "QuestRequirement.h"
#include "SimpleVisibilityResponseDelegateDelegate.h"
#include "FortNavigationVisibilityComponent.generated.h"

class AActor;
class AFortPlayerController;
class UFortGameStateComponent_EventLevel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortNavigationVisibilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> WeakActor;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleVisibilityResponseDelegate HandleCustomPassed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleVisibilityResponseDelegate HandleCustomFailed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPassedRules;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 LastProfileRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomSkipCollision;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerController> RoomOwner;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortGameStateComponent_EventLevel> GSC_StreamingLevelOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ValidActiveCameraTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludedActiveCameraTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestRequirement> Quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemRequirement> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCalendarRequirement> CalendarEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProfileStatRequirement> ProfileStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugTrackingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLogFails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool debugVisibilityLastKnownState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisibilityResponse ActorResponse;
    
public:
    UFortNavigationVisibilityComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerChanged(AFortPlayerController* NewRoomOwner);
    
    UFUNCTION(BlueprintCallable)
    void HandleActiveCameraChanged(FGameplayTag CameraTag);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FString> Editor_GetValidProfileStats() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> Editor_GetValidObjectives() const;
    
};

