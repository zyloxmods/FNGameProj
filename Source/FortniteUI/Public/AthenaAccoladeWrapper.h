#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AthenaAccolades.h"
#include "AthenaAccoladeWrapper.generated.h"

UCLASS(Blueprintable)
class UAthenaAccoladeWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaAccolades AccoladeData;
    
    UAthenaAccoladeWrapper();
};

