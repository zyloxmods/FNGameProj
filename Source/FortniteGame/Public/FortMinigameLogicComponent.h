#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortMinigameState.h"
#include "LevelSaveSpawnable.h"
#include "OnMinigameAssignmentChangedDelegate.h"
#include "OnMinigameStateChangedDelegate.h"
#include "OnPlayspaceEditModeChangedDelegate.h"
#include "SimpleDynamicMulticastDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortMinigameLogicComponent.generated.h"

class AFortMinigame;
class UFortMinigameStatFilter;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Creative, meta=(BlueprintSpawnableComponent))
class UFortMinigameLogicComponent : public UActorComponent, public ILevelSaveSpawnable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameStateChanged MinigameStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDynamicMulticastDelegate MinigameStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDynamicMulticastDelegate MinigameEndedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayspaceEditModeChanged OnPlayspaceEditModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameAssignmentChanged OnAddedToMinigame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameAssignmentChanged OnRemovedFromMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MinigameTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortMinigameStatFilter>> DesiredStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRelevantForMinigameInitialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysTryHandleDelayedStateChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=HandleMinigameSet, meta=(AllowPrivateAccess=true))
    AFortMinigame* CurrentMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortMinigame* CachedMinigame;
    
public:
    UFortMinigameLogicComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryAttachToMinigame();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMinigameTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePlayspaceEditModeChange(bool bInEditMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState NewMinigameState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMinigameStarted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMinigameSet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMinigameEnded();
    
    UFUNCTION(BlueprintCallable)
    void AddMinigameTag(const FGameplayTag& Tag);
    
    
    // Fix for true pure virtual functions not being implemented
};

