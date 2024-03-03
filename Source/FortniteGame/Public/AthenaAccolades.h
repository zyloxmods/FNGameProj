#pragma once
#include "CoreMinimal.h"
#include "AthenaAccolades.generated.h"

class UFortAccoladeItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaAccolades {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccoladeItemDefinition* AccoladeDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FAthenaAccolades();
};

