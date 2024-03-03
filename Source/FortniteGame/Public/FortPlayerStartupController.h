#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AllInCountdownInitiatedDelegate.h"
#include "PlayerStartupControllerCreatedDelegate.h"
#include "PlayerStartupControllerDestroyedDelegate.h"
#include "PlayerStartupControllerRegisteredDelegate.h"
#include "FortPlayerStartupController.generated.h"

class AFortPlayerControllerZone;

UCLASS(Blueprintable, Config=Game)
class AFortPlayerStartupController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseIndividualHoldingAreas;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAfterFirstInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ContainmentTimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllInCountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ErodeShieldTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopJoinabilityTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyImmediately;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStartupControllerCreated OnPlayerStartupControllerCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStartupControllerRegistered OnPlayerStartupControllerRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllInCountdownInitiated OnAllInCountdownInitiated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStartupControllerDestroyed OnPlayerStartupControllerDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStartupControllerDestroyed OnResetContainmentTimer;
    
    AFortPlayerStartupController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoadedIn_BP(AFortPlayerControllerZone* NewPlayerPC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnAllPlayersLoadedIn_BP();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void HandlePlayerStartupControllerReset();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void HandlePlayerStartupControllerRegistered();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void HandlePlayerStartupControllerDestroyed();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void HandlePlayerStartupControllerCreated();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void HandleAllInCountdownInitiated();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetNumPlayersStillWaitingFor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetNumPlayersExpected();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetNumPlayersCurrentlyReady();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float GetContainmentTimeRemaining();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropContainmentTimeToAllInCountdownTime();
    
};

