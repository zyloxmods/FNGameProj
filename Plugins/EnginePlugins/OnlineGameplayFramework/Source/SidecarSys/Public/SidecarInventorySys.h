#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SidecarInventorySys.generated.h"

UCLASS(Blueprintable, Config=DefaultEngine)
class SIDECARSYS_API USidecarInventorySys : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InventoryDownloadUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InventoryLockUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemUpdateUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReleaseAllUrl;
    
public:
    USidecarInventorySys();
};

