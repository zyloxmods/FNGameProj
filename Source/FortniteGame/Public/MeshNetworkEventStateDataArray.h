#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MeshNetworkEventStateData.h"
#include "MeshNetworkEventStateDataArray.generated.h"

class AFortMeshNetworkEventsLoader;

USTRUCT(BlueprintType)
struct FMeshNetworkEventStateDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    AFortMeshNetworkEventsLoader* OwningLoader;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMeshNetworkEventStateData> StateData;
    
public:
    FORTNITEGAME_API FMeshNetworkEventStateDataArray();
};

