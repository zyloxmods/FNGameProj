#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SidecarSys.generated.h"

class USidecarDss;
class USidecarInventorySys;

UCLASS(Blueprintable)
class SIDECARSYS_API USidecarSys : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USidecarDss* SidecarDss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USidecarInventorySys* SidecarInventory;
    
public:
    USidecarSys();
};

