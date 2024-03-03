#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "AthenaGameMessageData.h"
#include "FortAthenaMutator_TDM.h"
#include "InfiltrationRoundInfoMutatorInterface.h"
#include "FortAthenaMutator_SpyRumble.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_SpyRumble : public AFortAthenaMutator_TDM, public IInfiltrationRoundInfoMutatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumKillsForPerkUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ScoreToAddOnSupplyDropCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SupplyDropAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_Win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_Lost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumKillsForNextPerkUnlock, meta=(AllowPrivateAccess=true))
    int32 NumKillsForNextPerkUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillCountCutOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_SupplyDropOpened_Friendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_SupplyDropOpened_Enemy;
    
public:
    AFortAthenaMutator_SpyRumble();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NumKillsForNextPerkUnlock();
    
    
    // Fix for true pure virtual functions not being implemented
};

