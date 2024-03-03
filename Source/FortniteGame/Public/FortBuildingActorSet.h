#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAttributeData.h"
#include "FortHealthSet.h"
#include "FortBuildingActorSet.generated.h"

UCLASS(Blueprintable)
class UFortBuildingActorSet : public UFortHealthSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildTime, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData BuildTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepairTime, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData RepairTime;
    
    UFortBuildingActorSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepairTime(const FFortGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildTime(const FFortGameplayAttributeData& OldValue);
    
};

