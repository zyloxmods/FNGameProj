#pragma once
#include "CoreMinimal.h"
#include "EFortIdleDetectionState.h"
#include "EFortQuickBars.h"
#include "FortPlayerControllerZone.h"
#include "QuickBar.h"
#include "FortPlayerControllerPvE.generated.h"

class UFortGadgetItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerPvE : public AFortPlayerControllerZone {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuickBar CachedPrimaryQuickBarRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuickBar CachedSecondaryQuickBarRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortGadgetItemDefinition*> HeroLoadoutGadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortGadgetItemDefinition*> HeroAbilityGadgets;
    
public:
    AFortPlayerControllerPvE();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateQuickBarRecordsCache(const FQuickBar& PrimaryQuickBarRecord, const FQuickBar& SecondaryQuickBarRecord);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTriggerSetupTeleportCameraEvent();
    
    UFUNCTION(BlueprintCallable)
    void RequestIdleDetectionState(EFortIdleDetectionState NewIdleDetectionState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RefreshHarvestingWeapon();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleQuickBarChanged(EFortQuickBars QuickBarType, const TArray<int32>& Slots);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateQuickBarRecordsCache(const FQuickBar& PrimaryQuickBarRecord, const FQuickBar& SecondaryQuickBarRecord);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendKickMessage(const FText& MESSAGE);
    
};

