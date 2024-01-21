#pragma once
#include "CoreMinimal.h"
#include "EMeshNetworkNodeType.h"
#include "MeshNetworkStatus.generated.h"

USTRUCT(BlueprintType)
struct FMeshNetworkStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConnectedToRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshNetworkNodeType GameServerNodeType;
    
    FORTNITEGAME_API FMeshNetworkStatus();
};

