#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "DeployableBaseInstance.generated.h"

class ADeployableBasePlot;

USTRUCT(BlueprintType)
struct FDeployableBaseInstance : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADeployableBasePlot* DeployableBase;
    
    FORTNITEGAME_API FDeployableBaseInstance();
};

