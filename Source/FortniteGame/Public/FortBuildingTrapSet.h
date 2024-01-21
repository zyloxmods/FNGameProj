#pragma once
#include "CoreMinimal.h"
#include "FortBuildingActorSet.h"
#include "FortGameplayAttributeData.h"
#include "FortBuildingTrapSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortBuildingTrapSet : public UFortBuildingActorSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Durability, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Durability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData DurabilityCostPerFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ArmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ReloadTime;
    
    UFortBuildingTrapSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Durability();
    
};

