#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EFortIdleDetectionState.h"
#include "EFortQuickBars.h"
#include "FortPlayerControllerZone.h"
#include "QuickBar.h"
#include "FortPlayerControllerPvE.generated.h"

class AFortClientAnnouncement_Basic;
class UFortGadgetItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerPvE : public AFortPlayerControllerZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAutoSlotWeaponsAtStart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecycleBrokenWeapons;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuickBar CachedPrimaryQuickBarRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuickBar CachedSecondaryQuickBarRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortGadgetItemDefinition*> HeroLoadoutGadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortGadgetItemDefinition*> HeroAbilityGadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortClientAnnouncement_Basic* IdleWarningAnnouncement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle IdleWarningUpdateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IdleKickEstimatedTime;
    
public:
    AFortPlayerControllerPvE();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateQuickBarRecordsCache(const FQuickBar& PrimaryQuickBarRecord, const FQuickBar& SecondaryQuickBarRecord);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTriggerSetupTeleportCameraEvent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetPlayerDeathReportForForcePlayerRestart();
    
    UFUNCTION(BlueprintCallable)
    void RequestIdleDetectionState(EFortIdleDetectionState NewIdleDetectionState, const FString& Reason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RefreshHarvestingWeapon();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleQuickBarChanged(EFortQuickBars QuickBarType, const TArray<int32>& Slots);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateQuickBarRecordsCache(const FQuickBar& PrimaryQuickBarRecord, const FQuickBar& SecondaryQuickBarRecord);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowIdleWarning(float TimeUntilKick);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHideIdleWarning();
    
};

