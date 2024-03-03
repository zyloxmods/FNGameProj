#pragma once
#include "CoreMinimal.h"
#include "ProfileGoScenario.h"
#include "ProfileGoGeneratedScenario.generated.h"

USTRUCT(BlueprintType)
struct FProfileGoGeneratedScenario : public FProfileGoScenario {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Arguments;
    
    FORTNITEGAME_API FProfileGoGeneratedScenario();
};

