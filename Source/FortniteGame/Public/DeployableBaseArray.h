#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "DeployableBaseInstance.h"
#include "DeployableBaseArray.generated.h"

USTRUCT(BlueprintType)
struct FDeployableBaseArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDeployableBaseInstance> DeployableBases;
    
public:
    FORTNITEGAME_API FDeployableBaseArray();
};

