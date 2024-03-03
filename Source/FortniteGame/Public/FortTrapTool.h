#pragma once
#include "CoreMinimal.h"
#include "FortDecoTool.h"
#include "FortTrapTool.generated.h"

class AFortWeapon;

UCLASS(Blueprintable)
class AFortTrapTool : public AFortDecoTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecalculateTrapPositionOnServer;
    
public:
    AFortTrapTool();
    UFUNCTION(BlueprintCallable)
    void OnEquip(AFortWeapon* OldWeapon);
    
};

