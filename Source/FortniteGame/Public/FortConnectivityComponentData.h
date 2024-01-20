#pragma once
#include "CoreMinimal.h"
#include "FortConnectionData.h"
#include "FortConnectivityComponentData.generated.h"

USTRUCT(BlueprintType)
struct FFortConnectivityComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFortConnectionData> Connections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsPowered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsProvidingPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAllowConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAllowsPowerToPassThrough;
    
    FORTNITEGAME_API FFortConnectivityComponentData();
};

