#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortTeamInfo.h"
#include "OnFOBCoresDestroyedDelegate.h"
#include "OnFOBCoresLoadedDelegate.h"
#include "OnHandleTeamLevelChangedDelegate.h"
#include "OnHandleTeamXPChangedDelegate.h"
#include "TeamFOBCoreBuildingEntryArray.h"
#include "TeamStrategicBuildingEntryArray.h"
#include "TeamStrategicBuildingHandle.h"
#include "FortTeamInfoPvPBaseDestruction.generated.h"

class ABuildingFOBCoreActor;
class AFortPvPBaseCornerstone;
class AStrategicBuildingActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortTeamInfoPvPBaseDestruction : public AFortTeamInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortPvPBaseCornerstone* TeamCornerstone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTeamStrategicBuildingEntryArray TeamStrategicBuildingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamFOBCoreBuildingActors, meta=(AllowPrivateAccess=true))
    FTeamFOBCoreBuildingEntryArray TeamFOBCoreBuildingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AllFOBCoresLoaded, meta=(AllowPrivateAccess=true))
    uint8 bAllFOBCoresLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StrategicBuildingHandleGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamLevel, meta=(AllowPrivateAccess=true))
    int32 TeamLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleTeamLevelChanged OnHandleTeamLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamExperience, meta=(AllowPrivateAccess=true))
    int32 TeamExperience;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleTeamXPChanged OnHandleTeamXPChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFOBCoresLoaded OnFOBCoresLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFOBCoresDestroyed OnFOBCoresDestroyed;
    
public:
    AFortTeamInfoPvPBaseDestruction();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamFOBCoreBuildingActors();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamExperience();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllFOBCoresLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeamFOBCoresAndSpawnTags(TArray<ABuildingFOBCoreActor*>& OutFOBCores, TArray<FGameplayTagContainer>& OutFOBSpawnTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeamFOBCores(TArray<ABuildingFOBCoreActor*>& OutFOBCores);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPvPBaseCornerstone* GetTeamCornerstone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategicBuildingActor* GetStrategicBuildingActor(const FTeamStrategicBuildingHandle& Handle) const;
    
};

