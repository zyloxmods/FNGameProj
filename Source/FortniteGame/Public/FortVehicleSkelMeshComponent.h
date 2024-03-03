#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "FortVehicleSkelMeshComponent.generated.h"

class UNavArea;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortVehicleSkelMeshComponent : public USkeletalMeshComponentBudgeted {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNavArea> AreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeToBecomeNavIrrelevant;
    
public:
   
private:
    UFUNCTION(BlueprintCallable)
    void OnSleepStateChanged(const bool bIsAwake);
    
};

