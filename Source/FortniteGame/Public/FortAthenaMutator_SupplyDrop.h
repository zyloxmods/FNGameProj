#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_EQSProviderInterface.h"
#include "FortSupplyDropMutatorData.h"
#include "FortAthenaMutator_SupplyDrop.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class AFortAthenaMutator_SupplyDrop : public AFortAthenaMutator, public IFortAthenaMutator_EQSProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpawnFailureLockoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* BasePlacementQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseQueryingAttemptIntervalTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSupplyDropMutatorData> SafeZoneMutatorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> BaseQueryResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnvQuery> SupplyDropRemovalQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SupplyDropRemovalQueryInterval;
    
public:
    AFortAthenaMutator_SupplyDrop();
    UFUNCTION(BlueprintCallable)
    void RemoveOutOfStormSupplyDrop();
    
    
    // Fix for true pure virtual functions not being implemented
};

