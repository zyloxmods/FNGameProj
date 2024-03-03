#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "TeamPlacementData.h"
#include "FortAthenaMutator_TeamPlacement.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_TeamPlacement : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamsInfo, meta=(AllowPrivateAccess=true))
    TArray<FTeamPlacementData> TeamsInfo;
    
public:
    AFortAthenaMutator_TeamPlacement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTeams();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamsInfo();
    
};

