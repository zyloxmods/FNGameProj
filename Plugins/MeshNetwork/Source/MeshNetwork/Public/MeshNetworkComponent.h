#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AggregatedFunction.h"
#include "EMeshNetworkNodeType.h"
#include "EMeshNetworkRelevancy.h"
#include "NoAggregationParameters.h"
#include "MeshNetworkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MESHNETWORK_API UMeshNetworkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshNetworkRelevancy MeshRelevancy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, double> AggregationTimeouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> NoAggregationFunctions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNoAggregationParameters> NoAggregationParameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FAggregatedFunction> AggregatedFunctions;
    
public:
    UMeshNetworkComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMeshNetworkNodeType GetMeshNetworkNodeType() const;
    
};

