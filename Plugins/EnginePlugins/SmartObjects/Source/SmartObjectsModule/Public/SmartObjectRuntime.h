#pragma once
#include "CoreMinimal.h"
#include "SmartObjectUse.h"
#include "SmartObjectRuntime.generated.h"

class IRichSmartObjectInterface;
class URichSmartObjectInterface;
class USmartObjectComponent;

USTRUCT(BlueprintType)
struct FSmartObjectRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USmartObjectComponent* SOComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IRichSmartObjectInterface> AsRichSO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartObjectUse> ActiveUses;
    
    SMARTOBJECTSMODULE_API FSmartObjectRuntime();
};

