#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "FortRespawnLogicData.h"
#include "LimitedLifeByTeamData.h"
#include "LimitedLifeDataArray.h"
#include "FortAthenaMutator_BasicLimitedLives.generated.h"

class AFortPlayerState;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_BasicLimitedLives : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLimitedLifeByTeamData DefaultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FLimitedLifeByTeamData> SpecificTeamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LiveData, meta=(AllowPrivateAccess=true))
    FLimitedLifeDataArray LiveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AFortPlayerState*> AlreadySeenStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShouldCalculateRespawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShowSquadInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData RespawnLogicData;
    
public:
    AFortAthenaMutator_BasicLimitedLives();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LiveData();
    
};

