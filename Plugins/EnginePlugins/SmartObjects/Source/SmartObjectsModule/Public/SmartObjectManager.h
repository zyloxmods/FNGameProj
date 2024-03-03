#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SmartObjectID.h"
#include "SmartObjectRuntime.h"
#include "SmartObjectManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class SMARTOBJECTSMODULE_API USmartObjectManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSmartObjectID, FSmartObjectRuntime> RuntimeSmartObjects;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateIfMissing: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultUnusedSmartObjectLifespan;
    
public:
    USmartObjectManager();
};

