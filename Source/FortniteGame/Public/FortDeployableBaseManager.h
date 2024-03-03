#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ActiveTieredCollectionLayoutArray.h"
#include "AvailableTierLayout.h"
#include "DeployableBaseArray.h"
#include "EDeployableBaseUseType.h"
#include "EHordeWaveStingerType.h"
#include "EnvironmentBuildingRestorationRecord.h"
#include "FortTierCollectionLayoutOutput.h"
#include "OnDeployableBasePlotsSpawnedDelegate.h"
#include "OnLocalDeployablePlotInventoryChangedDelegate.h"
#include "OnLocalPlayerEntersDeployablePlotDelegate.h"
#include "OnLocalPlayerLeavesDeployablePlotDelegate.h"
#include "PendingDeployableBaseUser.h"
#include "PendingDeployableManagerAction.h"
#include "Templates/SubclassOf.h"
#include "FortDeployableBaseManager.generated.h"

class ADeployableBasePlot;
class AFortDeployableBaseManager;
class UFortDeployableBaseCloudSaveItemDefinition;
class UFortDeployableBaseSkillTreeUnlocks;
class UFortTieredCollectionLayout;
class UObject;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API AFortDeployableBaseManager : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bRestrictedBuildingActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBusyWithPlotActions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyAllBuildingPiecesOnReload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPiecesDestroyedOnZoneCleanupPerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEnvPiecesRestoredPerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeployableBasesReadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EDeployableBaseUseType DeployableBaseUseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FActiveTieredCollectionLayoutArray ActiveTieredCollectionLayouts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeployableBasePlotsSpawned OnDeployableBasePlotsSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerEntersDeployablePlot OnLocalPlayerEntersDeployablePlotEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerLeavesDeployablePlot OnLocalPlayerLeavesDeployablePlotEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalDeployablePlotInventoryChanged OnLocalDeployablePlotInventoryChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDeployableBaseArray DeployableBaseArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortDeployableBaseCloudSaveItemDefinition* DeployableBaseItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADeployableBasePlot> DeployableBasePlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortDeployableBaseSkillTreeUnlocks* SupportedSkillTreeBasedUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumExpectedPlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPendingDeployableBaseUser> PendingUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPendingDeployableManagerAction> PendingDeployableManagerActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEnvironmentBuildingRestorationRecord> EnvironmentActorsRequiringRestoration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCaptureEnvironmentActorsForRestoration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWorldInitialized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bKeepBasesOnLogout: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayersPendingPlotReset;
    
public:
    AFortDeployableBaseManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetKeepDeployableBasesOnLogout(bool bInKeepBasesOnLogout);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReloadAllPlots();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetTierOutputForSelectedTier(int32 Tier, const UFortTieredCollectionLayout* Layout, FFortTierCollectionLayoutOutput& Output) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHighestDefeatedTierForPlayerAndLayout(FUniqueNetIdRepl PlayerId, const UFortTieredCollectionLayout* Layout) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDeployableBaseUseType GetDeployableBaseUseType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADeployableBasePlot* GetDeployableBasePlotFromLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortDeployableBaseManager* GetCurrent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAvailableTiers(TArray<FAvailableTierLayout>& OutAvailableTiers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllDeployableBasePlots(TArray<ADeployableBasePlot*>& OutDeployableBasePlots) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void BroadcastHordeWaveStinger(EHordeWaveStingerType StingerType) const;
    
};

