#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AggregatedFunction.h"
#include "EMeshNetworkNodeType.h"
#include "EMeshNetworkRelevancy.h"
#include "MeshNetworkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MESHNETWORK_API UMeshNetworkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshNetworkRelevancy MeshRelevancy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, double> AggregationTimeouts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FAggregatedFunction> AggregatedFunctions;
    
public:
    UMeshNetworkComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMeshNetworkNodeType GetMeshNetworkNodeType() const;
    
};

