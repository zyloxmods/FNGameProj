#pragma once
#include "CoreMinimal.h"
#include "EDefenderSpawnFailureReason.h"
#include "EFortRarity.h"
#include "FortGameStateZone.h"
#include "PickupManagementSettings.h"
#include "FortGameStatePvE.generated.h"

class AFortAIPawn;
class AFortAircraft;
class AFortPlayerStateZone;
class UFortItem;
class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStatePvE : public AFortGameStateZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowMulching;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AFortAIPawn*> DeployedDefenders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortAircraft* Aircraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseMoonbeamHUD;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PickupsAllowedMax;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PickupsDesiredSlack;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupDespawnDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPickupManagement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePickupManagement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity ImportantPickupThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponSwappingEnabled;
    
public:
    AFortGameStatePvE();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseMoonbeamHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseMoonbeamGameplayFunctionality() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPickupManagementSettings(UPARAM(Ref) FPickupManagementSettings& PickupSettings);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnDefenderRemoved(AFortAIPawn* Defender);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnDefenderDeployed(AFortAIPawn* Defender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponSwappingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwappableWeaponType(const UFortItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMulchingAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefenderItemDeployed(UFortItem* DefenderItem, AFortPlayerStateZone* RequestingPlayer) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GetPickupManagementSettings(FPickupManagementSettings& PickupSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAircraft* GetAircraft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwapWeapon(const UFortItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnDefender(AFortPlayerStateZone* PlayerCausingRemoval, const FName RemoveFromDefenderSquadId, AFortAIPawn*& OutDefenderToBeRemoved, EDefenderSpawnFailureReason& OutFailureReason) const;
    
};

