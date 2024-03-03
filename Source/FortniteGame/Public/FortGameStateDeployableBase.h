#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDeployableBaseUseType.h"
#include "FortGameStatePvE.h"
#include "HordeDifficultyTierInfo.h"
#include "OnDeployableBaseManagerCreatedDelegate.h"
#include "FortGameStateDeployableBase.generated.h"

class AFortDeployableBaseManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStateDeployableBase : public AFortGameStatePvE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DeployableBaseManager, meta=(AllowPrivateAccess=true))
    AFortDeployableBaseManager* DeployableBaseManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeployableBaseManagerCreated OnDeployableBaseManagerCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireEndOfDayDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHordeDifficultyTierInfo> TierDifficultyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHordeDifficultyTierInfo> PrestigeTierDifficultyConfig;
    
public:
    AFortGameStateDeployableBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseStormShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldRespawnAtLastPawnLocation() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameDifficultyExplicitly(const float InGameDifficulty);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DeployableBaseManager();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStormShieldStartingRadiusOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStormShieldEndingRadiusOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStormShieldBreatherRadiusOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDeployableBaseUseType GetDeployableBaseUseType() const;
    
};

